//Write a program that reads an array of integer numbers from the console and prints all numbers which are larger
//than or equal to the mathematical average of the numbers in the array.The output should be printed on a single
//line, separating the output number by spaces.The output numbers should be in the same order as they were in the
//input.
//The output array will be entered on two lines - the first line will contain an integer representing the number of
//elements, the second will contain the elements separated by spaces.

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

void printArray(int arr[], unsigned arrSize) {
    for (int i = 0; i < arrSize; i++)
    {
        std::cout << arr[i] << ' ';
    }
}

int main()
{
    int arr[maxSize];
    unsigned arrSize;
    int arrSum = 0, average;

    std::cin >> arrSize;

    for (int i = 0; i < arrSize; i++) {
        std::cin >> arr[i];
        arrSum += arr[i];
    }

    for (int j = 0; j < arrSize; j++) {
        if (arr[j] >= arrSum / arrSize) {
            std::cout << arr[j]<<' ';
        }
    }
}