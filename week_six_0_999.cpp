/*Подсчитать количество целых чисел в диапазоне от 100
до 999, у которых есть две одинаковые цифры.*/
#include <iostream>
// Пространство имен
using namespace std;

// Основная функция
int main()
{
	setlocale(LC_ALL, "rus");
	// Объявляем переменные
	int number1, number2, number3,same, resN, temp;
	resN = 0;
	// Выводим текст на экран
	cout << "\n Подсчитать количество целых чисел в диапазоне от 100" << endl;
	cout << "    до 999, у которых есть две одинаковые цифры. " << endl;
	for (int i = 100; i <= 999; i++)
	{
		same = 0;
		number3 = i % 10;
		temp = i / 10;
		number2 = temp % 10;
		number1 = temp / 10;
		if ((number1 == number2) &&
			(number1 != number3) &&
			(number2 != number3))
		{
			same++;
		}
		if ((number1 != number2) &&
			(number1 == number3) &&
			(number2 != number3))
		{
			same++;
		}
		if ((number1 != number2) &&
			(number1 != number3) &&
			(number2 == number3))
		{
			same++;
		}
		if (same == 1)
		{
			cout << i << "\n";
			resN++;
		}
	}
	cout << " числа с 2 одинаковыми цифрами:" << resN << endl;
	return 0;
}
