/**********************************************
AUTEUR: Quoc Huan Tran
Fichier: Module 2.cpp
Description: Exercises Module 2 et Exemples du manuel p.69-87
***********************************************/

#include <iostream>
#include <conio.h>
using namespace std;

void main(void)

////Module 2
////Calcul du nombre de gallons de peinture pour peinturer un mur rectangulaire
//{
//	float NbGallons,
//		Hauteur,
//		Largeur,
//		Surface;
//	int PouvoirCouvrant; // c'est toujours un entier sur le gallon de peinture
//	cout << "Entrez la hauteur et la largeur du mur: ";
//	cin >> Hauteur >> Largeur;
//	cout << "Entrez le pouvoir couvrant indiqué sur le gallon de peinture: ";
//	cin >> PouvoirCouvrant;
//	Surface = Hauteur * Largeur;
//	NbGallons = Surface / PouvoirCouvrant;
//	cout << "Le nombre de gallons nécessaire est: " << NbGallons;
//	_getch();
//}



////Manuel p.74
////Ranger le plus petit de deux nombres dans la variable VarA et le plus grand dans la variable VarB.
//{
//	int VarA,
//		VarB,
//		Echange;
//	cout << "Donner le premier nombre: ";
//	cin >> VarA;
//	cout << "Donner le deuxième nombre: ";
//	cin >> VarB;
//	/* Vérification que a est bien le plus grand des deux nombres */
//	if (VarA > VarB)
//	{
//		Echange = VarA;
//		VarA = VarB;
//		VarB = Echange;
//	}
//	cout << "\nLe plus petit nombre (variable VarA) est: " << VarA;
//	cout << "\nLe plus grand nombre (variable VarB) est: " << VarB;
//}



////Manuel p.76
////Lire trois nombres et les placer en ordre croissant
//{
//	int Nb1,
//	Nb2,
//	Nb3,
//	Echange;
//	cout << "Donner le premier nombre (Nb1): ";
//	cin >> Nb1;
//	cout << "Donner le deuxième nombre (Nb2): ";
//	cin >> Nb2;
//	cout << "Donner le troisième nombre (Nb3): ";
//	cin >> Nb3;
//	/* Comparaison de la valeur de Nb1 par rapport à Nb2 et Nb3) */
//	if (Nb1 > Nb2)
//	{
//		Echange = Nb1;
//		Nb1 = Nb2;
//		Nb2 = Echange;
//	}
//	if (Nb1 > Nb3)
//	{
//		Echange = Nb1;
//		Nb1 = Nb3;
//		Nb3 = Echange;
//	}
//	/* Comparaison de la valeur de Nb2 par rapport à Nb3) */
//	if (Nb2 > Nb3)
//	{
//		Echange = Nb2;
//		Nb2 = Nb3;
//		Nb3 = Echange;
//	}
//	cout << "\nLes nombres en ordre croissant sont:\n"
//	<< "\t\t\t" << Nb1 << "\t" << Nb2 << "\t" << Nb3;
//}



////Manuel p.78
////Valider qu'un nombre est bien dans un intervalle donné
//{
//	const int MINIMUM = 0,
//		MAXIMUM = 100;
//	int Nombre;
//	cout << "Entrer votre nombre: ";
//	cin >> Nombre;
//	/* Vérification que le nombre est dans l'intervalle */
//	if (MINIMUM <= Nombre && Nombre <= MAXIMUM)
//	{
//		cout << "\nLe nombre " << Nombre << " est dans l'intervalle permis";
//	}
//}



////Manuel P.81
////Trouver le plus grand de deux nombres
//{
//	int NbA,
//		NbB,
//		Grand;
//	cout << "Donner le premier nombre: ";
//	cin >> NbA;
//	cout << "Donner le deuxième nombre: ";
//	cin >> NbB;
//	/* Recherche du plus petit des deux nombres */
//	if (NbA > NbB)
//		Grand = NbA;
//	else
//		Grand = NbB;
//	cout << "\nLe plus grand nombre est: " << Grand;
//}



////Manuel p.83
////Trouver la parité d'un entier
//{
//int Nombre,
//Reste;
//cout << "Donner votre nombre: ";
//cin >> Nombre;
//Reste = Nombre % 2;
//if (Reste == 0)
//cout << "\n\n" << Nombre << " est un nombre pair";
//else
//cout << "\n\n" << Nombre << " est un nombre impair";
//}




////Manuel p.85
////Calculer la valeur absolue d'un entier lu au clavier
//{
//int Nombre,
//Abs;
//cout << "Entrer un nombre: ";
//cin >> Nombre;
//if (Nombre < 0)
//{
//	cout << "\nLe nombre est négatif";
//	Abs = -Nombre;
//}
//else
//{
//	cout << "\nLe nombre est positif";
//	Abs = Nombre;
//}
//cout << "\nLa valeur absolue du nombre est de: " << Abs;
//}



////Manuuel p. 87
////Comparer deux valeurs(<, > ou == )
//{
//int Nombre1,
//Nombre2;
//cout << "Entrer les deux nombres: ";
//cin >> Nombre1 >> Nombre2;
//if (Nombre1 == Nombre2)
//cout << "\n" << Nombre1 << " est égal à " << Nombre2;
//else
//	if (Nombre1 < Nombre2)
//		cout << "\n" << Nombre1 << " est plus petit que " << Nombre2;
//	else
//		cout << "\n" << Nombre1 << " est plus grand que " << Nombre2;
//}