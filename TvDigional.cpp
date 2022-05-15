// Расчет диоганали ТВ из дюймов в см.
#include <iostream>
// Определние пространства имен, в котором 
// есть cout<<
using namespace std;

// Главная функция
int main()
{
	// Обьявляем численную констатнту диоганали ТВ
	const int TvDioganal = 42;
	// Обьявляем численную константу дюйма в см
	const float OneInch = 2.54;
	// Обьявляем переменную - диоганаль в сантиметрах
	float DioganalSm;
	// Вычесляем значение переменной DigionalSM
	DioganalSm = TvDioganal * OneInch;
	// Выводим значение диоганали ТВ в см на экран
	cout <<"\n\n\t" "Dioganal Tv in centimeters:" << DioganalSm << "\n";
	return 0;
}   



