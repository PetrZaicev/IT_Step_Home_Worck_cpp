// Топ менеджер
#include <iostream>
// Пространство имен
using namespace std;

// Основная функия
int main()
{
	// Подключаем кириллицу
	setlocale(LC_ALL, "rus");
	// Объявляем переменныее
	int manager1, manager2, manager3, topManager;
	float pay1, pay2, pay3;
	float temp = 0;
	// Выводим текст на экран
	cout << " Программа  расчета заработной платы" << endl;
	cout << "\tменеджеров по продажам." << endl;
	// Вывводим  текст на экран
	cout << "\n Введите число продаж первого менеджера: ";
	// Предлагаем ввести число
	cin >> manager1;
	// Выводим тест на экран
	cout << " Введите число продаж второго менеджера: ";
	// Предлогаем ввести число
	cin >> manager2;
	// Выводим тест на экран
	cout << " Введите число продаж третьего менеджера: ";
	// Предлогаем ввести число
	cin >> manager3;
	// Определяем зарплату каждого менеджера
	//Зарплата первого менеджера
	if (manager1 < 500)
	{
		pay1 = 200 + manager1 * 0.003;
	}
	else if (manager1 >= 500 && manager1 < 1000)
	{
		pay1 = 200 + manager1 * 0.005;
	}
	else
	{
		pay1 = 200 + manager1 * 0.008;
	}
	// Зарплата второго менеджера
	if(manager2 < 500)
	{
		pay2 = 200 + manager2 * 0.003;
	}
	else if (manager2 >= 500 && manager2 < 1000)
	{
		pay2 = 200 + manager2 * 0.005;
	}
	else
	{
		pay2 = 200 + manager2 * 0.008;
	}
	// Зарплата третьего менеджера
	if (manager3 < 500)
	{
		pay3 = 200 + manager3 * 0.003;
	}
	else if (manager3 >= 500 && manager3 < 100)
	{
		pay3 = 200 * manager3 * 0.005;
	}
	else
	{
		pay3 = 200 + manager3 * 0.008;
	}
	// Производим мравнения
	if (manager1 > manager2)
	{
		topManager = 1;
		temp = manager1;
	}
	else
	{
		topManager = 2;
		temp = manager2;
	}
	if (manager3 > temp)
	{
		topManager = 3;
	}
	// Зарплата лучшего менеджера
	switch (topManager)
	{
	case 1:
		pay1 = pay1 + 200;
		break;
	case 2:
		pay2 = pay2 + 200;
		break;
	case 3:
		pay3 = pay3 + 200;
		break;
	}
	// Выводим результаты на экран
	cout << " Лучьший менеджер по продажам - " << topManager;
	cout << "\n Зарплата менеджеров, по результатам продаж : " << endl;
	cout << " Зарплата первого менеджера - " << pay1 <<" $" << endl;
	cout << " Зарплата второго менеджера - " << pay2 <<" $" << endl;
	cout << " Зарплата третьего менеджера - " << pay3 <<" $" << endl;
	return  0;
}