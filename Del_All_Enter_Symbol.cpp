/* Написать функцию, которая удаляет из строки
все вхождения в нее заданного символа.*/

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
    cout << " Строка: " << str << endl << endl;

    cout << " Удалить из строки все вхождения в нее заданного символа;" << endl;

    cout << " Введите символ для удаления из строки: "; cin >> simbol; cout << endl;
       
    DelAllChar(str, simbol);

    cout << endl;
    cout << "Строка: " << str << endl << endl;
    
    cout << endl << endl;
    system("pause");
    return 0;
}