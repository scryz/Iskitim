
#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int year;
	cout << "Введите год: ";
	cin >> year;
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0)
				cout << "Год вискосный";
			else
				cout << "Год не вискосный";
		}
		else
			cout << "Год вискосный";
	}
	else
		cout << "Год не вискосный"; 
	return 0;
}