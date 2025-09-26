#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(static_cast<int>(time(0)));

	//{------------------------------------------------------------------

	//int year;

	//cout << "Year: ";
	//cin >> year;

	//if (year % 10 != 0 && year%4 == 0 || year%400 == 0) {
	//	cout << "В цьому році 366 днів";
	//}
	//else {
	//	cout << "В цьому році 365 днів";
	//}

//------------------------------------------------------------------}

//{------------------------------------------------------------------

	//int color, BackGround;

	//cout << "Цвет(1 - Red, 2 - Green, 3 - Yellow): ";
	//cin >> color;
	//cout << "Фон: ";
	//cin >> BackGround;

	//if (color == 1) {
	//	cout << "\033[31m";
	//}else if (color == 2) {
	//	cout << "\033[32m";
	//}
	//else if (color == 3) {
	//	cout << "\033[33m";
	//}


	//if (BackGround == 1) {
	//	cout << "\033[41m";
	//}
	//if (BackGround == 2) {
	//	cout << "\033[42m";
	//}
	//if (BackGround == 3) {
	//	cout << "\033[43m";
	//}
	//
	//cout << "Hi world\033[0m";

//------------------------------------------------------------------}


//{------------------------------------------------------------------

	//char simvol;
	//int sizeRow = 0, sizeCol = 0, color;

	//cout << "simvol: ";
	//cin >> simvol;

	//while (sizeRow < 2) {
	//	system("cls");
	//	cout << "Row: ";
	//	cin >> sizeRow;
	//}
	//while (sizeCol < 2) {
	//	system("cls");
	//	cout << "Col: ";
	//	cin >> sizeCol;
	//}

	//system("cls");
	//cout << "Color(1 - Red, 2 - Green, 3 - Yellow): ";
	//cin >> color;
	//system("cls");

	//if (color == 1) {
	//	cout << "\033[31m";
	//}
	//else if (color == 2) {
	//	cout << "\033[32m";
	//}
	//else if (color == 3) {
	//	cout << "\033[33m";
	//}

	//for (int i = 0; i < sizeCol; i++) {
	//	for (int j = 0; j < sizeRow; j++) {
	//		if (i == 0 || i == sizeCol-1) {
	//			cout << simvol;
	//		}
	//		else if (j == 0 || j == sizeRow-1) {
	//			cout << simvol;
	//		}
	//		else {
	//			cout << " ";
	//		}
	//	}
	//	cout << endl;
	//}
	//cout << "\033[0m";

//------------------------------------------------------------------}

//{------------------------------------------------------------------

	
	const int size = 5;
	int mas[size];
	int Max;

	for (int i = 0; i < size; i++) {
		mas[i] = rand() % 100;
		cout << mas[i] << " ";
	}

	Max = mas[1];

	for (int i = 0; i < size; i++) {
		if (mas[i] > Max) {
			Max = mas[i];
		}
	}

	cout << endl << Max;

	

//------------------------------------------------------------------}

}
