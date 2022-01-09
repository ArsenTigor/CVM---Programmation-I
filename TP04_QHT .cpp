/**********************************************
AUTEUR: Quoc Huan Tran
Fichier: TP04_QHT.cpp
Description:Création d’un programme comportant des sélections simples et des sélections multiples (obligatoire)
***********************************************/

#include <iomanip>
#include <iostream>
#include <conio.h>
using namespace std;

void main(void)
{
	//Étape 1 Calcul du nombre de feuilles à imprimer (recto et recto-verso)
	
	int NbOri, NbExe, NbImpR, NbImpRV, Reste;
	char FormatPapier, TypeImpression, TypePapier, Aperforer, TypeFaconnage;
	const float PRIX8X11R = 31, PRIX8X11RV = 60, PRIX11X17R = 61, PRIX11X17RV = 100, PRIX_PAPIER1 = 20.50,
		PRIX_PAPIER2 = 67.34, PRIX_PAPIER3 = 122.94, PRIX_BROCHER = 0.03, PRIX_ENCOLLER = 0.6, PRIX_TABLETTE = 0.35,
		PRIX_DOS_CHEVAL = 0.10, PRIX_PERFORER = 3, TPS = 0.05, TVQ = 0.09975;
	float CoutR, CoutRV, CoutPapier, CoutFaconnage, CoutProduction, CoutTotal;

	cout << "Entrez les donn\202es:"
		<< "\nNombre d'originaux: ";
	cin >> NbOri;
	cout << "Nombre d'exemplaires: ";
	cin >> NbExe;
	cout << "Format du papier: "
		<<"\n\t1 -> 8\253x11" << "\n\t2 -> 8\253x14" <<"\n\t3 -> 11x17" << endl;
	cin >> FormatPapier;
	cout << "Type d'impression: " << "\n\tR -> Recto" << "\n\tV -> Recto-verso" << endl;
	cin >> TypeImpression;
	TypeImpression = toupper(TypeImpression);

	//Calcul de NbImpR et NbImpRV
	if (FormatPapier == '1' || FormatPapier == '2')
	{	
		switch (TypeImpression)
		{
		case 'R':
			NbImpR = NbOri * NbExe;
			NbImpRV = 0;
			break;
		
		case 'V':
			if (NbOri % 2 == 1)
			{
				NbImpR = NbExe;
				NbImpRV = (NbOri - 1)*NbExe / 2;
			}
			else
			{
				NbImpR = 0;
				NbImpRV = NbOri*NbExe / 2;
			}
		}
	}
	else
	{
		switch (TypeImpression)
		{
		case 'R':
			if (NbOri % 2 == 1)
			{
				NbOri = NbOri + 1;
				NbImpR = NbOri * NbExe / 2;
				NbImpRV = 0;
			}
			else
			{
				NbImpR = NbOri * NbExe / 2;
				NbImpRV = 0;
			}
			break;

		case 'V':
			Reste = NbOri % 4;
			if (Reste == 0)
			{
				NbImpR = 0;
				NbImpRV = NbOri * NbExe / 4;
			}
			else if (Reste == 1 || Reste == 2)
			{
				NbImpR = NbExe;
				NbImpRV = (NbOri - Reste) * NbExe / 4;
			}
			else
			{
				NbImpR = 0;
				NbImpRV = (NbOri + 1) * NbExe / 4;
			}
		}
	}

	//Étape 2: calcul des coûts de main-d'oeuvre l'impression(recto et recto - verso)
	//Calculer CoutR et Calculer CoutRV
	
	if (FormatPapier == '1' || FormatPapier == '2')
		switch(TypeImpression)
		{
		case 'R' :
			CoutR = PRIX8X11R * NbImpR / 1000;
			CoutRV = 0;
			break;
		case 'V' :
			CoutR = PRIX8X11R * NbImpR / 1000;
			CoutRV = PRIX8X11RV * NbImpRV / 1000;
		}
	else
		switch (TypeImpression)
		{
		case 'R':
			CoutR = PRIX11X17R * NbImpR / 1000;
			CoutRV = 0;
			break;
		case 'V':
			CoutR = PRIX11X17R * NbImpR / 1000;
			CoutRV = PRIX11X17RV * NbImpRV / 1000;
		}

	//Étape 3: Calcul des coûts du papier
	cout << "Type de papier :"
		<< "\n\t1 -> Repro + gris" << "\n\t2 -> Rolland \202volution glacier" << "\n\t3 -> Wausau Royal, fibre texte \202tain" << endl;
	cin >> TypePapier;
	
	if (FormatPapier == '1')
	{
		if (TypePapier == '1')
			CoutPapier = (PRIX_PAPIER1 * (NbImpR + NbImpRV) / 1000) / 2;
		else if (TypePapier == '2')
			CoutPapier = (PRIX_PAPIER2 * (NbImpR + NbImpRV) / 1000) / 2;
		else
			CoutPapier = (PRIX_PAPIER3 * (NbImpR + NbImpRV) / 1000) / 2;
	}
	else
	{
		if (TypePapier == '1')
			CoutPapier = PRIX_PAPIER1 * (NbImpR + NbImpRV) / 1000;
		else if (TypePapier == '2')
			CoutPapier = PRIX_PAPIER2 * (NbImpR + NbImpRV) / 1000;
		else
			CoutPapier = PRIX_PAPIER3 * (NbImpR + NbImpRV) / 1000;
	}

	//Étape 4: Calculer les coûts du façonnage et de la perforation
	cout << "Perforation : " <<"\n\tO -> Oui" << "\n\tN -> Non" << endl;
	cin >> Aperforer;
	cout << "Type de faconnage :" << "\n\t1 -> Broche en coin (tous)"
		<< "\n\t2 -> Encoller avec ruban (8\253x11 ou 8\253x14)" << "\n\t3 -> Tablette (tous)"
		<< "\n\t4 -> Broche \205 dos de cheval (11x17 seulement)" << "\n\t5 -> Aucun" << endl;
	cin >> TypeFaconnage;
	Aperforer = toupper(Aperforer);

	if (FormatPapier == '1' || FormatPapier == '2')
	{
		if (TypeFaconnage == '1')
			CoutFaconnage = PRIX_BROCHER * NbExe;
		else if (TypeFaconnage == '2')
			CoutFaconnage = PRIX_ENCOLLER * NbExe;
		else if (TypeFaconnage == '3')
			CoutFaconnage = PRIX_TABLETTE * NbExe;
		else
			CoutFaconnage = 0;
	}
	else
	{
		if (TypeFaconnage == '1')
			CoutFaconnage = PRIX_BROCHER * NbExe;
		else if (TypeFaconnage == '2' || TypeFaconnage == '5')
			CoutFaconnage = 0;
		else if (TypeFaconnage == '3')
			CoutFaconnage = PRIX_TABLETTE * NbExe;
		else
			CoutFaconnage = PRIX_DOS_CHEVAL * NbExe;
	}

	if (Aperforer == 'O')
		CoutFaconnage = CoutFaconnage + (NbImpR + NbImpRV) * PRIX_PERFORER / 1000;

	//Étape 5: Calculer le coût total
	CoutProduction = CoutR + CoutRV + CoutPapier + CoutFaconnage;
	CoutTotal = CoutProduction + CoutProduction * TPS + CoutProduction * TVQ;

	cout << fixed << setprecision(2);
	cout << "\nCout des impressions recto : \t\t" << CoutR << "$"
		<< "\nCout des impressions recto-verso : \t" << CoutRV << "$"
		<< "\nCout du papier : \t\t\t" << CoutPapier << "$"
		<< "\nCout du faconnage : \t\t\t" << CoutFaconnage << "$"
		<< "\nCOUT DE PRODUCTION : \t\t\t" << CoutProduction << "$"
		<< "\nCOUT TOTAL : \t\t\t\t" << CoutTotal << "$";

	
	_getch();
}