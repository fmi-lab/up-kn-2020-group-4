/* 
Напишете програма, която:
1. дефинира рекурсивна функция print с подходящи параметри и тип на връщаната стойност, която да извежда на екрана масив от цели числа в реда, в който са подредени в паметта;
2. дефинира рекурсивна функция isSorted, с подходящи параметри и тип на връщаната стойност, която да проверява дали подадения ѝ масив от цели числа е сортиран в нарастващ ред;
3. дефинира рекурсивна функция insertInSorted, с подходящи параметри и тип на връщаната стойност, която да вмъква подадено цяло число в сортиран във възходящ ред масив, като запазва наредбата на масива;
4. прочита от клавиатурата положително число N < 1000 и след това последователност от N цели числа, които едно по едно вмъква в масив, посредством функцията insertInSorted (в началото се вмъква в празен масив);
5. накрая проверява дали резултатният масив е сортиран (чрез isSorted) и го извежда на екрана (чрез print).

В тази задача можете да използвате цикъл само в main за въвеждане на данните, но не и в трите поискани рекурсивни функции. Можете да дефинирате произволни помощни функции, но те също не могат да използват цикли.

Вход:
5 23 4 28 30 2

Изход:
1
2 4 23 28 30

 */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void insertInSorted(int *array, int num, int index, int size)
{
    if (index == size - 1)
    {
        array[index] = num;
        return;
    }

    if (array[index] <= num)
    {
        insertInSorted(array, num, index + 1, size);
    }

    if (array[index] > num)
    {
        int tmp = array[index];
        array[index] = num;
        insertInSorted(array, tmp, index + 1, size);
    }
}

bool isSorted(int *array, int current, int n)
{
    if (current >= n - 1) {
        return true;
    }

    if (array[current] <= array[current + 1]) {
        return isSorted(array, current + 1, n);
    }

    return false;
}

void print(int *array, int current, int n)
{
    if (current >= n)
    {
        return;
    }

    cout << array[current] << ' ';
    print(array, current + 1, n);
}

int main() {

    int n;

    cin >> n;

    int* array = new(std::nothrow) int[n];

    if (!array) {
        return -1;
    }

    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;

        insertInSorted(array, tmp, 0, i + 1);
    }

    cout << isSorted(array, 0, n) << endl;
    print(array, 0, n);

    delete[] array;
}