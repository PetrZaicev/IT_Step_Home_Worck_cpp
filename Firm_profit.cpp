/*???????????? ?????? ??????? ????? ?? ??? (12 ???????).
????? ???????????? ?????? ???????? (????????, 3 ? 6 ? ?????
????? 3-? ? 6-? ???????). ?????????? ?????????? ?????,
? ??????? ??????? ???? ??????????? ? ?????, ? ???????
??????? ???? ?????????? ? ?????? ?????????? ?????????.*/
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int m1;   // ????? ?????? ???????
    int  m2;  // ????? ????? ???????
    int imax; // ???????????? ???????
    int imin; // ???????????? ???????
    const int n = 12; // ?????????? ???????
    int mass[n];

    cout << "\n ???????????? ?????? ??????? ????? ?? ??? (12 ???????)." << endl;
    cout << " ????? ???????????? ?????? ???????? (????????, 3 ? 6 ? ?????" << endl;
    cout << " ????? 3-? ? 6-? ???????). ?????????? ?????????? ?????," << endl;
    cout << "? ??????? ??????? ???? ??????????? ? ?????, ? ???????" << endl;
    cout << " ??????? ???? ?????????? ? ?????? ?????????? ?????????."<<endl << endl;
    cout << "\n ???????? ??????? ????? ?? ??? : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << " ??????? ????? ??  " << i + 1 << " ????? -  ";
        cin >> mass[i];
    }

    cout << "\n ??????? ????? ?????? ???????? ??????? - ";
    cin >> m1;
    cout << " ??????? ????? ????????? ???????? ??????? - ";
    cin >> m2;

    imin = m1 - 1;
    imax = m1 - 1;
    for (int i = m1; i < m2; i++)
    {
        if (mass[i] > mass[imax]) imax = i;
        if (mass[i] < mass[imin]) imin = i;
    }

    cout << " ???????????? ??????? " << imax + 1<<" ?????" << endl;
    cout << " ??????????? ??????? " << imin + 1<<" ?????" << endl<<endl;

    system("pause");
    return 0;
}