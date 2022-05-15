/*Написать программу-конвертер валют. Реализовать общение с пользователем через меню.*/
#include <iostream>
#include <windows.h>

using namespace std;
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    float USD, EUR, GBR;
    float Rub;
    float uRub, eRub, fRub;
    int i;
    cout << "\n Введите текущий курс Доллора, Евро, Фунтов: "<<endl;
    cin >> USD;
    cin >> EUR;
    cin >> GBR;
    system("cls");
    cout << " Выберите конвертер валюты"<<endl ;
    cout << " [1]Доллар" << endl;
    cout << " [2]Евро" << endl;
    cout << " [3]Фунт" << endl;
    cin >> i;
    switch (i)
    {
    case    1:
        cout << " Введите рубли" << endl;
        cin >> Rub;
        uRub = USD * Rub;
        cout << Rub << " руб." << "= " << uRub << " дол." << endl; break;
    case    2:
        cout << " Введите рубли" << endl;
        cin >> Rub;
        eRub = EUR * Rub;
        cout << Rub << " руб.." << "= " << eRub << " ев." << endl; break;
    case    3:
        cout << " Введите рубли" << endl;
        cin >> Rub;
        fRub = GBR * Rub;
        cout << Rub << " руб.." << "= " << fRub << " фунт." << endl; break;
    default: cout << " Ошибка" << endl;
    }
    system("pause");
    return 0;
}