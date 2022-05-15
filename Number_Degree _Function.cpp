/*Написать функцию, которая принимает два
параметра: основание степени и показатель степени, и
вычисляет степень числа на основе полученных данных*/
#include <iostream>
#include <windows.h>
using namespace std;

int powInnumber(int number, int powNum)
{
    if (powNum == 0)
        return 1;
    if (powNum == 1)
        return number;
    int result = number;
    for (int i = 0; i < powNum - 1; i++)
        result *= number;
    return result;
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "\n Функция, которая принимает два параметра:" << endl;
    cout << " основание степени и показатель степени, и вычисляет степень числа на основе полученных данных" << endl;
    int number, powNum;
    cout << "\n Введите число  : ";
    cin >> number;
    cout << " Введите степень в которую нужно возвести число : ";
    cin >> powNum;
    cout << " Результат = " << powInnumber(number, powNum) << endl;

    return 0;
}