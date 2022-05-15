//Найти среднее арифметическое всех целых чисел от 1 до 1000
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
	float resultat;
	resultat = 0;
	// Выводим текст на экран
	cout << "\n Найти среднее арифметическое всех целых чисел от 1 до 1000" << endl;
	// Производим расчет
	for (int a = 1; a <= 1000; a++)
	{
		resultat = resultat + a;
	}
	resultat = resultat / 1000;
	cout << "\n Результат = " << resultat << endl;
	return 0;
}