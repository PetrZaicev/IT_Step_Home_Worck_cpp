// Пицерия
#include <iostream>
#include <windows.h>
// Пространство имен
using namespace std;

// Основная функция
int main()
{
	// Подключаем кириллицу
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// Объявляем переменные
	int pizzaID, drinkID, pizzaAmount, drinkAmount, temp;
	float pizzaPrice1, pizzaPrice2, pizzaPrice3, pizzaPrice4, selPizPrice;
	float drinkPrice1, drinkPrice2, drinkPrice3, selDrPrice;
	float sumOrder;
	// Присваиваем значение
	pizzaPrice1 = 7.25;
	pizzaPrice2 = 8.5;
	pizzaPrice3 = 10.6;
	pizzaPrice4 = 14.8;

	drinkPrice1 = 1.69;
	drinkPrice2 = 2.5;
	drinkPrice3 = 3.25;

	sumOrder = 0;

	// Выводим текст на экран
	cout << "\n Выберите пиццу: " << endl;
	cout << " 1-> Четыре сыра: " << pizzaPrice1 << "$" << endl;
	cout << " 2-> Мексикано:   " << pizzaPrice2 << "$" << endl;
	cout << " 3-> Пепперони:   " << pizzaPrice3 << "$" << endl;
	cout << " 4-> Аль Капоне:  " << pizzaPrice4 << "$" << endl;
	cout << "\n Введите номер выбранной пиццы - ";
	// Предлагаем ввести номер выбранной пиццы
	cin >> pizzaID;
	// Выводим текст на экран
	cout << " \n Введите количество пиццы для заказа - ";
	// Предлогаем ввести количество
	cin >> pizzaAmount;
	// Выводим текст на кран
	cout << "\n Выберите напиток: " << endl;
	cout << " 1-> Минеральная вода: " << drinkPrice1 << "$" << endl;
	cout << " 2-> Coca-Cola:        " << drinkPrice2 << "$" << endl;
	cout << " 3-> Свежевыжатый сок: " << drinkPrice3 << "$" << endl;
	cout << "\n Выберите напиток - ";
	// Предлагаем выбрать напиток
	cin >> drinkID;
	// Выводим текст на экран
	cout << "\n Введите количество заказываемого напитка - ";
	// Предлагаем ввести количество напитка
	cin >> drinkAmount;
	switch (pizzaID)
	{
	case 1:
		selPizPrice = pizzaPrice1;
		break;
	case 2:
		selPizPrice = pizzaPrice2;
		break;
	case 3:
		selPizPrice = pizzaPrice3;
		break;
	case 4:
		selPizPrice = pizzaPrice4;
		break;
	default:
		cout << "\n Извените, выбранной пиццы нет в меню!" << endl;
		selPizPrice = 0;
		break;
	}
	switch (drinkID)
	{
	case 1:
		selDrPrice = drinkPrice1;
		break;
	case 2:
		selDrPrice = drinkPrice2;
		break;
	case 3:
		selDrPrice = drinkPrice3;
		break;
	default:
		cout << "\n Извените, данного напитка нет в меню!" << endl;
		selDrPrice = 0;
		break;
	}
	temp = pizzaAmount;
	if (pizzaAmount >= 5)
	{
		cout << "\n Акция! Каждая пятая купленая пицца в подарок!" << endl;
		pizzaAmount = pizzaAmount - pizzaAmount / 5;
	}
	sumOrder = sumOrder + pizzaAmount * selPizPrice;
	if ((drinkAmount >= 3) && (selDrPrice > 2))
	{
		cout << "\n Ваша скидка на напитки 15% " << endl;
		sumOrder = sumOrder + drinkAmount * selDrPrice * (1 - 0.15);
	}
	else
	{
		sumOrder = sumOrder + drinkAmount + selDrPrice;
	}
	if (sumOrder > 50)
	{
		cout << "\n Ваша скидка 20% на весь заказ. " << endl;
		sumOrder = sumOrder * (1 - 0.2);
	}
	cout << "\n Ваш заказ: " << endl;
	cout << " Пицца -" << pizzaID << " - колтчество(шт)" << temp << "стоимость ";
	cout << selPizPrice <<"$" << endl;;
	cout << " Напиток -" << drinkID << "-";
	cout << drinkAmount << "$" << selDrPrice << endl;
	cout << " Сумму к оплате: " << sumOrder << "$" << endl;
	cout << " Приятного Аппетита ";
	return 0;
}