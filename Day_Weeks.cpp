/*?????????, ??????? ??????????? ?????????
????????????? ?????????? ???? ? ?????????? ?????? ??????
? ?????????? ????.*/
#include <iostream>
// ?????????? ???????????? ????
using namespace std;

// ???????? ???????
int main()
{
	// ?????????? ??????????? ????????
	setlocale(LC_ALL, "rus");
	/* ????????? ?????????? Number - ???????? ?????, Week - ??????,
	Day - ????*/
	int Number, Week, Day;
	cout << "\n\n\t" << "??????? ?????????? ????,""\n";
	cout <<"\t" << "????? ?????? ?????????? ?????? ??????" << "\n";
	cout <<"\t" << "? ?????????? ???? : ";
	cin >> Number;
	// ?????????? ??????
	Week = int(Number / 7);
	Day = Number - Week * 7;
	cout  <<"\n\n\t"<< "?????? ?????? : " << Week <<"\t" << " ???? : " << Day << "\n\n";

	return 0;
}
