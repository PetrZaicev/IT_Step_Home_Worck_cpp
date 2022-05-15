#include <iostream>
using namespace std;


int main()
{
    for (int i = 0; i <= 79; i++) {
        cout << '=';
    }
    cout << "|\tX\t|\tY\t|    X AND Y\t|     X OR Y\t|\tx      |";
    for (int i = 0; i <= 79; i++) {
        cout << '=';
    }
    cout << "|\t0\t|\t0\t|\t0\t|\t0\t|\t1      |";
    cout << "|\t0\t|\t1\t|\t0\t|\t1\t|\t1      |";
    cout << "|\t1\t|\t0\t|\t0\t|\t1\t|\t0      |";
    cout << "|\t1\t|\t1\t|\t1\t|\t1\t|\t0      |";
    for (int i = 0; i <= 79; i++) {
        cout << '=';
    }
    cout << endl << endl;
    cin.get();
    return 0;
}