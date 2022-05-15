/*В одномерном массиве, заполненном случайными числами,
определить минимальный и максимальный элементы.*/
#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "\n В одномерном массиве, заполненном случайными числами," << endl;
	cout << " определить минимальный и максимальный элементы." << endl;
	cout << endl;

	// Объявляем переменные
	int const n =20; // Длинна массива
	// Диапазон массива 
	int const a = 1;  // Минимальное число
	int const b = 100; // Максимальное число
	int mass[n];
	int min, max;
	srand(time(NULL));

	for (int i = 0; i < n; i++)
	{
		mass[i] = a + rand() % (b-a);
		cout  << " " << mass[i] << " ";
	}
	min = mass[0];
	max = mass[0];
	for (int i = 1; i < n; i++)
	{
		if (mass[i] > max)
		{
			max = mass[i];
		}
		if (mass[i] < min)
		{
			min = mass[i];
		}

	}
	cout << endl;
	cout << "\n Минимальный элемент массива: " << min << endl;
	cout<<" Максимальный элемент массива: " << max << endl;
	return 0;


	return 0;
}