/*Написать программу, которая по выбору
пользователя возводит введенное им число в степень от
нулевой до седьмой включительно.*/

#include <iostream>
#include <windows.h>
//#include <locale.h>
using namespace std;
#define MAX_STEPEN 7    //возводим в степень с нулевой до 7 (MAX_STEPEN)

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "\n Программа, которая по выбору" << endl;
    cout << " пользователя возводит введенное им число в степень от" << endl;
    cout << " нулевой до седьмой включительно." << endl;
    double chislo;              //число возводимое в степень
    double result = 1;          //результат возведения в степень
    int counter = 0;            //счетчик для реализации цикла
   
    cout <<endl;
    cout << " Введите число возводимое в степень : ";
    cin >> chislo;
    cout <<endl;

    while (counter <= MAX_STEPEN)
    {
        cout << "Число " << chislo << " в степени " << counter << " = ";
        if (chislo == 0 && counter == 0) //если пользователь возводит 0 в степень 0,
        {
            cout << " ошибка вычисления" << endl; //то выводим ошибку для текущей операции
        }
        else cout << result <<endl; //иначе выводим результат
        result *= chislo;
        counter++;
    }
    return 0;
}