/*Написать программу, которая выводит на экран линию
заданным символом, вертикальную или горизонтальную, причем линия может выводиться быстро, нормально и медленно.
Общение с пользователем организовать через меню.*/
#include <iostream>
#include <windows.h>
using namespace  std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Объявляем переменные
	char userSymbol;
	int lineType, speedID, delay;

	// Выводим на экран текст
	cout << "\n Программа, которая выводит на экран линию заданным символом," << endl;
	cout << " вертикальную или горизонтальную, причем линия может выводиться быстро,";
	cout<<"нормально и медленно." << endl;
	cout << "\n Введите символиз которого будем выводить линию - ";
	// Предлогаем ввести символ
	cin >> userSymbol;
	cout << endl;
	// Выводим тест на экран
	cout << " Выберете значение скорости для рисования : " << endl;
	cout << " 1 -> Медленно."<<endl;
	cout << " 2 -> Нормально." << endl;
	cout << " 3 -> Быстро." << endl;
	cout << " Введите значение скорости - ";
	// Предлагаем ввести значение скорости
	cin >> speedID;
	cout << endl;

	// Устонавливаем значение скорости
	switch (speedID)
	{
	case 1:
		delay = 1000;
		break;
	case 2:
		delay = 500;
		break;
	case 3:
		delay = 0;
		break;
	default:
		cout << " Неверное значение скорости!" << endl;
		cout << " Линия будет нарисована быстро!" << endl;
		delay = 0;
	}
	// Выводим текст на экран
	cout << " Выберете тип линии: " << endl;
	cout << " 1-> Вертикальная линия." << endl;
	cout << " 2-> Горизонтальная линия." << endl;
	cout << " Введите значение - ";
	// Предлагаем ввести значение
	cin >> lineType;
	cout<<endl;

	// Условие выводв линии
	switch (lineType)
	{
	case 1:
	{
		for (int i = 0; i < 10; i++)
		{
			Sleep(delay);
			cout << userSymbol << endl;
		}
		break;
	}
	case 2:
	{
		for (int i = 0; i < 10; i++)
		{
			Sleep(delay);
			cout << userSymbol;
		}
		cout << endl<<endl;
		break;
		
	}
	default:
		cout << " Неверное значение выбора линии!" << endl;
		cout << " Линия будет нарисована горизонтально!" << endl;

		for (int i = 0; i < 10; i++)
		{
			Sleep(delay);
			cout << userSymbol;
		}
		cout << endl<<endl;
		
	}
	system("pause");
	return 0;
}