/*Дана шахматная доска размером 8×8 и шахматный конь. Программа должна запросить у пользователя
координаты клетки поля и поставить туда коня. Задача
программы найти и вывести путь коня, при котором он
обойдет все клетки доски, становясь в каждую клетку
только один раз. (*/
#include <iostream>
#include <windows.h>
#include <iomanip>
#include "stdlib.h"
using namespace std;

enum ConsoleColor
{
    Black = 0,
    Blue = 1,
    Green = 2,
    Cyan = 3,
    Red = 4,
    Magenta = 5,
    Brown = 6,
    LightGray = 7,
    DarkGray = 8,
    LightBlue = 9,
    LightGreen = 10,
    LightCyan = 11,
    LightRed = 12,
    LightMagenta = 13,
    Yellow = 14,
    White = 15
};

void SetColor(ConsoleColor text, ConsoleColor background)
{
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

const int N = 8;

void Knight(int[][N], int, int, int);

int moveX[8] = { -2,-1,1,2,2,1,-1,-2 };
int moveY[8] = { -1,-2,2,1,-1,-2,2,1 };
int X[N * N];
int Y[N * N];

int main() 
{
    setlocale(LC_ALL, "rus");
    system("Color f0");
    SetColor(Yellow, Black);
    cout << "\n\n\n\t Дана шахматная доска размером 8х8 и шахматный конь. Программа должна запросить у пользователя " << endl;
    cout << "\t координаты клетки поля и поставить туда коня. Задача программы найти и вывести путь коня,     " << endl;
    cout << "\t при котором он обойдет все клетки доски, становясь в каждую клетку только один раз.           ";
    cout<< endl << endl << endl;
    SetColor(Black, White);
    system("pause");

    system("cls");

    int Array[N][N];

    int k = 0;
    int StepPointX, StepPointY;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            Array[i][j] = 0;

    cout << "\n Первая точка по горизонтали(1-8): ";
    cin >> StepPointX;
    system("cls");
    cout << "\n Первая точка по вертикали(1-8): ";
    cin >> StepPointY;
    cout << endl;

    Knight(Array, StepPointX - 1, StepPointY - 1, k);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout <<"\t" << Array[i][j] << " ";
        cout << "\n\n\n";
    }
    system("pause");
    return 0;
}

void Knight(int D[][N], int sx, int sy, int k) {

    int sxn, syn;
    k++;
    D[sy][sx] = k;
    if (k >= N * N) return;

    for (int i = 0; i < 8; i++) {
        sxn = sx + moveX[i];
        syn = sy + moveY[i];

        if (sxn >= 0 && sxn < N && syn >= 0 && syn < N && D[syn][sxn] == 0) {
            sx = sxn;
            sy = syn;
            X[k - 1] = sx;
            Y[k - 1] = sy;
            Knight(D, sx, sy, k);
        }
    }
}