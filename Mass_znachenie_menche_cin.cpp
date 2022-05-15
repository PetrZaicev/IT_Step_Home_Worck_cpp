/*В одномерном массиве, заполненном случайными числами
в заданном пользователем диапазоне, найти сумму элементов,
значения которых меньше указанного пользователем.*/
#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	cout << "\n В одномерном массиве, заполненном случайными числами" << endl;
	cout << " в заданном пользователем диапазоне, найти сумму элементов," << endl;
	cout << " значения которых меньше указанного пользователем." << endl;

	int const n = 10;
	int mass[n];
	int a, b, sum, endD;
	srand(time(NULL));

	cout << "\n Введите начало диапазона для генерации чисел - ";
	cin >> a;
	cout << " Введите конец диапазона - ";
	cin >> b;
	cout << " Введите своё значение - ";
	cin >> endD;
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		mass[i] = a + rand() % (b - a);
		cout <<" " << mass[i] << " ";
	}
	sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (mass[i] < endD)
		{
			sum = sum + mass[i];
		}

	}
	cout << endl;
	cout << "\n Сумма элементов значения которых меньше указанного пользователем = " << sum;
	cout << endl;
	return 0;
}