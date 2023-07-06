#include <iostream>
#include <algorithm>

const unsigned maxSize = 200;

bool getArray(int arr[], unsigned& arrSize) {
    std::cin >> arrSize;

    if (arrSize > maxSize)
        return false;

    for (int i = 0; i < arrSize; i++) {
        std::cin >> arr[i];
    }

    return true;
}

int main()
{
    unsigned arrSize;
    int arr[maxSize];



    getArray(arr, arrSize);

    std::sort(arr, arr + arrSize);

    for (int i = 0; i < arrSize; i++) {
        
    }
}
