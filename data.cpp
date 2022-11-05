#include <iostream>
#include "data.h"
#include <string>

using namespace std;

string podaj_imie() {
	string imie;
	cout << "Podaj swoje imie: ";
	cin >> imie;
	return imie;
};
bool podaj_miejsce()
{
	string odp;
	cout << "Czy chcesz zlozyc zamowienie na miejscu czy z dowozem?" << endl;
	while (true) {
		cout << "M - na miejscu, D - z dowozem: ";
		cin >> odp;
		if (odp == "M" || odp == "m")
		{
			return true;
		}
		else if (odp == "D" || odp == "d")
		{
			return false;
		}
		else
		{
			cout << "Podano bledna odpowiedz!" << endl;
		}
	}
};
int nr_stolika() {
	int nr = rand() % 10;
	return nr+1;
};
