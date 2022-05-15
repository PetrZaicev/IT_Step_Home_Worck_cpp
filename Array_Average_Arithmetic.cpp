#include <iostream>
#include <windows.h>
#include <iomanip>
#include <time.h>
using namespace std;

// функция нахождения среднего арифметического
double average(const int* arrayPtr, int size_array) 
{
	int sum = 0; // хранение суммы элементов массива
	for (int counter = 0; counter < size_array; counter++)
	{
		sum += arrayPtr[counter]; // накапливаем сумму
	}

	return (double)sum / size_array; // воззвращаем среднее арифметическое
}

// Выввод верхней рамки
void LIne(int i, char t)
{
	for (int j = 1; j <=t; j++)
	{
		cout << "*";
	}
}

// Изменеие цвета текста и фона
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

int main()
{
	setlocale (LC_ALL, "rus");
	srand(time(0)); // рандомизация
	const int length = 20; // размер массива
	int arr[length]; // объявляе массив соответствующего размера
	setlocale(LC_ALL, "");
	cout << "\n Написать функцию, определяющую среднее" << endl;
	cout << " арифметическое элементов передаваемого ей массива." << endl;

	cout << endl;
	SetColor(Yellow, Black);
	LIne('*',120);
	cout << endl;
    cout << "\t double average(const int* arrayPtr, int size_array)";
	SetColor(Red, Black);
    cout<<"// функция нахождения среднего арифметического" << endl;
	SetColor(Yellow, Black);
	cout << "\t{"<<endl;
	cout << "\t	int sum = 0;";
	SetColor(Red, Black);
	cout<<"// хранение суммы элементов массива"<<endl;
	SetColor(Yellow, Black);
	cout << "\t        for (int counter = 0; counter < size_array; counter++)"<<endl;
	cout << "\t       {"<<endl;
	cout << "\t	sum += arrayPtr[counter];";
	SetColor(Red, Black);
	// накапливаем сумму"<<endl;
	SetColor(Yellow, Black);
	cout << "\t "<<endl;
	cout << "\t       }" << endl;
	cout << "\t  return (double)sum / size_array;";
	SetColor(Red, Black);
	cout<<"// воззвращаем среднее арифметическое"<<endl;
	SetColor(Yellow, Black);
	cout << "\t}"<<endl;
	cout << endl;

	LIne('*', 120);
	SetColor(White, Black);
	cout << endl;
	for (int counter = 0; counter < length; counter++)
	{
		arr[counter] = rand() % 100+1; // инициализация массива случайным числом в интервале [0 -100]
		cout <<" " << arr[counter] << " "; // печать элемента массива
	}
	

	cout << "\n Среднее арифметическое = " << average(arr, length) << endl<<endl; // запуск функции
	system("pause");
	return 0;
}


