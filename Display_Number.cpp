/*������� �� ����� ��� ����� �� ���� �� ���������� ������������� �����.*/
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "\n ��������� ������� �� ����� ����� �� ���� " << endl;
    cout << " �� ���������� ������������� �����." << endl;

    int a;

    cout << "\n ������� ���� ����� : ";
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
