/*Пользователь вводит две границы диапазона.
Посчитать сумму всех чисел диапазона.*/
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "\n Пользователь вводит две границы диапазона." << endl;
	cout << " Посчитать сумму всех чисел диапазона" << endl;
	long long a, b;
	cout << "\n Введите начало диапазона: ";
	cin >> a;
	cout << " Введите конец диапазона: ";
	cin >> b;
	long long res = 0;
	for (long long i = a; i <= b; i++)
	{
		res += i;
	}
	cout << " Сумма чисел в заданном диапазоне равна = " <<" "<< res << endl;
	cout << endl;
	return 0;
}