/*Реализовать программу расчета заказа в кафетерии
при условии, что заказ может быть на несколько человек и
каждый клиент формирует свою часть заказа. Необходимо
спросить у пользователя на сколько человек заказ. Далее
каждому человеку выводиться меню (названия напитков,
кондитерских изделий и их цена) и он выбирает. Предусмот-
реть возможность выбора нескольких элементов меню для
клиента, если он желает добавить еще что-то в свой заказ.
Результат работы программы — итоговая сумма общего
заказа всей компании.*/
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "\n Програма расчета заказа в кафетерии" << endl;

	//Объявляем переменные
	int howPeople = 0, UserChoice = 0;
	float drink1 = 1.50, drink2 = 1.80, drink3 = 2.10, desert1 = 2.20, desert2 = 2.40, desert3 = 2.50,
		sum = 0, nDrink1, nDrink2, nDrink3, nDesert1, nDesert2, nDesert3;

	cout << "\n Здравствуйте, сколько человек будет делать заказ? - ";
	cin >> howPeople;

	for (int i = 1; i <= howPeople; i++)
	{
		for (int a = 0; a < 7; a++) {
			cout << "\n\t Сделайте заказ для " << i << " человека." << endl;
			cout << "\n\t 1 - Кофе Капучино  - " << drink1 << " $." << endl;
			cout << "\t 2 - Кофе Латте     - " << drink2 << " $." << endl;
			cout << "\t 3 - Кофе Американо - " << drink3 << " $." << endl;
			cout << "\t 4 - Чизкейк        - " << desert1 << " $." << endl;
			cout << "\t 5 - Тирамису       - " << desert2 << " $." << endl;
			cout << "\t 6 - Мороженое      - " << desert3 << " $." << endl;
			cout << "\t 7 - Спасибо,нет.   " << endl;
			cout << "\n\t Выбирете, что будете заказывать - ";
			cin >> UserChoice;
			switch (UserChoice) {
			case 1:
				cout << " Сколько хотите заказать чашек Капучино? - ";
				cin >> nDrink1;
				sum = sum + drink1 * nDrink1;
				break;
			case 2:
				cout << "\n Сколько хотите заказать чашек Латте? - ";
				cin >> nDrink2;
				sum = sum + drink2 * nDrink2;
				break;
			case 3:
				cout << "\n Сколько хотите заказать чашек Американо? - ";
				cin >> nDrink3;
				sum = sum + drink3 * nDrink3;
				break;
			case 4:
				cout << "\n Сколько Чизкейков вы хотите заказать? - ";
				cin >> nDesert1;
				sum = sum + desert1 * nDesert1;
				break;
			case 5:
				cout << "\n Сколько Чизкейков вы хотите заказать? - ";
				cin >> nDesert2;
				sum = sum + desert2 * nDesert2;
				break;
			case 6:
				cout << "\n Сколько Мороженого вы хотите заказать? - ";
				cin >> nDesert2;
				sum = sum + desert2 * nDesert2;
				break;
			case 7:
				break;
			default:
				cout << "\n Такого нет в мменю!";
				break;
			}
			if (UserChoice == 7)
				break;
		}
	}
	cout << "\n Ссума всего заказа = " << sum << " -$." << endl;
	cout << "\n ПРИЯТНОГО АППЕТИТА!" << endl << endl;
	return 0;

}
