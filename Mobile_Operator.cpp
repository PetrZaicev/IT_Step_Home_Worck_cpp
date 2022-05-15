/* Стоимость минкты разговора , разных мобильных
 операторов связи*/
#include <iostream>
#include <windows.h>
// пространство имен
using namespace std;

// Основная функция
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// Объявляем переменные
	long long User_number, Opanent_number, Min;
	float MegaFon_price = 2.0, BeeLine_price = 1.80, Tele2_price = 1.60,
		MTS_price = 1.50, Yota_price = 1.40;
	// Выводим текст
	cout << "\n\n Введите свой номер телефона в формате 8 (xxx) xxx xx xx : ";
	// Предлагаем ввести номер
	cin >> User_number;
	// Определяем своего оператора
	if (((User_number >= 89210000000)) && ((User_number <= 89219999999)) ||
		((User_number >= 89310000000) && (User_number <= 89319999999)))
	{
		cout << " Мобильный оператор - Megafon Череповец .\n";
	}
    else if((User_number >= 89990000000) && (User_number <= 89999999999))
	{
		cout << " Мобильный оператор - Yota .\n";
	}
	else if ((User_number >= 89640000000) && (User_number <= 89649999999))
    {
		cout << " Мобильный оператор - BeeLine .\n";
    }
	else if((User_number >= 89000000000) && (User_number <= 89009999999))
	{
		cout << " Мобильный оператор - Tele2 .\n";
	}
	else if(((User_number >= 89110000000) && (User_number <= 89119999999))||
		((User_number >= 89810000000) && (User_number <= 89819999999)))
	{
		cout << " Мобильный оператор - MTC .\n";
	}
	else
	{
		cout << " Неизвестный сотовый оператор! \n";
	}
	// Вывожим тест
	cout << " Введите номер собеседника в формате 8 (xxx) xxx xx xx   : ";
	// предлагаем ввести номер собеседника
	cin >> Opanent_number;
	// Определяем оператора собеседника
	if (((Opanent_number >= 89210000000)) && ((Opanent_number <= 89219999999)) ||
		((Opanent_number >= 89310000000) && (Opanent_number <= 89319999999)))
	{
		cout << " Мобильный оператор - Megafon Вологодская область .\n";
	}
	else if ((Opanent_number >= 89990000000) && (Opanent_number <= 89999999999))
	{
		cout << " Мобильный оператор - Yota .\n";
	}
	else if ((Opanent_number >= 89640000000) && (Opanent_number <= 89649999999))
	{
		cout << " Мобильный оператор - BeeLine Вологодская область .\n";
	}
	else if ((Opanent_number >= 89000000000) && (Opanent_number <= 89009999999))
	{
		cout << " Мобильный оператор - Tele2 ." << endl;
	}
	else if (((Opanent_number >= 89110000000) && (Opanent_number <= 89119999999)) ||
		((Opanent_number >= 89810000000) && (Opanent_number <= 89819999999)))
	{
		cout << " Мобильный оператор - MTC Вологодская область .\n";
	}
	else
	{
		cout << " неизвестный оператор!  \n";
	}
	// Выводим текст на экран
	cout << " Введите время разговора в минутах :";
	cin >> Min;
	// Производим вычислениие
	if ((((User_number >= 89210000000)) && ((User_number <= 89219999999)) ||
		((User_number >= 89310000000) && (User_number <= 89319999999)))==
		(((Opanent_number >= 89210000000)) && ((Opanent_number <= 89219999999)) ||
		((Opanent_number >= 89310000000) && (Opanent_number <= 89319999999))))
	{
		cout << " Стоимость звонка: Бесплатный звонок внутри сети - Megafon Вологодская область .\n";
	}
	else if (((User_number >= 89990000000) && (User_number <= 89999999999))==
		((Opanent_number >= 89990000000) && (Opanent_number <= 89999999999)))
	{
		cout << " Стоимость звонка: Бесплатный звонок внутри сети - Yota .\n"; 
	}
	else if (((User_number >= 89640000000) && (User_number <= 89649999999)) ==
		((Opanent_number >= 89640000000) && (Opanent_number <= 89649999999)))
	{
		cout << " Стоимость звонка: Бесплатный звонок внутри сети - BeeLine .\n";
	}
	
	
 return 0;
}

