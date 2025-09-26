#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(static_cast<int>(time(0)));

	int year;

	cout << "Year: ";
	cin >> year;

	if (year % 10 != 0 && year%4 == 0 || year%400 == 0) {
		cout << "В цьому році 366 днів";
	}
	else {
		cout << "В цьому році 365 днів";
	}



}
