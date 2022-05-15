#include <iostream>
#include <windows.h>
#include <iomanip>
#include <ctime>
using namespace std;



// Функция заменты цвета текста и фона в консоле
enum ConsoleColor
{
	Black = 0,
	Blue = 1,
	Green = 2,
	Cyan = 3,
	Red = 4,
	Magenta = 5,
	Brown = 6,
	LightGray = 7,
	DarkGray = 8,
	LightBlue = 9,
	LightGreen = 10,
	LightCyan = 11,
	LightRed = 12,
	LightMagenta = 13,
	Yellow = 14,
	White = 15
};

void SetColor(ConsoleColor text, ConsoleColor background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

// Функция бинарного поиска
int bin_search(int* a, int n, int key) // Функция бинарного поиска
{
	int low = 0, up = n - 1, i;

	i = (low + up) / 2;
	while (low <= up)
	{
		if (a[i] == key)
			break;
		else if (a[i] < key)
			low = i + 1;
		else
			up = i - 1;
		i = (low + up) / 2;
	}
	if (low <= up)
		return i;
	return -1;
}



int main()
{
	SetConsoleCP(1251);        // Подключаем кирилицу
	SetConsoleOutputCP(1251);
	srand(time(NULL));         /*Сочетание srand(time(NULL)) устанавливает в качестве базы текущее время.
							   Этот прием часто используется для того, чтобы при разных запусках генератора
							   псевдослучайных чисел была всякий раз разная база и, соответственно, разный ряд
							   получаемых значений.*/
	int* a;
	int n, key, index;
	n = 10;
	a = new int[n];

	cout << endl;
	SetColor(White, Black);
	cout << setw(70) << " Функция бинарного поиска." << endl << endl;

	// Выввод верхней рамки
	for (int i = 1; i <= 5; i++)
	{
		cout << " ";
	}
	for (int j = 1; j <= 108; j++)
	{
		cout << "*";
	}
	cout << endl;
	SetColor(Yellow, Black);
	cout << "\tint bin_search(int* a, int n, int key)";
	SetColor(Red, Black);
	cout << " // Функция бинарного поиска" << endl;
	SetColor(Yellow, Black);
	cout << "\t{" << endl;
	cout << "\t	int low = 0, up = n - 1, i;" << endl;
	cout << "\t	i = (low + up) / 2;" << endl;
	cout << "\t	while (low <= up)" << endl;
	cout << "\t	{" << endl;
	cout << "\t		if (a[i] == key)" << endl;
	cout << "\t			break;" << endl;
	cout << "\t		else if (a[i] < key)" << endl;
	cout << "\t			low = i + 1;" << endl;
	cout << "\t		else" << endl;
	cout << "\t			up = i - 1;" << endl;
	cout << "\t		i = (low + up) / 2;" << endl;
	cout << "\t }" << endl;
	cout << "\t	if (low <= up)" << endl;
	cout << "\t		return i;" << endl;
	cout << "\t	return -1;" << endl;
	cout << "\t }" << endl;

	SetColor(White, Black);
	cout << endl;
	// Выввод нижней рамки
	for (int i = 1; i <= 5; i++)
	{
		cout << " ";
	}
	for (int j = 1; j <= 108; j++)
	{
		cout << "*";
	}
	cout << endl;


	a[0] = rand() % 10;
	cout << endl;
	cout << setw(7) << a[0] << " "; // Выводим массив


	for (int i = 1; i < n; i++)
	{
		a[i] = a[i - 1] + rand() % 10;
		cout << a[i] << " ";
	}
	cout << endl << endl;
	cout << "      Введите любое число ";
	cin >> key;

	index = bin_search(a, n, key);

	if (index == -1)
		cout << "\n      В массиве нет такого числа!" << endl;
	else
		cout << "\n      Указанное число находится в ячейке с индексом: " << index << endl;;

	return 0;
}