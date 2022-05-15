/*Написать функцию, которая определяет, является ли «счастливым» шестизначное число.*/
#include <iostream>
#include <windows.h>
using namespace std;

#include <iostream>

using namespace std;

bool isHappy(int number) 
{
	if (number < 100000 || number > 999999)
		return false;
	int sum1, sum2;
	sum1 = number % 10 + (number / 10) % 10 + (number / 100) % 10;
	sum2 = (number / 1000) % 10 + (number / 10000) % 10 + (number / 100000) % 10;
	if (sum1 == sum2)
		return true;
	return false;
}

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	while (1)
	{
		cout << "\n Написать функцию, которая определяет " << endl;
		cout << " является ли «счастливым» шестизначное число." << endl;
		int n = 0;
		cout << endl;
		cout << " Введите число Ваше число: ";
		cin >> n;
		if (isHappy(n))
			cout << " Это счастливое число!";
		else
			cout << " Число не счастливое.";
		cout << endl;
		system("pause");
		system("cls");
	}
}