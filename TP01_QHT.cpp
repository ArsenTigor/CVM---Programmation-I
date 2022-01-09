/**********************************************
AUTEUR: Quoc Huan Tran
Fichier: TP1.cpp
Description: TP1
***********************************************/ 

#include <iomanip>
#include <iostream>
#include <conio.h>
using namespace std;
void main(void)
{
	// Separer les variables et les affectations des variables prochaine fois
	char Carac = 'A';
	int Entier;
	Entier = 75000;
	unsigned int SansSigne;
	SansSigne = 54321;
	short EntierCourt;
	EntierCourt = -42;
	long EntierLong;
	EntierLong = 57000;
	string Nom, Prenom;
	float Reel;
	Reel = 123.456;
	double ReelDouble;
	ReelDouble = 12.0123456789;

	cout << "\t\tTravail pratique 1 - Pour le cours de Programmation I" << "\nTaper votre nom : ";
	cin >> Nom;
	cout << "Taper votre prenom : ";
	cin >> Prenom;

	cout << "Essai du cadrage à gauche et de la notation en virgule flottante:\n"; 
	cout << left; //Possible de utiliser endl sans \n si on ne veut pas conserver "left"
	cout << setw(8) << Entier
		<< setw(8) << EntierCourt
		<< setw(8) << EntierLong
		<< setw(8) << SansSigne
		<< Carac
		<< '\n' << fixed << setprecision(2)
		<< setw(8) << Reel
		<< setw(8) << ReelDouble
		<< "\n\n";

	cout << "Essai du cadrage à droite et de la notation scientifique:\n";
	cout << right;
	cout << setw(12) << Entier
		<< setw(12) << EntierCourt
		<< setw(12) << EntierLong
		<< setw(12) << SansSigne
		<< Carac;
	
	cout << '\n' << scientific << setprecision(5);
	cout << setw(15) << Reel
	 << setw(15) << ReelDouble
	 << "\n\n";

	cout << "Essai de mise en page:\n";
	cout << hex << '\t' << "Entier \t\t" << "= " << Entier << '\n'
		<< hex << '\t' << "EntierCourt \t" << "= " << EntierCourt << '\n'
		<< hex << '\t' << "EntierLong \t" << "= " << EntierLong << '\n'
		<< hex << '\t' << "SansSigne \t" << "= " << SansSigne << '\n'
		<< '\t' << "Carac \t\t= " << Carac << '\n'
		<< '\t' << "Reel\t\t= " << right << fixed << setprecision(3) << setw(10) << Reel << '\n'
		<< '\t' << "ReelDouble\t= " << fixed << setprecision(3) << setw(10) << ReelDouble << '\n';


	_getch();
}