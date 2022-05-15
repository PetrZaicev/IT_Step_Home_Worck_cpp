// Определить символ
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
	int simbol_nuber;
	char simbol;
	// Выводим на экран
	cout << "Пожалуйста, введите символ :"<<endl;
	// Предлагаем ввести число
	cin >> simbol;
	// Условие
	simbol_nuber = (int)simbol;
	if (((simbol_nuber >= 65) && (simbol_nuber <= 90)) ||
		((simbol_nuber >= 97) && (simbol_nuber <= 122)))
	{
		cout << "Вы ввели письмо"<<endl;
	}
	else if ((simbol_nuber >= 48) && (simbol_nuber <= 57))
	{
		cout << "Вы ввели цифру"<<endl;
	}
	else if ((simbol_nuber == 33) || ((simbol_nuber >= 44) &&
		(simbol_nuber <= 46)) || (simbol_nuber == 58) ||
		(simbol_nuber == 59) || (simbol_nuber == 63))
	{
		cout << "Вы ввели знак препинания"<<endl;
    }
	else
	{
		cout << "Вы ввели неизвестный символ"<<endl;
	}
	return 0;

}
       