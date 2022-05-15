// Project DayIn_2000Year
#include <iostream>
// Определяем пространства имен, в котором есть cout<<
using namespace std;
// Главная функция
int main()
{
	// Вывод пустой строки
	cout << "\n";
	// Обьявляем численные константы - в 2000 году 366 суток, в сутках 24 часа
	int Day_in2000Year = 366;
	int HourInDay = 24;
	// обьявляем численную переменную
	int HourIn_Yaer2000;
	// Вычесляем искомое значение и
	// помещаем его в переменную HourIn_Yaer2000
	HourIn_Yaer2000 = Day_in2000Year * HourInDay;
	// Выводим значение переменной 
	//HourIn_Yaer2000 на экран
	cout << "\t\t In 2000 Yaer"  <<HourIn_Yaer2000;
	cout << " hours\n";
	return 0;
}