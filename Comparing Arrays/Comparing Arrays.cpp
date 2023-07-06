//Write a program that finds the longest sequence of equal elements in an integer array and then prints that sequence
//on the console(integers separated by space on a single line).If there is more than one such sequence, print the last
//one.The input array will be entered on two lines – the first line will contain an integer representing the number of
//elements, the second will contain the elements separated by spaces

#include <iostream>

const unsigned maxSize = 200;

bool getArray(int arr[], unsigned & arrSize) {
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
    unsigned arrSize;
    int arr[maxSize];

    if (getArray(arr, arrSize) == false)
        return -1;

    printArray(arr, arrSize);

}