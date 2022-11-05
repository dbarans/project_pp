#include <iostream>
#include "data.h"
#include "kontrola_liczb.h"
using namespace std;
int aa, nr;

int main() {
    string imie = podaj_imie();
    bool na_miejscu = podaj_miejsce();
    if (na_miejscu) {
        nr = nr_stolika();
    }
    else
    {

    }
    
    cout << aa;
    return 0;
}

