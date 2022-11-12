#include <iostream>
#include "data.h"
#include "kontrola_liczb.h"
using namespace std;

int nr, nr_domu, nr_mieszkania;
string imie, miejscowosc, ulica;
bool na_miejscu;


int main() {
    imie = podaj_imie();
    na_miejscu = podaj_miejsce();
    if (na_miejscu) {
        nr = nr_stolika();
    }
    else
    {
        podaj_adres(miejscowosc, ulica, nr_domu, nr_mieszkania);
    }

    return 0;
}

