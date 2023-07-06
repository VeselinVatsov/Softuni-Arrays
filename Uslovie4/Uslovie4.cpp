//Условие: Да се напише програма, която извежда първите 5 числа, които са 
//по - малки от b и се делят на 9. 
//Намерете и изведете произведението им.b се въвежда от клавиатурата. (13т)

#include <iostream>

int main()
{
	int pr = 1, cnt = 0;
	int b; 
	std::cin >> b;

	for (int i = 1; i < b; i++) {
		if (i % 9 == 0) {
			std::cout << i << ' ';
			pr *= i;
			cnt++;
		}
		if (cnt == 5) break;
	}
	std::cout << "\n";
	std::cout << pr;
}