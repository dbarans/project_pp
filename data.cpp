#include <iostream>
#include "data.h"
#include "kontrola_liczb.h"
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
	int nr;
	bool blad;
	do
	{
		blad = false;
		cout << "Podaj nr stolika ktory chcesz zajac (1-50)"<<endl;
		nr = kontrola_liczby();
		if (nr > 50 || nr < 1)
		{
			cout << "Bledny numer stolika"<<endl;
			blad = true;
		}
	} 
	while (blad);
	
	return nr;
};
void podaj_adres(string & miejscowosc, string & ulica, int & nr_domu, int & nr_mieszkania)
{
	cout << "Podaj miejscowosc: ";
	cin >> miejscowosc;
	cout << "ulica: ";
	cin >> ulica;
	cout << "numer domu: ";
	nr_domu = kontrola_liczby();
	cout << "numer mieszkania : ";
	nr_mieszkania = kontrola_liczby();
};

void podaj_godzine(int godzina, int minuta, int dzien_tyg, int & godz_dow, int & min_dow)
{
	if ((godzina > 21 || godzina < 10) || (godzina == 21 && minuta > 45))
	{
		cout << "Zamowienie mozna zlozyc tylko w godzinach 10:00-21:45"<<endl;
	}
	else
	{
		do
		{
			cout << "Wybierz godzine dostawy z zakresu " << godzina + 1 << ":" << minuta << " - 22:45" << endl;
			cout << "Godzina: ";
			godz_dow = kontrola_liczby();
			cout << "Minuta: ";
			min_dow = kontrola_liczby();
		} 
		while ((godz_dow < godzina + 1) || (godz_dow == godzina + 1 && min_dow < minuta) || (godz_dow>22 || godz_dow==22 && min_dow > 45) || min_dow > 59);
		cout << "Wybrano godzine: "<< godz_dow<<":"<<min_dow<<endl;
	}
	

}