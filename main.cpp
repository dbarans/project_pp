#include <iostream>
#include "data.h"
#include "kontrola_liczb.h"
#include "czas.h"
using namespace std;

int nr, nr_domu, nr_mieszkania, minuta, godzina, dzien_tyg, godz_dow, min_dow;
string imie, miejscowosc, ulica;
bool na_miejscu;


int main() {
    imie = podaj_imie();
    na_miejscu = podaj_miejsce();
    if (na_miejscu) 
    {
        nr = nr_stolika();
    }
    else
    {
        podaj_adres(miejscowosc, ulica, nr_domu, nr_mieszkania);
        czas(minuta, godzina, dzien_tyg);
        podaj_godzine(godzina, minuta, dzien_tyg, godz_dow, min_dow);
    }


    return 0;
}

