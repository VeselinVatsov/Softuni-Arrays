#include <iostream>
#include <cmath>


const unsigned maxSize = 3000;

int main()
{
    
    int number = 0;

    char str[3000];

    std::cin >> str;

    for (int i = 0; i < maxSize; i++) {
        char c = str[i];

        if (c == '.')
            break;

        if (c >= '0' && c <= '9') {
            number *= 10;
            number += c - 48;
        }
    }
    std::cout << sqrt(number);
}