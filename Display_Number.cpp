/*Вывести на экран все числа от нуля до введенного пользователем числа.*/
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "\n Программа выводит на экран числа от нуля " << endl;
    cout << " до введенного пользователем числа." << endl;

    int a;

    cout << "\n Введите свое число : ";
    cin >> a;
    
    cout << endl;

    if (a % 2 == 0)
    {
        for (int i = 0; i <= a; i ++)
        {
            cout << i <<" ";
        }
    }
    

    return 0;
}
