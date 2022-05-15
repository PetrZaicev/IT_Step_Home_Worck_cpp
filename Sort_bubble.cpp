/*
Ќаписать программу, котора€ сравнивает число перестановок элементов при использовании сортировки Ђпузырькомї 
(усовершенствованна€ верси€ задани € 2) и методом
выбора. ¬ыполнить ее тестирование на разных 10 массивах,
содержащих 1000 случайных элементов, вычислить среднее
число перестановок дл€ каждого метода после тестировани€.
*/

#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));
    int const arSize = 1000;
    int const numberLimit = 1000;
    int Array[arSize];
    int buff;
    int count = 0;
    int temp = 0, srB=0,srV=0;
   
    for (int k = 1; k < 11; k++)
    {
        cout << " ‘ормируем массив: "<<k << endl;
        //формируем массив из случайных чисел
        for (int i = 0; i < arSize; i++)
        {
            Array[i] = rand() % (numberLimit + 1);
            cout << " Ќачальный массив [" << i << "] є"<<k<<" = " << Array[i] << endl;
        }

        for (int i = 0; i < arSize - 1; i++)
        {
            count = 0;
            {
                for (int j = 1; j < arSize - i; j++)
                {
                    if (Array[j] < Array[j - 1])
                    {
                        buff = Array[j];
                        Array[j] = Array[j - 1];
                        Array[j - 1] = buff;
                        count++;
                        srB = srB + 1;
                    }

                }
                //если замен не было, то выходим из цикла
                if (count == 0)
                {
                    break;
                }
            }
        }

        cout << " ќтсортированный массив методом пузырька: " << endl;
        //выводим отсортированный массив
        for (int i = 0; i < arSize; i++)
        {
            cout << "ќтсортированный массив -пузырьком[" << i << "] є" << k << " = " << Array[i] << endl;

        }
        cout << " ќтстортированный массив методом выбора:" << endl;
        for (int i = 0; i < arSize; i++)
        {
            int smallerindex = i;

            for (int currentindex = 0; currentindex < arSize; ++currentindex)
            {
                if (Array[smallerindex] < Array[currentindex])
                {
                    swap(Array[smallerindex], Array[currentindex]);
                    srV = srV + 1;
                }
            }
        }
        for (int i = 0; i < arSize; ++i) {
            cout << " ќтсортированный массив методом выбора [" << i << "] є" << k << " = " << Array[i] << endl;

        }
        cout <<" среднее число перестановок пузырьковым методом " << srB / 2 << endl;
        cout <<" среднее число перестановок методом выбора " << srV / 2 << endl;
    }
    return 0;
}