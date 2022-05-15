// Гривны и копейки
#include <iostream>
#include <windows.h>
// Пространство имен
using namespace std;

// Основная функция
int main()
{
	SetConsoleCP(2151);
	SetConsoleOutputCP(1251);
	// Объявляем переменную
	int Grivna, Cop;
	// Выводим текст на экран
	cout << " Введите цену в гривнах" << endl;
	cout << " правильно: 17 гривен 28 копеек, или неправильно: 15 гривен 228 копеек" << endl;
	cout << " Введите гривны :";
	// Предлагаем ввести гривны
	cin >> Grivna;
	cout << " Введите копейки :";
	// Предлагаем ввести копейки
	cin >> Cop;
	cout <<" "<< Grivna + (Cop / 100) << " гривен " << Cop % 100 << " копеек" << endl;

	return 0;
}