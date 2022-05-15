/*
Написать программу, которая дает пользователю ввести 5 фамилий студентов,
а затем сортирует их по возрастанию.
*/

#include <iostream>
#include <windows.h>
using namespace std;


// Вывод массива на экран
void ShowMas(char** pMas, int masSizeRows)
{
    if (pMas == nullptr)
    {
        cout << " ОШИБКА" << endl;
        return;
    }

    for (int i = 0; i < masSizeRows; i++)
    {
        cout<<" " << i + 1 << ") " << pMas[i] << endl;
    }
}

// сортировка по возрастанию
void Sort(char** pMas, int masSizeRows)
{
     char* temp;
    for (int i = 0; i < masSizeRows - 1; i++)
    {
        char* min = pMas[i];
        int index = i;
        for (int j = i + 1; j < masSizeRows; j++)
        {
            int result = strcmp(pMas[j], min); //strcmp сравнивает поочередно каждую пару символов, 
                                               //и продолжается это до тех пор, пока не будут найдены различные
                                               //символы или не будет достигнут конец строки.
                                               
            if (result < 0)                    
            {
                min = pMas[j];
                index = j;
            }
        }
        temp = pMas[i];
        pMas[i] = min;
        pMas[index] = temp;
    }
    ShowMas(pMas, masSizeRows);
}



int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int arraySize = 5;

    char** userNamesArray = new char* [arraySize];
    cout << "\n\n Введите имена пяти студентов" << endl <<
        " и программа отсортирует их в порядке возрастания." << endl;

    for (int i = 0; i < arraySize; i++)
    {
        userNamesArray[i] = new char[255];
        cout << " Введите фамилию студента " << i + 1 << ": ";
        cin >> userNamesArray[i];
    }

    cout << endl;
    ShowMas(userNamesArray, arraySize);

    cout << "\n Отсортированный список :"<< endl<<endl;

    Sort(userNamesArray, arraySize); cout << endl;

    delete[]userNamesArray;

    system("pause");
    return 0;
}

