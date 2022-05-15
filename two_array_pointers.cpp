/*»спользу€ два указател€ на массив целых
чисел, скопировать один массив в другой. »спользовать
в программе арифметику указателей дл€ продвижени€
по массиву, а также оператор разыменовани€.*/

#include <iostream>
#include <windows.h>
using namespace std;

void show_array( int arr[], const size_t &arr_size )
{
    int *arr_end = arr + arr_size;
    cout << " {";
        while( arr != arr_end )
           cout << *arr++ << " ";
    cout << "}";
}

int main ()
{
    setlocale(LC_ALL, "rus");

    const int size = 10;
    int arr1 [size] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
    int arr2 [size] = {};

    cout << "\n »спользу€ два указател€ на массив целых чисел, скопировать один массив в другой." << endl;

    cout << "\n ѕервый массив с целыми числами :";
    show_array( arr1, size );
    cout << "\n ¬торой массив (пустой)         :";
    show_array( arr2, size );
 
    int *ptr_arr1 = arr1;
    int *ptr_arr2 = arr2;
    int *arr_end = ptr_arr1 + size;
           for( ; ptr_arr1 != arr_end; ++ptr_arr1, ++ptr_arr2 )
             *ptr_arr2 = *ptr_arr1;
 
    cout << "\n\n ѕервый массив с целыми числами :";
    show_array( arr1, size );
    cout << "\n ¬торой массив ( скопированный) :";
    show_array( arr2, size );
    cout << endl << endl;
 
    /*system ("PAUSE");*/
    return 0;
}