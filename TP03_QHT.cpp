/**********************************************
AUTEUR: Quoc Huan Tran
Fichier: TP 3.cpp
Description: TP 3 - Maîtrise des instructions if et if-else
***********************************************/

#include <iomanip>
#include <iostream>
#include <conio.h>
using namespace std;

void main(void)
{
	char  DeviseInitiale, DeviseConversion;
	const float
		DOLLAR = 1.0193,
		EURO = 1.3581,
		BAHT = 0.03311,
		ROUPIE = 0.01971,
		COURONNE = 0.1826;
	float MontantInitial, MontantCanadien, MontantConverti;
	
	//MontantConverti = MontantCanadien / taux de la devisechoisie
	//MontantCanadian = MontantInitial * taux de la devise choisie

	

	
	cout << "Entrez le montant à convertir : ";
	cin >> MontantInitial;

	cout << "\nEntrez la devise de ce montant : "
		<< "\n\t\t$ -> Dollar(Canada)"
		<< "\n\t\tD -> Dollar(Etat-Unis)"
		<< "\n\t\tE -> Euro (Union Europeenne)"
		<< "\n\t\tB -> Baht (Thailande)"
		<< "\n\t\tR -> Roupie (Inde)"
		<< "\n\t\tC -> Couronne (Danemark)" << endl
		<< "\n\t" << "Votre choix : ";
	cin >> DeviseInitiale;
	DeviseInitiale = toupper(DeviseInitiale);

	if (DeviseInitiale == 'D')
		MontantCanadien = MontantInitial * DOLLAR ;
	else
	{
		if (DeviseInitiale == 'E')
			MontantCanadien = MontantInitial * EURO;
		else
		{
			if (DeviseInitiale == 'B')
				MontantCanadien = MontantInitial * BAHT;
			else
			{
				if (DeviseInitiale == 'R')
					MontantCanadien = MontantInitial * ROUPIE;
				else
				{
					if (DeviseInitiale == 'C')
						MontantCanadien = MontantInitial * COURONNE;
					else
						MontantCanadien = MontantInitial;
				
				
				}

			}
		}
	}

	cout << "\nEntrez le devise dans laquelle on fera la conversion : "
		<< "\n\t\t$ -> Dollar(Canada)"
		<< "\n\t\tD -> Dollar(Etat-Unis)"
		<< "\n\t\tE -> Euro (Union Europeenne)"
		<< "\n\t\tB -> Baht (Thailande)"
		<< "\n\t\tR -> Roupie (Inde)"
		<< "\n\t\tC -> Couronne (Danemark)" << endl
		<< "\n\t" << "Votre choix : ";;
	cin >> DeviseConversion;
	DeviseConversion = toupper(DeviseConversion);

	if (DeviseConversion == 'D')
		MontantConverti = MontantCanadien / DOLLAR;
	else
	{
		if (DeviseConversion == 'E')
			MontantConverti = MontantCanadien / EURO;
		else 
		{
			if (DeviseConversion == 'B')
				MontantConverti = MontantCanadien / BAHT;
			else
			{
				if (DeviseConversion == 'R')
					MontantConverti = MontantCanadien / ROUPIE;
				else
				{
					if (DeviseConversion == 'C')
						MontantConverti = MontantCanadien / COURONNE;
					else
						MontantConverti = MontantCanadien;
				}
			}
		}
	}

	cout << "\n\t\tMontant Initial : \t" << right << fixed << setprecision(2) << MontantInitial << DeviseInitiale << endl
		<< "\t\tMontant Converti : \t" << right << fixed << setprecision(2) << MontantConverti << DeviseConversion << endl;
	
	
	_getch();
}