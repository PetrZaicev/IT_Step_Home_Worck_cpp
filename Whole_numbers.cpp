/* Программа для вычисления суммы
целых чисел от (a) до 500*/
#include <iostream>
#include <windows.h>
// Пространство имен
using namespace std;

// Основная функция
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// Объявляем переменные
	int a, sum;
	sum = 0;
	// Выводим текст на экран
	cout << "\n Программа для вычисления суммы целых чисел от(a) до 500" << endl;
	cout << "\n Введите целое число - ";
	// Предлагаем ввести число
	cin >> a;
	// производим вычисления
	while (a < 500)
	{
		sum = sum + a;
		a = a + 1;
	}
	//Выводим текст на экран
	cout << " Смма = " << sum + a << endl;
	return 0;
}