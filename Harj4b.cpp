/***********************************************
* Ohjelman nimi: Harjoitus 4b
* Tekij‰: Juho Nissi
*Lyhyt kuvaus:
*	Ks. ohjelmakoodia: harj4 (omat esimerkit)
*	a) Kirjoita, tallenna ja suorita ym. ohjelma.
*	b) Kommentoi ylla olevan esimerkin kaikki rivit (mit‰ rivill‰ tapahtuu).
*	c) Muuta vakioden nimet niin, ett‰
*	MAX => MINIMI
*	max => MAKSIMI
* Versio: 1.0
* PVM: 10.9.2014
************************************************/

#include <iostream>
using namespace std;

// vakioiden m‰‰rittely
#define MAX 10 // vanha tapa
const int max = 20; // uusi suositeltava tapa

// julkisten muuttujien esittely
int summa;

// esitell‰‰n aliohjelmat
void laske(int, int);

void main() // p‰‰ohjelma alkaa t‰st‰
{ // alkava lohkosulku
	// paikallisten muuttujien m‰‰rittely
	int luku1 = 2;
	int luku2;

	cout << "Syota luku: ";
	cin >> luku2;
	
	laske(luku1, luku2); // aliohjelman kutsu
	
	if (summa < MAX)
		cout << "Summa on pienempi kuin " << MAX;
	if (summa < max)
		cout << "\nSumma on pienempi kuin " << max<< endl;

} // lopettava lohkosulku


void laske(int eka, int toka) // Aliohjelman m‰‰rittely
{
	summa = eka + toka;
}