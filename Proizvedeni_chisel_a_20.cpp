/*????? ???????????? ???? ????? ????? ?? a ?? 20 (????????
a ???????? ? ??????????: 1 <=a <= 20).*/
#include <iostream>
// ???????????? ????
using namespace std;

// ???????? ???????
int main()
{
	setlocale(LC_ALL, "rus");
	// ????????? ??????????
	int a,i, p;
	p = 1;
	// ??????? ?? ?????
	cout << "\n ????? ???????????? ???? ????? ????? ?? a ?? 20" << endl;
	cout << " (????????a ???????? ? ?????????? : 1 <= a <= 20)." << endl;
	cout << "\n ??????? ???? ????? - ";
	// ?????????? ?????? ?????
	cin >> a;
	// ?????????? ??????????
	for (i = a ; i <= 20 ; i++)
	{
		p = p * i;
	}
	// ??????? ????????? ?? ?????
	cout << "\n ???????????? ???? ????? ????? = "<<p << endl;
	return 0;
}