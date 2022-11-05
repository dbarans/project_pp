#include <iostream>
#include "kontrola_liczb.h"
using namespace std;

int kontrola_liczby() {
	int liczba;
	bool blad = false;
	do 
	{
		cin >> liczba;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			blad = true;
			cout << "Podaj liczbe: ";
		}
		else
		{
			return liczba;
		}
	} while (blad);
}