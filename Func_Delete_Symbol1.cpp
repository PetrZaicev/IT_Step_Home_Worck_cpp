/*Задание 1. Написать функцию, которая удаляет из строки
символ с заданным номером.*/

#include <iostream>
#include <windows.h>
using namespace std;


const int s = 9;
void DelSymbol(int a, const char* arr)
{
    for (int i = 0; i < s; i++)
        if (arr[i] != arr[a])
            cout << arr[i] << ' ';
}
void ShowArr(int a, const char* arr)
{
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int a;
    char arr[] = { "\0!%&ih$#@" };
    cout << "\n";
    ShowArr(s, arr);
    cout << endl;
    cout << " Enter cod symbol: ";
    cin >> a;
    DelSymbol(a, arr);cout << endl;
	system("pause");
	return 0;
}
