#include <iostream>
#include "data.h"
#include <string>
#include "kontrola_liczb.h"

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
	int nr;
	bool blad;
	do
	{
		blad = false;
		cout << "Podaj nr stolika ktory chcesz zajac (1-50)"<<endl;
		nr = kontrola();
		if (nr > 50 || nr < 1)
		{
			cout << "Bledny numer stolika";
			blad = true;
		}
	} 
	while (blad);
	

	
	return nr;
};