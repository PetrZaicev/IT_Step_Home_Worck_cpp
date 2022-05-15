/*Программа, вычисляющая, с какой скоростью
бегун пробежал дистанцию.*/
#include <iostream>
// Подключаем пространство имен
using namespace std;

// Основная функция
int main()
{
	// Подключаем кирилицу
	setlocale(LC_ALL, "rus");
	// Обьявляем переменные Speed -скорость, Dist -дистпнция, Time -время,
	// minutes -минуты, seconds -секунды
	double Speed, Dist, Time;
	int minutes, seconds;
	cout <<"\n\n" << "Вычисление скорости бега.";
	cout << " Введите длину дистанции (метров) = ";
	cin >> Dist;
	cout << "Введите время (мин.сек) = ";
	cin >> Time;
	minutes = Time;
	seconds = (Time -minutes) * 100;
	Time = (minutes * 60) + seconds;
	Speed = Dist / Time * 3.6;
	cout << "Дистанция: " << Dist << "\n";
	cout << "Время " << minutes << " мин " <<
		seconds << " сек = " << Time <<
		" сек\n";
	cout << "Вы бежали со скоростью " <<
		Speed << "км/ч\n\n\n";
	return 0;
}