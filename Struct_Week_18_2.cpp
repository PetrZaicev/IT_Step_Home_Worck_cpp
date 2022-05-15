/*Создайте структуру, описывающую комплексное
число. Реализуйте арифметические операции с комплекс-
ными числами: сумму, разность, умножение, деление.*/

#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
using namespace std;

struct kompl
{
    float deystvit;
    float mnim;
};
void show_kompl(kompl a) {
    if (!a.mnim)cout << "Если мнимая часть равна нулю то число является действительным (вещественным): " << a.deystvit << "\n"; else {
        if (a.deystvit)cout << a.deystvit;
        if (a.mnim > 0)cout << "+i"; else { cout << "-i"; a.mnim = -a.mnim; }
        (a.mnim != 1) ? cout << a.mnim << "\n" : cout << "\n";
    }
}
kompl put_kompl() {
    kompl a;
    cout << "\n Введите действительную часть (х) ";
    cin >> a.deystvit;
    cout << "\n Введите мнимую часть (у) ";
    cin >> a.mnim;
    return a;
}
kompl calc_kompl(kompl a, char deystvie, kompl b) {
    kompl temp;
    switch (deystvie)
    {
    case '+':
        temp.deystvit = a.deystvit + b.deystvit;
        temp.mnim = a.mnim + b.mnim;
        break;
    case '-':
        temp.deystvit = a.deystvit - b.deystvit;
        temp.mnim = a.mnim - b.mnim;
        break;
    case '*':
        temp.deystvit = a.deystvit * b.deystvit;
        temp.mnim = a.mnim * b.mnim;
        break;
    case '/':
        temp.deystvit = a.deystvit / b.deystvit;
        temp.mnim = a.mnim / b.mnim;
        break;
    default:
        cout << "\n Некорректно указано действие" << endl;
        break;
    }
    return temp;
}



int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //Создайте структуру, описывающую комплексное число.Реализуйте
    //арифметические операции с комплексными числами :
    //сумму, разность, умножение, деление.

    kompl a, b, c;
        int k = 1;
        char deystvie;

        cout << "\n Комплексное число имеет вид x+iy" << endl;

        while (k) {
            cout << "\n Сформируем первое комплексное число" << endl;
            a = put_kompl();
            cout << "\nРезультат: ";
            show_kompl(a);
            cout << "\n Укажите арифметическую операцию ( + - * / )" << endl;
            cin >> deystvie;
            cout << "\n Сформируем второе комплексное число" << endl;
            b = put_kompl();
            cout << "\n Результат: ";
            show_kompl(b);
            c = calc_kompl(a, deystvie, b);
            cout << "\n Результат вычислений: ";
            show_kompl(c);
            cout << "\n Продолжим (да - 1, нет - 0)";
            cin >> k;
        }
        system("pause");
        return 0;
    }
  
   
   
