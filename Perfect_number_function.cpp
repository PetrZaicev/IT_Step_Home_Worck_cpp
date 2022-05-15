/*Число называется совершенным, если сумма
всех его делителей равна ему самому. Напишите функцию
поиска таких чисел во введенном интервале.*/

#include <iostream>
#include <windows.h>
using namespace std;

int digit(int  x, int  y)
{
    for (int  i = x; i < y; i++)
    {
        int  result = 0;
        for (int  j = 1; j < i; j++)
        {
            if ((i % j) == 0)
            {
                result += j;
            }
        }
        if (result == i && result)
        {
            cout <<" "<< result << " \n";

        }
    }
    return 0;
}

int  main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "\n Число называется совершенным, если сумма" << endl;
    cout << " всех его делителей равна ему самому. Напишите функцию" << endl;
    cout << " поиска таких чисел во введенном интервале." << endl;
    int  x=0, y=0;
    cout << "\n Задайте интервал для поиска :" << endl;
    cout << " Введите целое число начала интервала - ";
    cin >> x;
    cout << "  Введите целое число конца интервала - ";
    cin >> y;
    int  res = digit(x, y);

    return 0;

}