/* �������� �������, ������� ������� �� ������
��� ��������� � ��� ��������� �������.*/

#include <iostream>
#include <string>
using namespace std;


//void DelAllChar(string& str, char simbol);
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


int main()
{
    setlocale(LC_ALL, "rus");

    char simbol;

    string str = " Blin, nado ge takoe pridumat, uzhas tihiy! 12345.";

    cout << endl << endl;
    cout << " ������: " << str << endl << endl;

    cout << " ������� �� ������ ��� ��������� � ��� ��������� �������;" << endl;

    cout << " ������� ������ ��� �������� �� ������: "; cin >> simbol; cout << endl;
       
    DelAllChar(str, simbol);

    cout << endl;
    cout << "������: " << str << endl << endl;
    
    cout << endl << endl;
    system("pause");
    return 0;
}