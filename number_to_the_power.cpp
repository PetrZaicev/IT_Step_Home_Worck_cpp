/*�������� ���������, ������� �� ������
������������ �������� ��������� �� ����� � ������� ��
������� �� ������� ������������.*/

#include <iostream>
#include <windows.h>
//#include <locale.h>
using namespace std;
#define MAX_STEPEN 7    //�������� � ������� � ������� �� 7 (MAX_STEPEN)

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "\n ���������, ������� �� ������" << endl;
    cout << " ������������ �������� ��������� �� ����� � ������� ��" << endl;
    cout << " ������� �� ������� ������������." << endl;
    double chislo;              //����� ���������� � �������
    double result = 1;          //��������� ���������� � �������
    int counter = 0;            //������� ��� ���������� �����
   
    cout <<endl;
    cout << " ������� ����� ���������� � ������� : ";
    cin >> chislo;
    cout <<endl;

    while (counter <= MAX_STEPEN)
    {
        cout << "����� " << chislo << " � ������� " << counter << " = ";
        if (chislo == 0 && counter == 0) //���� ������������ �������� 0 � ������� 0,
        {
            cout << " ������ ����������" << endl; //�� ������� ������ ��� ������� ��������
        }
        else cout << result <<endl; //����� ������� ���������
        result *= chislo;
        counter++;
    }
    return 0;
}