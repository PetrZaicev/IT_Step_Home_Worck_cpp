/*Задание 1. Дополните свою библиотеку функций реали-
зациями нижеследующих функций:
■■ int mystrcmp (const char * str1, const char * str2); —
функция сравнивает две строки, и , если строки равны
возвращает 0, если первая строка больше второй, то
возвращает 1, иначе –1.
■■ int StringToNumber(char * str); — функция конверти-
рует строку в число и возвращает это число.
■■ char * NumberToString (int number); — функция кон-
вертирует число в строку и возвращает указатель на
эту строку.
■■ char * Uppercase (char * str1); — функция преобразует
строку в верхний регистр.
■■ char * Lowercase (char * str1); — функция преобразует
строку в нижний регистр.
■■ char * mystrrev (char * str); — функция реверсирует
строку и возвращает указатель на новую строку.*/

#define _CRT_SECURE_NO_WARNINGS  // Устраняет ошибку компилятора
#include <iostream>
#include <string>  
using namespace std;


int mystrcmp(const char* str1, const char* str2)   // Функция сравнивает две строки и, если строки равны возвращает 0,
{                                                  //если первая строка больше второй, то возвращает 1, иначе - 1.
    string str1_1 = string(str1);
    string str2_2 = string(str2);

    if (str1_1 == str2_2)
    {
        return 0;
    }
    else if (strlen(str1) > strlen(str2))
    {
        return 1;
    }
    else {
        return -1;
    }
}
 
int StringToNumber(char* str) //функция конвертирует строку в число и возвращает это число
{
    int result;

    for (int i = 0; i < strlen(str); i++)
    {
        if (!isdigit(str[i]))
        {
            cout << "В этой строке содержаться не цифры!" << endl;
            return false;
        }
        else
        {
            result = atoi(str);
        }
    }
    return result;
}
 
char* NumberToString(int number)     //функция  конвертирует  число  в  строку  и  возвращает указатель на эту строку.
{
    string temp = to_string(number);

    char* intToString = new char[temp.length() + 1];
    strcpy(intToString, temp.c_str());

    return intToString;
}

char* Uppercase(char* str1)   //функция преобразует строку в верхний регистр.
{
    for (int i = 0; i < strlen(str1); i++)
    {
        str1[i] = toupper(str1[i]);
    }
    return str1;
}
 
char* Lowercase(char* str1)  //функция преобразует строку в нижний регистр.
{
    for (int i = 0; i < strlen(str1); i++)
    {
        str1[i] = tolower(str1[i]);
    }
    return str1;
}
  
char* mystrrev(char* str)  //функция  реверсирует  строку  и  возвращает  указатель  на  новую строку.
{
    reverse(str, str + strlen(str));

    return str;
}

int main()
{
    setlocale(LC_ALL, "rus");

    string str1 = "123";
    string str2 = "abcsdf";

    char* ptrStr1Arr = new char[str1.length() + 1]; // +1 для нулевого байта
    strcpy(ptrStr1Arr, str1.c_str());

    char* ptrStr2Arr = new char[str2.length() + 1]; // +1 для нулевого байта
    strcpy(ptrStr2Arr, str2.c_str());

    //------------------------------------------------------------------------

    cout << " Вывод на экран первой строки: ";

    for (int i = 0; i < str1.length(); i++) 
    { 
        cout << ptrStr1Arr[i]; 
    }

    cout << endl;
    cout << " Вывод на экран второй строки: ";

    for (int i = 0; i < str2.length(); i++) { cout << ptrStr2Arr[i]; }
    cout << endl;
    for (int i = 0; i < 50; i++)
    {
        cout << "_"; 
    }

    //------------------------------------------------------------------------
    cout << endl << endl;

    int stringComp = mystrcmp(ptrStr1Arr, ptrStr2Arr); // Результат сравнения строк записывается в переменную

    cout << " Результат сравнения строк: " << stringComp;

    cout << endl;
    for (int i = 0; i < 50; i++) 
    {
        cout << "_"; 
    }
    //------------------------------------------------------------------------
    cout << endl << endl;

    int convertStrToInt = StringToNumber(ptrStr1Arr); // Результат конвертирования строки в число записывается в переменную

    cout << " Конвертирование строки в число: " << convertStrToInt;

    cout << endl;
    for (int i = 0; i < 50; i++)
    {
        cout << "_";
    }
    //------------------------------------------------------------------------
    cout << endl << endl;

    int number = 11;

    string intToString = NumberToString(number); // Результат конвертирования числа в строку записывается в переменную

    cout << " Результат конвертирования из Int в String: " << intToString;

    cout << endl;
    for (int i = 0; i < 50; i++) 
    {
        cout << "_"; 
    }
    //------------------------------------------------------------------------
    cout << endl << endl;

    string toUpper = Uppercase(ptrStr2Arr); // Результат преобразования строки в верхний регист

    cout << " Результат преобразования строки в верхний регист: " << toUpper;

    cout << endl;
    for (int i = 0; i < 50; i++) 
    { 
        cout << "_";
    }
    //------------------------------------------------------------------------
    cout << endl << endl;

    string toLower = Lowercase(ptrStr2Arr); // Результат преобразования строки в нижний регист


    cout << " Результат преобразования строки в нижний регист: " << toLower;

    cout << endl;
    for (int i = 0; i < 50; i++)
    {
        cout << "_";
    }
    //------------------------------------------------------------------------
    cout << endl << endl;

    string rrev = mystrrev(ptrStr2Arr); // Результат реверса строки

    cout << " Результат реверса строки: " << rrev;

    cout << endl;
    for (int i = 0; i < 50; i++)
    { 
        cout << "_"; 
    }
    //------------------------------------------------------------------------
    cout << endl << endl;
    delete[] ptrStr1Arr, ptrStr2Arr;
    system("pause");
    return 0;
}





