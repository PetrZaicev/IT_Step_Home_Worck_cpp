/*�������� ���������-��������� �����. ����������� ������� � ������������� ����� ����.*/
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
    cout << "\n ������� ������� ���� �������, ����, ������: "<<endl;
    cin >> USD;
    cin >> EUR;
    cin >> GBR;
    system("cls");
    cout << " �������� ��������� ������"<<endl ;
    cout << " [1]������" << endl;
    cout << " [2]����" << endl;
    cout << " [3]����" << endl;
    cin >> i;
    switch (i)
    {
    case    1:
        cout << " ������� �����" << endl;
        cin >> Rub;
        uRub = USD * Rub;
        cout << Rub << " ���." << "= " << uRub << " ���." << endl; break;
    case    2:
        cout << " ������� �����" << endl;
        cin >> Rub;
        eRub = EUR * Rub;
        cout << Rub << " ���.." << "= " << eRub << " ��." << endl; break;
    case    3:
        cout << " ������� �����" << endl;
        cin >> Rub;
        fRub = GBR * Rub;
        cout << Rub << " ���.." << "= " << fRub << " ����." << endl; break;
    default: cout << " ������" << endl;
    }
    system("pause");
    return 0;
}