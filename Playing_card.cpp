/*�������� �������, ��������� �� �����
���������� �� ��������� �����.*/
#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

void card(int suit, int num)
{
    char card[13] = { 'A','2','3','4','5','6','7','8','9','0','J','Q','K' };
    cout << endl;
    cout << " ___________________"<<endl;
    cout << "|                   |"<<endl;
    cout << "|                   |"<<endl;
    if (num == 10)cout << '\t|' << setw(4) << "\t1" << card[num - 1] << "              |"<<endl;
    else cout << '|' << setw(4) << card[num - 1] << "               |"<<endl;
    cout << "|                   |"<<endl;
    cout << "|                   |"<<endl;
    cout << "|                   |"<<endl;
    cout << "|                   |"<<endl;
    cout << "|                   |"<<endl;
    switch (suit)
    {
    case 1:
        cout << '|' << setw(12) << "�����" << "       |"<<endl;
        break;
    case 2:
        cout << '|' << setw(12) << " ����" << "       |"<<endl;
        break;
    case 3:
        cout << '|' << setw(12) << " ����" << "       |"<<endl;
        break;
    case 4: 
        cout << '|' << setw(12) << " ������" << "       |"<<endl;
        break;
    
            
    }
    cout << "|                   |"<<endl;
    cout << "|                   |"<<endl;
    cout << "|                   |"<<endl;
    cout << "|                   |"<<endl;
    if (num == 10)cout << "|              " << "1" << card[num - 1] << "   |"<<endl;
    else
        cout << "|               " << card[num - 1] << "   |"<<endl;
    cout << "|                   |"<<endl;
    cout << "|___________________|"<<endl;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, s;
    
    
        while (1) // ����������� ����
        {
                system("cls"); // ������� ������� ������
            cout << endl;
            cout << " �����:\n 1  - ��� \n 2  - ������\n 3  - ������\n 4  - ���������\n 5  - �������\n 6  - ��������";
            cout << "\n 7  - �������\n 8  - ���������\n 9  - �������\n 10 - �������\n 11 - �����\n 12 - ����\n 13 - ������" << endl;
            cout << " �������� ����� - ";
            cin >> a;
            cout << "\n\t\t\t����� �����\n 1. �����.\n 2. ����\n 3. ����\n 4. ������\n";
            cout << " �������� ����� - ";
            cin >> s;
            card(s, a);
            cout << endl;
            system("pause");      
            
        }
   
}