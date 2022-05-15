#include <iostream>
#include <windows.h>
#include <iomanip>
//#include <random>
#include <string>
#include <time.h>
using namespace std;

// Изменение цвета и фона текста
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


// Доступные цифры для хода
string steps[4] = { "1", "2", "3", "4"};

// Поле
string mtrx[4][4] = {
    {"17", "17", "17", "17"},
    {"17", "17", "17", "17"},
    {"17", "17", "17", "17"},
    {"17", "17", "17", "17"}
};


// Победа?
bool win() {
    int previos_num = atoi(mtrx[0][0].c_str());
    bool is_win = true;
    for (int i = 0; i < 4; i++) {
        for (int j = 1; j < 3; j++) {
            int num = atoi(mtrx[i][j].c_str());
            if (num > previos_num) {
                previos_num = num;
            }
            else {
                is_win = false;
                break;
            }
        }
        if (!is_win) {
            break;
        }
    }

    return is_win;
}

// Индекс пустой ячейки
int index[2] = {};

// Вывод поля
void print_field() {
   system("color F0");
   SetColor(Blue, White);
   cout << endl << setw(32) << " ИГРА ПЯТНАШКИ " << endl;
    SetColor(Red, White);
    cout  << endl;
    cout << "\t---------------------------------" << endl;
    for (int i = 0; i < 4; i++) {
        cout <<'\t' << "|";
        for (int j = 0; j < 4; j++) {
            if (mtrx[i][j] != "0") {
                cout << " " << mtrx[i][j] << "\t|";
            }
            else {
                cout <<setw(8) << " |";
                index[0] = i;
                index[1] = j;
            }
        }
        cout << endl <<"\t---------------------------------" << endl;
    }
    if (!win()) {
        SetColor( Black,White );
        cout << "\n\n Управление пустой клеткой:" << endl;
        cout << " Вверх  - 1" << endl;
        cout << " Вниз   - 2" << endl;
        cout << " Влево  - 3" << endl;
        cout << " Вправо - 3" << endl;
        SetColor(Black, White);
        SetColor(Blue, White);
        cout << " Для выхода нажмите - 5" << endl;
        SetColor(Black, White);
        cout << "\n Сделайте ваш выбор : ";
    }
}

// Проверка, есть ли число в матрице
bool is_the_elem_in_mtrx(string n) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (mtrx[i][j] == n) {
                return true;
            }
        }
    }
    return false;
}

// Движение пустой ячейки
void move(string number) {
    bool is_ok = false;
    for (int i = 0; i < 4; i++) {
        if (steps[i] == number) {
            is_ok = true;
            break;
        }
    }
    if (is_ok) {
        if (number == steps[0]) {
            if (index[0] != 0) {
                string x = mtrx[index[0] - 1][index[1]];
                mtrx[index[0] - 1][index[1]] = "0";
                mtrx[index[0]][index[1]] = x;
            }
        }

        if (number == steps[1]) {
            if (index[0] != 3) {
                string x = mtrx[index[0] + 1][index[1]];
                mtrx[index[0] + 1][index[1]] = "0";
                mtrx[index[0]][index[1]] = x;
            }
        }

        if (number == steps[2]) {
            if (index[1] != 0) {
                string x = mtrx[index[0]][index[1] - 1];
                mtrx[index[0]][index[1] - 1] = "0";
                mtrx[index[0]][index[1]] = x;
            }
        }

        if (number == steps[3]) {
            if (index[1] != 3) {
                string x = mtrx[index[0]][index[1] + 1];
                mtrx[index[0]][index[1] + 1] = "0";
                mtrx[index[0]][index[1]] = x;
            }
        }

 system("cls");
    }
    else 
    {
        system("cls");
        cout << "\n Смотри куда тыкаешь!!!" << endl;
        print_field();
        return;
    }
    print_field();
}

// Генерация поля
void generate_mtrx() {
    srand(time(0));
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            string n;
            do {
                n = to_string(rand() % 16);
            } while (is_the_elem_in_mtrx(n));
            mtrx[i][j] = n;
        }
    }
}


int main() 
{
    setlocale(LC_ALL, "rus");
    
    generate_mtrx();
    print_field();
    while (true) {  // Игровой цикл
        string step;
        cin >> step;
        cout << endl;
        if (step == "5") {
            break;
        }
        move(step);
        if (win()) {
            cout << endl << "\n Поздравляю с победой! " << endl;
            break;
        }
    }
    return 0;
}