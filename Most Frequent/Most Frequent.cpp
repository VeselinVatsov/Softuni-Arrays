//Write a program that finds the most frequent number in a given sequence of numbers.Numbers will be in the range
//[0, 9].In case of multiple numbers with the same maximal frequent, print all of them, ordered, from smallest to
//largest, separated by spaces.

#include <iostream>

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
    unsigned arrSize = 0;
    int arr[maxSize];

    unsigned counts[10] = {}; // [i], [0...9]

    getArray(arr, arrSize);

    for (int i = 0; i < arrSize; i++) {
        counts[arr[i]]++;
    }

    unsigned maxCount = 0;

    for (int i = 0; i < 10; i++) {
        if (counts[i] > maxCount)
            maxCount = counts[i];
    }

    for (int i = 0; i < 10; i++) {
        if (counts[i] == maxCount)
            std::cout << i << " ";
    }
}