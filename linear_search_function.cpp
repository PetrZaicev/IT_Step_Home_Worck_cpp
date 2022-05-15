// Функция линейного поиска
#include <iostream>
#include <windows.h>
#include <iomanip>
#include <ctime>
using namespace std;

// Функция линейного поиска
int linSearch(int arr[], int requiredKey, int arrSize)  
{
	for (int i = 0; i < arrSize; i++)
	{
		if (arr[i] == requiredKey)
			return i;
	}
	return -1;
}
// Показ массива 
void showArr(int arr[], int arrSize)
{
	for (int i = 0; i < arrSize; i++)
	{
		cout << setw(4) << arr[i];
		if ((i + 1) % 10 == 0)
		{
			cout << endl;
		}

	}
	cout << endl << endl;
}

int main()
{
	SetConsoleCP(1251);                                     // Подключаем кирилицу
	SetConsoleOutputCP(1251);
	HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE); // изменение цвета шрифта и фона

	const int arrSize = 100; // Переменная количество символов в массиве
	int arr[arrSize];       // Массив
	int requiredKey = 0;    // Искомое значение (ключ)
	int nElement = 0;       // Номер элемента массива
	srand(time(NULL));      /*Сочетание srand(time(NULL)) устанавливает в качестве базы текущее время.
	                        //Этот прием часто используется для того, чтобы при разных запусках генератора
	                        //псевдослучайных чисел была всякий раз разная база и, соответственно, разный ряд 
	                        получаемых значений.*/

	cout << "\n\t Функция линейного поиска." << endl;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |
		FOREGROUND_GREEN); // Меняем цвет текста


	cout << "\n\n int linSearch(int arr[], int requiredKey, int arrSize)" << endl;
	cout << "{ " << endl;
	cout << "	for (int i = 0; i < arrSize; i++)" << endl;
	cout << "	{" << endl;
	cout << "		if (arr[i] == requiredKey)" << endl;
	cout << "			return i;" << endl;
	cout << " }" << endl;
	cout << "	return -1;" << endl;
    cout << " } " << endl;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN |
		FOREGROUND_BLUE); // Меняем цвет текста

	//запись случ. чисел в массив от 1 до 100
	for (int i = 0; i < arrSize; i++)
	{
		arr[i] = 1 + rand() % 100;
	}
	cout << endl << endl;
	showArr(arr, arrSize); // Вывод массива на экран 

	cout << "  Какое число необходимо искать? ";
	cin >> requiredKey; // ввод искомого числа

	//поиск искомого числа и запись номера элемента
	nElement = linSearch(arr, requiredKey, arrSize);

	if (nElement != -1)
	{
		//если в массиве найдено искомое число - выводим индекс элемента на экран
		cout << " Значение " << requiredKey << " находится в ячейке с индексом: " << nElement << endl;
	}
	else
	{
		//если в массиве не найдено искомое число
		cout << " В массиве нет такого значения" << endl;
	}
	return 0;
}



