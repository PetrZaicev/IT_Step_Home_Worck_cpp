/*????????? ??????? ??????? ?? ????? ???????
????????? ?? k, ??? k ? ????? ????????. ????????, ??? 7-??
????????:*/
#include <iostream>
// ???????????? ????
using namespace std;

// ???????? ???????
int main()
{
	setlocale(LC_ALL, "rus");
	// ???????? ??????????
	int a;
	// ??????? ????? ?? ?????
	cout << "\n ??????? ?????????" << endl;
	cout << " ??????? ????? ?? ??????? ????? ???????? ";
	cin >> a;
	for (int i = 1; i <= 10; i++)
	{
		cout <<"\n"<< a << "*" << i << "=" << a * i << endl;
	}
	return 0;
}
