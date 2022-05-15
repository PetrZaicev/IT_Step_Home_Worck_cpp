#include <iostream> 
#include <windows.h>
#include <algorithm> // ��� std::swap. � C++11 ����������� ��������� <utility>
using namespace std;

int main()
{
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));
    int const arSize = 10;
    int const numberLimit = 100;
    int bubbleArray[arSize];
    int buff;
    int count = 0;

   /* const int leght = 9;
    int array[leght] = { 7, 5, 6, 4, 9, 8, 2, 1, 3 };*/
    cout << "\n ��������� ������t: " << endl;
    //��������� ������ �� ��������� �����
    for (int i = 0; i < arSize; i++)
    {
        bubbleArray[i] = rand() % (numberLimit + 1);
        cout << " ArrayStart[" << i << "] = " << bubbleArray[i] << endl;
    }
    cout << endl;
    cout << " ���������������� ������:" << endl;
    for (int i = 0; i < arSize; i++)
    {
        int smallerindex = i;

        for (int currentindex = 0; currentindex < arSize; ++currentindex) {
            if (bubbleArray[smallerindex] < bubbleArray[currentindex])
                std::swap(bubbleArray[smallerindex], bubbleArray[currentindex]);
        }
    }
    for (int i = 0; i < arSize; ++i) {
        cout << " ArrayFinish["<< i << "] = " << bubbleArray[i] << endl;
    }

    return 0;
}