#include <iostream>
using namespace std;

int main()
{
    int lb = 23, ub = 33;
    for (int i = 0; i < 3; i++) {
        std::cout << (rand() % (ub - lb +1)) +lb << " ";
    }
}
