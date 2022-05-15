/* ����: ������� ���������������� �� ����� �++
                 ����: ������
               �������� ������� 2
������� 1. �������� �������, ������� ������� �� ������
������ � �������� �������.
������� 2. �������� �������, ������� ������� �� ������
��� ��������� � ��� ��������� �������.
������� 3. �������� �������, ������� ��������� � ������
� ��������� ������� �������� ������.
������� 4. �������� ���������, ������� �������� ���
������� ����� �.� � ������, ��������� �������������,
�� ������� ���������������� ����� �!�.
������� 5. ������������ ������ ������ �������� � ��-
����� ������, ��������� ������� ��� �� �����������
� ������.
������� 6. ������������ ������ ������. ���������� ��-
�������� ����, ���������� ���� � ���������� ���������
��������, �������������� � ������.*/


#include <iostream>
#include <string>
using namespace std;

void DelChar(string& str, int num)
{
    str.erase(str.begin() + num);
}

void DelAllChar(string& str, char simbol)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == simbol)
        {
            str.erase(i, 1);
        }
    }
}

void InsertChar(string& str, int num, char simbol)
{
    str.insert(num, 1, simbol);
}

void ReplaceChar(string& str)
{
    int simbol1 = ',';
    int simbol2 = '!';

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == simbol1)
        {
            str[i] = simbol2;
        }
    }
}

int CountChar(string& str, char simbol)
{
    int count = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == simbol)
        {
            count++;
        }
    }
    return count;
}

void NumberCharacters(string& str)
{
    int countNum = 0, temp, countLetter = 0, countSimbol = 0;

    for (int i = 0; i < str.length(); i++)
    {
        temp = (int)(str[i]);

        if (temp >= 48 && temp < 58)
        {
            countNum++;
        }
        if (temp >= 65 && temp < 91)
        {
            countLetter++;
        }
        if (temp >= 97 && temp < 123)
        {
            countLetter++;
        }
        if (temp >= 32 && temp < 48)
        {
            countSimbol++;
        }
        if (temp >= 58 && temp < 65)
        {
            countSimbol++;
        }
        if (temp >= 91 && temp < 97)
        {
            countSimbol++;
        }
        if (temp >= 123 && temp <= 126)
        {
            countSimbol++;
        }
    }
    cout << " ���������� ���� � ������: " << countNum << endl;
    cout << " ���������� ���� � ������: " << countLetter << endl;
    cout << " ���������� �������� � ������: " << countSimbol << endl;

}

int main()
{
    setlocale(LC_ALL, "rus");

    int menu, num;
    char simbol;

    string str = " Eto ge nado, Ludyam takoe zadavat, sovsem moya neponimaet. 12345.";

    cout << endl << endl;
    
    while (1)
    {

        cout << "������: " << str << endl << endl;

        cout << " 1) ������� �� ������ ������ � �������� �������;" << endl;
        cout << " 2) ������� �� ������ ��� ��������� � ��� ��������� �������;" << endl;
        cout << " 3) �������� � ������ � ��������� ������� �������� ������;" << endl;
        cout << " 4) ��������  ���  �������  ������� �  ������, �� ������� ���������������� �����;" << endl;
        cout << " 5) ��������� ������� ��� �������� ������ ����������� � ������" << endl;
        cout << " 6) ����������  ����������  ����,  ����������  ����  �  ���������� ��������� ��������, �������������� � ������." << endl;
        cout << " 0) �����" << endl;
        cout << " ������� ����� ����: ";  cin >> menu;

        if (menu == 1)
        {
            cout << "������� ����� �������: ";
            cin >> num;
            cout << endl;
            DelChar(str, num);

            cout << endl;
            cout << "������: " << str << endl << endl;
        }

        else if (menu == 2)
        {
            cout << "������� ������ ��� �������� �� ������: ";
            cin >> simbol; cout << endl;
            DelAllChar(str, simbol);

            cout << endl;
            cout << "������: " << str << endl << endl;
        }
        else if (menu == 3)
        {
            cout << "������� ����� ������� ���� ���������� �������� ������: ";
            cin >> num;
            cout << "������� ������ ��� ���������� � ������: ";
            cin >> simbol; cout << endl;
            InsertChar(str, num, simbol);

            cout << endl;
            cout << "������: " << str << endl << endl;
        }
        else if (menu == 4)
        {
            ReplaceChar(str);

            cout << endl;
            cout << "������: " << str << endl << endl;
        }
        else if (menu == 5)
        {
            cout << "������� ������: "; cin >> simbol; cout << endl;
            cout << "�������� " << simbol << " � ������: " << CountChar(str, simbol) << endl << endl;
        }
        else if (menu == 6)
        {
            cout << endl;
            NumberCharacters(str);
        }
        else if (menu == 0)
        {
            break;
        }


        cout << endl << endl;
        system("pause");
        system("cls");
    }
    return 0;
}