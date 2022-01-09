/**********************************************
AUTEUR: Quoc Huan Tran
Fichier: TP2.cpp
Description: Problème 2a et Problème 2b
***********************************************/

#include <iomanip>
#include <iostream>
#include <conio.h>
#include <windows.h>
#include "C:\Users\huant\Desktop\Project\TP 2\cvm.h"
using namespace std;
void main(void)

////Probleme 2a
//{
//	int NbKwHres, NbJour;
//	string NomClient, PrenomClient;
//	float PrixKw, Redevance, MontantTps, MontantTvq, TotalFacture;
//
//	const float TPS = 0.05;
//	const float TVQ = 0.09975;
//	const float TARIF_JOUR = 0.4064;
//	const float TARIF_KWH = 0.0608;
//	
//	NbKwHres = 1900;
//	NbJour = 61;
//	NomClient = "LeBranche";
//	PrenomClient = "Yvon";
//	
//	PrixKw = NbKwHres * TARIF_KWH;
//	Redevance = NbJour * TARIF_JOUR;
//	MontantTps = (PrixKw + Redevance) * TPS;
//	MontantTvq = (PrixKw + Redevance) * TVQ;
//	TotalFacture = PrixKw + Redevance + MontantTps + MontantTvq;
//
//	cout << "Facture electricite de " << NomClient << ' ' << PrenomClient << '\n'
//	<< "Pour une consommation de " << NbKwHres << " KWh sur " << NbJour << " jours:" << "\n\n";
//	
//	cout << "Redevance: " << "\t\t" << '$' << right << fixed << setprecision(2)<<setw(7) << Redevance << '\n';
//	cout << "Consommation: " << "\t\t" << '$' << setw(7) << PrixKw << '\n';
//	cout << "TPS: " << "\t\t\t" << '$' << setw(7) << MontantTps << '\n';
//	cout << "Tvq: " << "\t\t\t" << '$' << setw(7) << MontantTvq << '\n';
//	cout << "\t\t\t" << "---------"<< '\n';
//	cout << "Total: " << "\t\t\t" << '$' << setw(7) << TotalFacture;
//	_getch();
//}



//Probleme 2b
{
	int NbKwHres, NbJour;
	string NomClient, PrenomClient;
	const float TPS = 0.05, TVQ = 0.09975, TARIF_JOUR = 0.39 ,TARIF_1 = 0.0474, TARIF_2 = 0.0597;
	float Prix_1, Prix_2, Redevance, MontantTps, MontantTvq, TotalFacture;

	cout << "Quel est votre pr\202nom : "; 
	getline(cin, PrenomClient);
	cout << "Quel est votre nom : ";
	getline(cin, NomClient);

	cout << "\n\n" << "Quel est votre consommation en kWh : ";
	cin >> NbKwHres; 
	cout << "Sur combien de jour : ";
	cin >> NbJour;

	clrscr();

	if (NbKwHres > 30 * NbJour)
	{
		Prix_1 = TARIF_1 * (30 * NbJour);
		Prix_2 = TARIF_2 * (NbKwHres - (30 * NbJour));
	}
	else
	{
		Prix_1 = NbKwHres * TARIF_1;
		Prix_2 = 0;
	}

	Redevance = NbJour * TARIF_JOUR;
	MontantTps = (Prix_1 + Prix_2 + Redevance) * TPS;
	MontantTvq = (Prix_1 + Prix_2 + Redevance) * TVQ;
	TotalFacture = Prix_1 + Prix_2 + Redevance + MontantTps + MontantTvq;
	
	cout << "Facture \202l\202ctricit\202 de : " << PrenomClient << ' ' << NomClient << "\n\n"
	<< "Pour une consommation de " << NbKwHres << " KWh sur " << NbJour << " jours:" << "\n\n";

	cout << "Redevance: " << "\t\t\t\t" << '$' << right << fixed << setprecision(2) << setw(7) << Redevance << '\n'
		<< "Consommation: " << "\n\t"
		<< "premier 30 kWh par jour" << "\t\t" << '$' << setw(7) << Prix_1 << "\n\t"
		<< "kilowattheures suppl\202mentaire" << '\t' << '$' << setw(7) << Prix_2 << '\n'
		<< "TPS: " << "\t\t\t\t\t" << '$' << setw(7) << MontantTps << '\n'
		<< "Tvq: " << "\t\t\t\t\t" << '$' << setw(7) << MontantTvq << '\n'
		<< "\t\t\t\t\t" << "---------" << '\n'
		<< "Total: " << "\t\t\t\t\t" << '$' << setw(7) << TotalFacture;


	_getch();

	MessageBoxA(NULL, "AU REVOIR!", "Fin du programme", MB_OK | MB_ICONINFORMATION);


}