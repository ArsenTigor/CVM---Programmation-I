/**********************************************
AUTEUR: Quoc Huan Tran
Fichier: TP05_QHT.cpp
Description: TP5
***********************************************/

#include <iomanip>
#include <iostream>
#include <conio.h>

using namespace std;

void main(void)
{

	int D1, D2, D3, D4, D5, D6, NbLanc, Compteur, Jet;
	D1 = 0; D2 = 0; D3 = 0; D4 = 0; D5 = 0; D6 = 0, Compteur = 1;

	cout << "Combien de lancement de d\202?: ";
	cin >> NbLanc;

	while (Compteur <= NbLanc)
	{
		Jet = rand() % 6 * 1;
		if (Jet == 1)
			D1++;
		else if (Jet == 2)
			D2++;
		else if (Jet == 3)
			D3++;
		else if (Jet == 4)
			D4++;
		else if (Jet == 5)
			D5++;
		else
			D6++;
		Compteur++;
	}
	
	cout << fixed << right << "Nombre des resultats des jets"
		<< "\nD1 ->\t" << D1
		<< "\nD2 ->\t" << D2
		<< "\nD3 ->\t" << D3
		<< "\nD4 ->\t" << D4
		<< "\nD5 ->\t" << D5
		<< "\nD6 ->\t" << D6;

	_getch();
}