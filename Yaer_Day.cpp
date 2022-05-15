// Сколько дней в году
#include <iostream>
#include <windows.h>
// Пространство имен
using namespace std;

// Основная функция
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// обьявляем переменные
	int Yaer, day;
	// Выводим тест
	cout << "\n\ Введите год: ";
	// Предлогаем ввести год
	cin >> Yaer;
	/* Производим вычислениие.
	Год является високосным в двух случаях:
    либо он кратен 4, но при этом не кратен 100,
    либо кратен 400*/
	day= 365 + int((Yaer % 4 == 0 && Yaer % 100 != 0) || (Yaer % 400 == 0));
	cout << " В " << Yaer << " году " << day << " дней. \n\n"<<endl;

	return 0;
}