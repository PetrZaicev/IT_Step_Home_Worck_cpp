/*Пользователь вводит любое целое число. Необходимо из
этого целого числа удалить все цифры 3 и 6 и вывести обратно
на экран.
Ес*/
#include <iostream>
// Пространство имен
using namespace std;

// Основная функция
int main()
{
	setlocale(LC_ALL, "rus");
	// Объявляем переменные
	int number, digit, i, newNumber;
	i = 0;
	newNumber = 0;
	// выводим текст на экран
	cout << "\n          Пользователь вводит любое целое число. Необходимо из" << endl;
	cout << " этого целого числа удалить все цифры 3 и 6 и вывести обратно на экран." << endl;
	cout <<  "\n Введите целое число : ";
	// Предлагаем ввести число
	cin >> number;
	while (number > 0)
	{
		digit = number % 10;
		if ((digit != 3) && (digit != 6))
		{
			newNumber = newNumber + digit * pow(10, i);
			i++;
		}
		number = number / 10;
	}
	cout << " Новое число =  " << newNumber<<endl;
	cout << "\n  Дмитрий Сергеевич, можно разобрать будет на парах?)\a" << endl;
	cout << "        С большими числами не работает" << endl;

	return 0;	
}