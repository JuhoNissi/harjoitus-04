/***********************************************
* Ohjelman nimi: Harjoitus 4a
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
#define MAX 10
const int max = 20;
int summa;
void laske(int, int);
void main()
{
	int luku1 = 2;
	int luku2;
	cout << "Syota luku: ";
	cin >> luku2;
	laske(luku1, luku2);
	if (summa < MAX)
		cout << "Summa on pienempi kuin " << MAX;
	if (summa < max)
		cout << "\nSumma on pienempi kuin " << max<< endl;
}
void laske(int eka, int toka)
{
	summa = eka + toka;
}