// ?????? EscapeSequences
#include <iostream>
// ??????????? ???????????? ????, ? ??????? ???? cout<<
using namespace std;


// ??????? ???????
int main()
{
	/*????????? ??????? ????? 4 ???????? ??????? ????
	Escape Sequences ? ????????? ????? ?? ?????????
	??????*/
	cout << "\t\t\t\tEscape Sequences\n";
    // ??????? ?????? ???????
    cout << "\n";
	/* ????? 2 ????????? ??????? ????? \b, ? ??? ?????
	1 ????????? Backspace ????? \n ????????? ????? ??
	????????? ??????
	*/
	cout << "\t\t\n" << "\tNew Line\n";
	// ??????? ?????? ??????
	cout << "\n";
	/* ????? 2 ????????? ??????? ????? \t, ? ??? ????? 
	1 ????????? Horizontal Tab ????? \n ??????????
	????? ?? ????????? ??????
	*/
	cout << "\t\t\\t" << "\tHorizontal tab\n";
	// ??????? ?????? ??????
	cout << "\n";
	/*????? 2 ????????? ??????? ????? \\, ? ??? ?????
    1 ????????? Backslash \
    ????? \n ????????? ????? ?? ????????? ??????
	*/
	cout << "\t\t\\\\" << "\tBackslash \\\n";
	// ??????? ?????? ??????
	cout << "\n";
	/*????? 2 ????????? ??????? ????? \t,
    ? ??? ????? 1 ????????? Double quotation mark "
    ????? \n ????????? ????? ?? ????????? ??????
    */
	cout << "\t\t\"" << "\tDouble quotation mark \"\n";
	// ??????? ?????? ??????
	cout << "\n";
	/*????? 2 ????????? ??????? ????? \',
    ? ??? ????? 1 ????????? Single quotation mark '
    ????? \n ????????? ????? ?? ????????? ??????
	*/
	cout << "\t\t\'" << "\tSingle quotation mark \'\n";
	// ??????? ?????? ??????
	cout << "\n";
	return 0;

}