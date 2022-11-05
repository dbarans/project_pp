#include <iostream>
#include "data.h"
#include "kontrola_liczb.h"
using namespace std;
int nr;
string imie;
bool na_miejscu;

int main() {
    imie = podaj_imie();
    na_miejscu = podaj_miejsce();
    if (na_miejscu) {
        nr = nr_stolika();
    }
    else
    {

    }
    
    return 0;
}

