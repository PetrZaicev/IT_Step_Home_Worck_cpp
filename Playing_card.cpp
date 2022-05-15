/*Написать функцию, выводящую на экран
переданную ей игральную карту.*/
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
        cout << '|' << setw(12) << "ЧЕРВИ" << "       |"<<endl;
        break;
    case 2:
        cout << '|' << setw(12) << " БУБИ" << "       |"<<endl;
        break;
    case 3:
        cout << '|' << setw(12) << " ВИНИ" << "       |"<<endl;
        break;
    case 4: 
        cout << '|' << setw(12) << " КРЕСТИ" << "       |"<<endl;
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
    
    
        while (1) // Бесконечный цикл
        {
                system("cls"); // Функция очистки экрана
            cout << endl;
            cout << " КАРТЫ:\n 1  - ТУЗ \n 2  - ДВОЙКА\n 3  - ТРОЙКА\n 4  - ЧЕТВЕРТКА\n 5  - ПЯТЕРКА\n 6  - ШЕСТЕРКА";
            cout << "\n 7  - СЕМЕРКА\n 8  - ВОСЬМЕРКА\n 9  - ДЕВЯТКА\n 10 - ДЕСЯТКА\n 11 - ВАЛЕТ\n 12 - ДАМА\n 13 - КОРОЛЬ" << endl;
            cout << " Выберите карту - ";
            cin >> a;
            cout << "\n\t\t\tМасть карты\n 1. ЧЕРВИ.\n 2. БУБИ\n 3. ВИНИ\n 4. КРЕСТИ\n";
            cout << " Выберите масть - ";
            cin >> s;
            card(s, a);
            cout << endl;
            system("pause");      
            
        }
   
}