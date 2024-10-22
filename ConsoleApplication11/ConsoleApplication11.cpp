#include <iostream>
#include<cmath>
int num, num1, num2;
int main()
{
	setlocale(LC_ALL, "ru");

	std::cout << "Введите шестизначное число: ";
	std::cin >> num;

	if (num < 100000 || num > 999999)
	{
		std::cout << "Ошибка, нужно ввести 6-знач число";
		return 0;
	}

	int a = num / 100000;
	int b = (num / 10000) % 10;
	int c = (num / 1000) % 10;
	int d = (num / 100) % 10;
	int e = (num / 10) % 10;
	int f = num % 10;

	int sum1 = a + b + c;
	int sum2 = d + e + f;

	if (sum1 == sum2)
	{
		std::cout << "Счастливое число";
	}
	else {
		std::cout << "Не счастливое число";
	}

	return 0;
}

int num, sum3;
int main()
{
	setlocale(LC_ALL, "ru");
	std::cout << "Введите 4-знач число: ";
	std::cin >> sum3;

	int a, b, c, d;
	std::cin >> d;
	a = d % 10;
	b = d % 100 / 10;
	c = d % 100 % 10;
	d /= 1000;	d = d * 1000 + b * 100 + c * 10 + a;
	std::cout << d;
	return 0;
}
	


int main()
{

	setlocale(LC_ALL, "ru");

	int number;
	int maxNumber;

	std::cout << "Введите 7-знач число: " << std::endl;

	std::cin >> number;
	maxNumber = number;

	for (int i = 1; i < 7; i++)
	{
		std::cin >> number;
		if (number > maxNumber)
		{
			maxNumber = number;

		}
	}

	std::cout << "Максимальное число: " << maxNumber << std::endl;
	return 0;
}
