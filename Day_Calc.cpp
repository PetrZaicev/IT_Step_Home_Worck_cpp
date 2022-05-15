// Расчет, сколько осталось времени до полуночи
#include <iostream>
// Подключаем пространство имен
using namespace std;

// Основная функция
int main()
{
	// Подключаем кирилицу
	setlocale(LC_ALL, "rus");
	// Обьявляем переменные
	int Day = 86400;
	float Num, H, Min, Sec, Lost_Time, Lost_H, Lost_Min, Lost_Sec;
	// Выводим тест на экран "Введите время в секундах"
	cout << "\n Введите время в секундах : ";
	// Предлогаем ввести число
	cin >> Num;
	// Производим расчет
	H = int(Num / 3600);
	Min = int(Num / 60 - (H * 60));
	Sec = Num - (Min * 60) - (H * 3600);
	// Выводим тест "Время"
	cout << " Время : ";
	// Выводим результаты на экран "Текущее время"
	cout << H << "ч. " << Min << "мин. " << Sec<<"сек. " << "\n";
	Lost_Time = 86400 - Num;
	Lost_H = int(Lost_Time / 3600);
	Lost_Min =int (Lost_Time / 60 - (Lost_H * 60));
	Lost_Sec = Lost_Time - (Lost_Min * 60) - (Lost_H * 3600);
	// Выводим текст "Время до полуночи"
	cout << " Оставшееся время до полуночи : ";
	// Выводим результаты на экран
	cout << Lost_H << "ч. " << Lost_Min << "мин. " << Lost_Sec<<"сек. " << "\n\n";

	return 0;

	

}