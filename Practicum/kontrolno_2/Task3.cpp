/* 
    Напишете програма, която:
    ● въвежда размерите на двумерен масив от цели числа и въвежда елементите му;
    ● въвежда цяло число К;
    ● реализира функция, която по въведените данни създава нов масив и в него записва
    елементите от входния, които са кратни на К. Относителният ред на елементите за
    всеки ред да се запази. Всеки елемент остава на съответния си ред, като не трябва да
    има празни редове;
    ● използва горната функция за получаване на такъв масив, след което го извежда на
    екрана.
    Входният и новият масив трябва да са заделени с точна големина

*/
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::nothrow;

int cntRows(int **mat, int n, int m, int k)
{
    int rows = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] % k == 0)
            {
                rows++;
                break;
            }
        }
    }
    return rows;
}

void deallocateMatrix(int **mat, int rows)
{
    for (int i = 0; i < rows; i++)
    {
        delete[] mat[i];
    }
    delete[] mat;
}

int **allocateMatrix(int n, int m = 0)
{
    int **mat = new (nothrow) int *[n];
    if (!mat)
    {
        return nullptr;
    }
    if (m == 0)
    {
        return mat;
    }
    for (int i = 0; i < n; i++)
    {
        mat[i] = new (nothrow) int[m];
        if (!mat[i])
        {
            deallocateMatrix(mat, i);
            return nullptr;
        }
    }
    return mat;
}

int *allocateArray(int n)
{
    int *arr = new (nothrow) int[n];
    if (!arr) {
        return nullptr;
    }
    return arr;
}

int countNumDivByK(int *arr, int m, int k)
{
    int cnt = 0;
    for (int i = 0; i < m; i++)
    {
        if (arr[i] % k == 0)
        {
            cnt++;
        }
    }
    return cnt;
}

void deallocateArray(int *arr)
{
    delete[] arr;
}

int **numbersDivByK(int **mat, int n, int m, int k, int* cntDivByK, int rows)
{
    int **matDivK = allocateMatrix(rows);
    if (!matDivK) {
        return nullptr;
    }

    int row = 0;
    for (int i = 0; i < n; i++)
    {
        int cnt = countNumDivByK(mat[i], m, k);
        if (cnt <= 0) { 
            continue;
        }

        cntDivByK[row] = cnt;
        matDivK[row] = allocateArray(cnt);
        if (!matDivK[row]) {
            deallocateArray(cntDivByK);
            deallocateMatrix(matDivK, rows);
            return nullptr;
        }

        int col = 0;
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] % k != 0) {
                continue; 
            }

            matDivK[row][col] = mat[i][j];
            col++;
        }

        row++;
    }

    return matDivK;
}

void printMatrix(int **mat, int rows, int *cntCol)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cntCol[i]; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int** read(int &n, int &m, int &k) {
    cin >> n >> m;
    int** mat = allocateMatrix(n, m);
    if (!mat) {
        return nullptr;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }

    cin >> k;

    return mat;
}

int main()
{
    int n, m, k;
    int **mat;

    // read input
    mat = read(n, m, k);
    if (!mat) {
        return -1;
    }

    // prepare counters array
    int rows = cntRows(mat, n, m, k);
    int *cntDivByK = new (nothrow) int[rows];
    if (!cntDivByK) {
        deallocateMatrix(mat, n);
        return -1;
    }

    // populate matrix with divideable by k numbers
    int** matDivByK = numbersDivByK(mat, n, m, k, cntDivByK, rows);
    if (!matDivByK) {
        deallocateMatrix(mat, n);
        deallocateArray(cntDivByK);
        return -1;
    }

    printMatrix(matDivByK, rows, cntDivByK);
    
    deallocateMatrix(mat, n);
    deallocateArray(cntDivByK);
    deallocateMatrix(matDivByK, rows);

    return 0;
}