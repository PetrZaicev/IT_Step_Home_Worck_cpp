/*. Пользователь с клавиатуры вводит числа.
Посчитать их сумму и вывести на экран, как только пользователь введет ноль.*/
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "\n Введите с клавиатуры числа." << endl;
	cout << " Как только введете <0> программа остонавливается и считает сумму всех введенных чисел." << endl;

	long long a, s;
	a = 1; s = 0;
	while (a != 0)
	{
		cout << " ";
		cin >> a;
		s = s + a;
	}
	cout << " " << s << endl;;
	cout <<" " << endl;
	return 0;
}