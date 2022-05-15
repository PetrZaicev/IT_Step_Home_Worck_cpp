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

#include <iostream>
using namespace std;

void  ShowLine(int n) // Вывод разделителя
{ 
  
    for (int j = 1; j <=n; j++)
    {
        cout << "*";
    }
}

void ShowMas(char const* mas, int masSize) // Вывод на экран
{
    for (int i = 0; i < masSize; i++)
    {
        cout << mas[i];
    }
    cout << endl;
}

int mystrcmp(char const* str1, char const* str2)    //-функция сравнивает две строки, и,  если строки равны возвращает 0, если первая строка                                  
{                                                  
    int result = 0;
    for (int i = 0; str1[i] != '\0' && str2[i] != '\0'; i++)
    {
        if ((int)str1[i] > (int)str2[i])
        {
            result = 1;                           
            break;
        }
        else if ((int)str1[i] < (int)str2[i])
        {
            result = -1;
            break;
        }
    }
    return result;
}
                                                  //больше второй, то возвращает 1, иначе - 1.             
int stringToNumber(char const* str)               //-функция конвертирует строку в число и возвращает это число.
{
    int result = 0;
    int number;
    for (int i = 0; str[i] != '\0'; i++)
    {
        number = str[i];
        if (number >= 48 || number <= 57)
        {
            result = result * 10 + (number - 48);
        }
    }
    return result;
}
              
char* numberToString(int number)                  //-функция конвертирует число в строку и возвращает указатель на эту строку.
{
    int numberCount = 0;
    int number1 = number;
    do
    {
        number1 /= 10;
        numberCount++;
    } while (number1 % 10 != 0);
    cout << " Количество чисел = " << numberCount << endl;
    char* stringNumber = new char[numberCount + 1];
    stringNumber[numberCount] = '\0';
    for (int i = numberCount - 1; i >= 0; i--)
    {
        stringNumber[i] = (char)(48 + number % 10);
        number /= 10;
    }
    return stringNumber;
    delete[] stringNumber;
}
                     
char* upperCase(char* str1)                        //-функция преобразует строку в верхний регистр.
{
    int length = strlen(str1);
    char* bigLettersStr = new char[length + 1];
    bigLettersStr[length] = '\0';
    for (int i = 0; str1[i] != '\0'; i++)
    {
        if ((int)str1[i] >= 97 && (int)str1[i] <= 122)
        {
            bigLettersStr[i] = (char)((int)str1[i] - 32);
        }
        else
        {
            bigLettersStr[i] = str1[i];
        }
    }
    return bigLettersStr;
    delete[] bigLettersStr;
}
                     
char* lowerCase(char* str1)                       //-функция преобразует строку в нижний регистр.
{
    int length = strlen(str1);
    char* smallLettersStr = new char[length + 1];
    smallLettersStr[length] = '\0';
    for (int i = 0; str1[i] != '\0'; i++)
    {
        if ((int)str1[i] >= 65 && (int)str1[i] <= 90)
        {
            smallLettersStr[i] = (char)((int)str1[i] + 32);
        }
        else
        {
            smallLettersStr[i] = str1[i];
        }
    }
    return smallLettersStr;
    delete[] smallLettersStr;
}
                        
char* mystrrev(char* str)                         //-функция реверсирует строку и возвращает указатель на новую строку.
{
    int length = strlen(str);
    char* reverseStr = new char[length + 1];
    reverseStr[length] = '\0';
    for (int i = 0; str[i] != '\0'; i++)
    {
        reverseStr[length - 1 - i] = str[i];
    }
    cout << endl;
    return reverseStr;
    delete[] reverseStr;
}


int main()
{
    setlocale(LC_ALL, "rus");

    int const n = 11;
    cout << endl;

    char const str1[n] = {"строка123"};
    char const str2[n] = {"строка133"};
    char const str3[n] = {"строка133"};

    cout << " -> Функция сравнивает две строки." << endl<<endl;
    cout << " Строка 1 = ";
    ShowMas(str1, n);
    cout << " Строка 2 = ";
    ShowMas(str2, n);
    cout << " Строка 3 = ";
    ShowMas(str3, n);

    //-функция сравнивает две строки
    cout << " Результат сравнения строки 1 и строки 2 = " << mystrcmp(str1, str2) << endl;
    cout << " Результат сравнения строки 1 и строки 3 = " << mystrcmp(str2, str3) << endl<<endl;

    ShowLine(80); cout << endl;

    //-функция конвертирует строку в число и возвращает это число.
    cout << " -> Функция конвертирует строку в число и возвращает это число." << endl<<endl;
    char const str4[n] = "1234565432";
    cout << " Строка = ";
    ShowMas(str4, n);
    cout << " Строка конвертируемая в число = " << stringToNumber(str4) << endl<<endl;

    ShowLine(80); cout << endl;

    //-функция конвертирует число в строку и возвращает указатель на эту строку.
    cout << " -> Функция конвертирует число в строку и возвращает указатель на эту строку." << endl << endl;
    int number = 151515;
    cout << " Число = " << number << endl <<
        " Число конвертируемое в строку = " << numberToString(number) << endl<<endl;

    ShowLine(80); cout << endl;

    //-функция преобразует строку в верхний регистр.
    cout << " -> Функция преобразует строку в верхний регистр." << endl << endl;
    char str5[n] = "zadachaA1a";
    cout << " Оригинальная строка = " << str5 << endl <<
        " Строка в врхнем регистре = " << upperCase(str5) << endl<<endl;

    ShowLine(80); cout << endl;

    //-функция преобразует строку в нижний регистр.
    cout << " -> Функция преобразует строку в нижний регистр." << endl << endl;
    char str6[n] = "ZADACHAb1b";
    cout << " Оригинальная строка = " << str6 << endl <<
        " Строка в нижнем регистре = " << lowerCase(str6) << endl<<endl;

    ShowLine(80); cout << endl;

    //-функция реверсирует строку и возвращает указатель на новую строку.
    cout << " -> Функция реверсирует строку и возвращает указатель на новую строку." << endl << endl;
    cout << " Оригинальная строка  = " << str6 << endl <<
        " Реверсивная строка = " << mystrrev(str6) << endl<<endl;

    ShowLine(80); cout << endl;

    system("pause");
    return 0;

}
