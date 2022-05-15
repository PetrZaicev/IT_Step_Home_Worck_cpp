/*Подсчитать количество целых чисел в диапазоне от 100 до
999, у которых все цифры разные.*/
#include <iostream>
// Пространство имен
using namespace std;

// основная функция
int main()
{
	setlocale(LC_ALL, "rus");
	// Объявляем переменные
	int number1, number2, number3, resN, temp;
	resN = 0;
	// Выводим текст на экран
	cout << "\n Подсчитать количество целых чисел в диапазоне от 100 до" << endl;
	cout << "           99, у которых все цифры разные." << endl;
	for (int i = 100; i <= 999; i++)
	{
		number3 = i % 10;
		temp = i / 10;
		number2 = temp % 10;
		number1 = temp / 10;
		if ((number1 != number2) &&
			(number1 != number3) &&
			(number2 != number3))
		{
			resN++;
		}
	}
	cout << "\n Количество чисел с разными цифрами: " << resN << endl;
	return 0;
}
