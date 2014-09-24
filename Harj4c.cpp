/***********************************************
* Ohjelman nimi: Harjoitus 4c
* Tekijä: Juho Nissi
*Lyhyt kuvaus:
*	Ks. ohjelmakoodia: harj4 (omat esimerkit)
*	a) Kirjoita, tallenna ja suorita ym. ohjelma.
*	b) Kommentoi ylla olevan esimerkin kaikki rivit (mitä rivillä tapahtuu).
*	c) Muuta vakioden nimet niin, että
*	MAX => MINIMI
*	max => MAKSIMI
* Versio: 1.0
* PVM: 10.9.2014
************************************************/
#include <iostream>
using namespace std;
#define MINIMI 10
const int MAKSIMI = 20;
int summa;
void laske(int, int);
void main()
{
	int luku1 = 2;
	int luku2;
	cout << "Syota luku: ";
	cin >> luku2;
	laske(luku1, luku2);
	if (summa < MINIMI)
		cout << "Summa on pienempi kuin "<< MINIMI <<endl;
	if (summa > MAKSIMI)
		cout << "\nSumma on suurempi kuin "<< MAKSIMI<< endl;
	if (summa > MINIMI)
		if (summa < MAKSIMI)
		cout << "\nSumma on "<<MINIMI << " ja "<<MAKSIMI <<" valissa\n";

}
void laske(int eka, int toka)
{
	summa = eka + toka;
}