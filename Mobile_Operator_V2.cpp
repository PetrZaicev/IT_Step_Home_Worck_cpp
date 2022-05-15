// Стоимость вызова Мобильных операторов
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
	int MyOperator, OpanentOp, Min;
	float PriceMega, PriceYota, PriceTele;
	PriceMega = 2.00;
	PriceYota = 1.50;
	PriceTele = 1.60;
	// Выодим текст на экран
	cout << "\n\n\"1 - MegaFon \n";
	cout << "\"2 - Yota \n";
	cout<<"\"3 - Tele2 \n";
	cout << " Введите номер своего оператора : ";
	// Предлогаем ввести своего оператора
	cin >> MyOperator;
	// Выводим тест на экран
	cout << "\"1 - MegaFon \n";
	cout << "\"2 - Yota \n";
	cout << "\"3 - Tele2 \n";
	cout << " Введите оператора опонента ";
	cin >> OpanentOp;
	// Выводим тест на экран
	cout << " Введите продолжительность звонка (мин.) ";
	cin >> Min;
	// Производим вычисление
	if (MyOperator == OpanentOp)
	{
		cout << " Бесплатный вызов внутри сети . \n";
	}
	else if (OpanentOp == 1)
	{
		cout << " Стоимость звонка на оператор MegaFon -  " << Min * PriceMega << " руб.\n";
	}
	else if (OpanentOp == 2)
	{
		cout << " Стоимость звонка звонка на оператор Yota -  " << Min * PriceYota << " руб.\n";
	}
	else if (OpanentOp == 3)
	{
		cout << " Стоимость звонка на оператор Tele2 - " << Min * PriceTele << " руб.\n";
	}
	else
	{
		cout << " несуществующий оператор ! \n";
	}
	return 0;


}