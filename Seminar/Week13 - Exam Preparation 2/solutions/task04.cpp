#include <iostream>
using namespace std;

int* insertArray(size_t &size) {
    cout << "Enter array size: ";
    cin >> size;

    int* arr = new (nothrow) int [size];
    if (!arr) {
        cout << "Memory problem " << endl;
        exit(0);
    }

    cout << "Enter array  elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    return arr;
}

void longestSubArrayHelper(int* arr, size_t size, int& maxStart, int& maxLen, int count, bool isSubArray, int start, int len) {
    if (count == size) {
        if (isSubArray) {
            if(len > maxLen) {
                maxLen = len;
                maxStart = start;
            }
        } 
        return;
    }

    if (arr[count] == arr[count-1]) {
        if (!isSubArray) {
            isSubArray = true;
            start = count-1;
            len++;
        }
        len++;
    } else {
        if (isSubArray) {
            if (len > maxLen) {
                maxLen = len;
                maxStart = start;
                start = 0;
                len = 0;
            }
            isSubArray = false;
        }
    }

    longestSubArrayHelper(arr, size, maxStart, maxLen, count+1, isSubArray, start, len);
}

int* getLongestSubArray(int* arr, size_t size, int& maxLen) {
    int maxStart = 0;

    longestSubArrayHelper(arr, size, maxStart, maxLen, 1, false, 0, 0);

    int* longestSubArray = new (nothrow) int [maxLen];
    if (!longestSubArray) {
        cout << "Memory problem " << endl;
        exit(0);
    }

    cout << "maxStart = " << maxStart << " maxLen = " << maxLen << endl;

    int j = 0;
    for (int i = maxStart; i < maxLen + maxStart; i++) {
        longestSubArray[j] = arr[i];
        j++;
    }

    return longestSubArray;
}


int main () {

    size_t size = 0;
    int maxLen = 0;
    int* arr = insertArray(size);
    int* longestSubArray = getLongestSubArray(arr, size, maxLen);

    for (int i = 0; i < maxLen; i++) {
        cout << longestSubArray[i] << " ";
    }

    delete[] arr;
    delete[] longestSubArray;


    return 0;
}