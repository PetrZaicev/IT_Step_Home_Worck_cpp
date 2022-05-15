/*��������� ��� ��������� �� ������� �����
�����, ����������� ���� ������ � ������ ���, ����� ��
������ ������� �������� ���������� � �������� �������.
������������ � ��������� ���������� ����������
��� ����������� �� �������, � ����� �������� �������������*/

#include <iostream>
#include <windows.h>
using namespace std;

void func(int* array1, int* array2, int size) 
{
    cout << " ��������� ������     : ";
    cout << " {";
    for (int i = 0; i < 10; i++)
    {
        cout <<" "<< array1[i] << " " ;
        array2[(size - 1) - i] = array1[i];
    }
    cout << "}";

    cout <<endl;
    cout << " ������������� ������ : ";
    cout << " {";
    for (int i = 0; i < 10; i++)
    {  
        cout<<" " << array2[i] << " ";
    }
    cout << "}";
}


int main() 
{
    setlocale(LC_ALL, "rus");

    cout << "\n ��������� ��� ��������� �� ������� �����" << endl;
    cout << " �����, ����������� ���� ������ � ������ ���, ����� ��" << endl;
    cout << " ������ ������� �������� ���������� � �������� �������." << endl;
    
    int size(10);
    int* array1, * array2;

    array1 = new int[size];
    array2 = new int[size];

     for (int i = 0; i < 10; i++)
    {
        array1[i] = rand() % 10;
    }

     cout << endl;
    func(array1, array2, size);

    cout << endl << endl;

    delete  array1;
    delete  array2;

    system("pause");
    return 0;
}