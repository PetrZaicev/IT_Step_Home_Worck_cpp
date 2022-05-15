/**/
#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;

typedef unsigned int uint; // переименование типа данных

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "\n Создайте двухмерный массив. Заполните его " << endl;
	cout << " случайными числами и покажите на экран. Пользователь " << endl;
	cout << " выбирает количество сдвигов и положение (влево, впра" << endl;
	cout << " во, вверх, вниз). Выполнить сдвиг массива и показать на " << endl;
	cout << " экран полученный результат. Сдвиг циклический. " << endl;

	uint row, col, side, temp, shift;
	bool flag = true;
	bool& aFlag = flag;

	cout << "\n Програма сдвига массива" << endl;

	do
	{
		cout << "\n Введите количество строк до 10: "; cin >> row; cout << endl;
		cout << "Введите количество столбцов до 10: "; cin >> col; cout << endl;

		uint** arr = new uint * [row]; // двумерный динамический массив

		for (uint i = 0; i < row; i++) //выделение памяти под массив
		{
			arr[i] = new uint[col];
		}

		if (col > 10 || col < 0 || row > 10 || row < 0) // Проверка веведения верного кол-ва строк и столбцов
		{
			cout << "Неверный ввод строки и столбца. Повторите ввод!" << endl;
			aFlag = true;
		}
		else
		{
			srand(time(0));

			//Заполнение массива
			for (uint i = 0; i < row; i++)
			{
				for (uint j = 0; j < col; j++)
				{
					arr[i][j] = rand() % 500;
				}
			}

			//Вывод массива
			for (uint i = 0; i < row; i++)
			{
				cout << " ";

				for (uint j = 0; j < col; j++)
				{
					cout << arr[i][j] << " ";
				}
				cout << endl;
			}

			cout << endl;

			cout << "\n Сдвиг в массиве можно произвести:\n";
			cout << " 1) Влево;\n";
			cout << " 2) Вправо;\n";
			cout << " 3) Вверх;\n";
			cout<< " 4) Вниз;\n"<< endl;

			cout << " Введите сторону сдвига: "; cin >> side; cout << endl;
			cout << " Введите количество сдвигов: "; cin >> shift; cout << endl; cout << endl;

			if (side == 1) // сдвиг влево
			{
				for (uint i = 0; i < shift; i++)
				{
					for (uint j = 0; j < row; j++)
					{
						temp = arr[j][0];

						for (uint g = 0; g < col - 1; g++)
						{
							arr[j][g] = arr[j][g + 1];
						}

						arr[j][col - 1] = temp;
					}
				}
			}
			else if (side == 2) // сдвиг вправо
			{
				for (uint i = 0; i < shift; i++)
				{
					for (uint j = 0; j < row; j++)
					{
						temp = arr[j][col - 1];

						for (uint g = col - 1; g > 0; g--)
						{
							arr[j][g] = arr[j][g - 1];
						}

						arr[j][0] = temp;
					}
				}
			}
			else if (side == 3) // сдвиг вверх
			{
				for (uint i = 0; i < shift; i++)
				{
					for (uint j = 0; j < col; j++)
					{
						temp = arr[0][j];

						for (uint g = 0; g < row - 1; g++)
						{
							arr[g][j] = arr[g + 1][j];
						}

						arr[row - 1][j] = temp;
					}
				}
			}
			else if (side == 4) // сдвиг вниз
			{
				for (uint i = 0; i < shift; i++)
				{
					for (uint j = 0; j < col; j++)
					{
						temp = arr[row - 1][j];

						for (uint g = row - 1; g > 0; g--)
						{
							arr[g][j] = arr[g - 1][j];
						}

						arr[0][j] = temp;
					}
				}
			}
			cout << " Результат сдвига.";
			cout << endl; cout << endl;

			//Вывод массива после сдвига

			for (int i = 0; i < row; i++)
			{
				cout << " ";

				for (int j = 0; j < col; j++)
				{
					cout << arr[i][j] << " ";
				}
				cout << endl;
			}

			aFlag = false;
		}

		for (int i = 0; i < row; i++)
		{
			delete[] arr[i];
		}
		delete[] arr;

	} while (aFlag);

	cout << endl; cout << endl;
	system("pause");
	return 0;
}