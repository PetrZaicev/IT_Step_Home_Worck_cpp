/*Написать программу, реализующую сортировку массива с
помощью усовершенствованной сортировки пузырьковым методом. Усовершенствование состоит в том, чтобы анализировать
количество перестановок на каждом шагу, если это количество
равно нулю, то продолжать сортировку нет смысла — массив
отсортирован.*/

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    cout << "\n Программа, реализующая сортировку массива с" << endl;
	cout << " помощью усовершенствованной сортировки пузырьковым методом." << endl;

	const int n = 10;
	int mass[n], temp, nShift;
	cout << "\n Пожалуйста, введите элементы массива."<<endl;
	for (int i = 0; i < n; i++)
	{
		cin >> mass[i];
	}
	cout <<endl;
	for (int i = 1; i < n; ++i)
	{
		nShift = 0;
		for (int r = 0; r < n - i; r++)
		{
			if (mass[r] > mass[r + 1])
			{
				temp = mass[r];
				mass[r] = mass[r + 1];
				mass[r + 1] = temp;
				nShift++;
			}
		}
		if (nShift == 0)
		{
			cout << " Процесс сортировки останавливается на " << i << " шаге"<<endl;
			break;
		}
	}
	for (int i = 0; i < n; i++)
	{
	}
	return 0;
}