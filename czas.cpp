#include<iostream>
#include<ctime>
#include "czas.h"
using namespace std;

void czas(int& minuta, int& godzina, int& dzien_tyg)
{
	time_t teraz;
	struct tm czas;

	teraz = time(NULL);
	#pragma warning(suppress : 4996)
	czas = *localtime(&teraz);
	minuta = czas.tm_min;
	godzina = czas.tm_hour;
	dzien_tyg = czas.tm_wday;
}