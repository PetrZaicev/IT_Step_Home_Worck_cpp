/*�������� ���������, ����������� �����������
�����. ���������� �������������� �������� � ��������-
���� �������: �����, ��������, ���������, �������.*/

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
    if (!a.mnim)cout << "���� ������ ����� ����� ���� �� ����� �������� �������������� (������������): " << a.deystvit << "\n"; else {
        if (a.deystvit)cout << a.deystvit;
        if (a.mnim > 0)cout << "+i"; else { cout << "-i"; a.mnim = -a.mnim; }
        (a.mnim != 1) ? cout << a.mnim << "\n" : cout << "\n";
    }
}
kompl put_kompl() {
    kompl a;
    cout << "\n ������� �������������� ����� (�) ";
    cin >> a.deystvit;
    cout << "\n ������� ������ ����� (�) ";
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
        cout << "\n ����������� ������� ��������" << endl;
        break;
    }
    return temp;
}



int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //�������� ���������, ����������� ����������� �����.����������
    //�������������� �������� � ������������ ������� :
    //�����, ��������, ���������, �������.

    kompl a, b, c;
        int k = 1;
        char deystvie;

        cout << "\n ����������� ����� ����� ��� x+iy" << endl;

        while (k) {
            cout << "\n ���������� ������ ����������� �����" << endl;
            a = put_kompl();
            cout << "\n���������: ";
            show_kompl(a);
            cout << "\n ������� �������������� �������� ( + - * / )" << endl;
            cin >> deystvie;
            cout << "\n ���������� ������ ����������� �����" << endl;
            b = put_kompl();
            cout << "\n ���������: ";
            show_kompl(b);
            c = calc_kompl(a, deystvie, b);
            cout << "\n ��������� ����������: ";
            show_kompl(c);
            cout << "\n ��������� (�� - 1, ��� - 0)";
            cin >> k;
        }
        system("pause");
        return 0;
    }
  
   
   
