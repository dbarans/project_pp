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
int podaj_miejsce() // zwraca 1 - na miejscu 2 - dowoz
{ 
	string odp;
	cout << "Czy chcesz zlozyc zamowienie na miejscu czy z dowozem?" << endl;
	while (true) {
		cout << "M - na miejscu, D - z dowozem: ";
		cin >> odp;
		if (odp == "M" || odp == "m")
		{
			cout << "na miejscu";
			return 1;
		}
		else if (odp == "D" || odp == "d")
			{
				cout << "dowoz";
				return 2;
			}
			else {
				cout << "Podano bledna odpowiedz!" << endl;
			}
			
		
	} 
}