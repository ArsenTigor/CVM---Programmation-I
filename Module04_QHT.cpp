/**********************************************
AUTEUR: Quoc Huan Tran
Fichier: Module04_QHT.cpp
Description : Exercices et exemples Module 4
***********************************************/

#include <iomanip>
#include <iostream>
#include <conio.h>
using namespace std;

void main(void)
{

	////Serie 1
	//int A, B, C, D, E, F, G, H, J, K, M, T, W, Z;
	//A = 4;
	//B = 3;
	//C = 48;
	//D = 99;
	//E = 1;
	//F = 2;
	//G = 10;
	//H = 10;
	//J = 5;
	//K = 5;
	//M = 400;
	//T = 9;
	//W = 9;
	//Z = 5;	

	////Serie 2
	//int A, B, C, D, E, F, G, H, J, K, M, T, W, Z;
	//A = 3;
	//B = 4;
	//C = 48;
	//D = 99;
	//E = 1;
	//F = 2;
	//G = 10;
	//H = 10;
	//J = 5;
	//K = 5;
	//M = 400;
	//T = 9;
	//W = 9;
	//Z = 5;
	
	////Serie 3
	//int A, B, C, D, E, F, G, H, J, K, M, T, W, Z;
	//A = 3;
	//B = 4;
	//C = 45;
	//D = 99;
	//E = 1;
	//F = 2;
	//G = 10;
	//H = 10;
	//J = 5;
	//K = 5;
	//M = 400;
	//T = 9;
	//W = 9;
	//Z = 5;

	////Serie 4
	//int A, B, C, D, E, F, G, H, J, K, M, T, W, Z;
	//A = 3;
	//B = 4;
	//C = 48;
	//D = 99;
	//E = 2;
	//F = 1;
	//G = 10;
	//H = 10;
	//J = 5;
	//K = 5;
	//M = 400;
	//T = 9;
	//W = 9;
	//Z = 5;
	
	////Serie 5
	//int A, B, C, D, E, F, G, H, J, K, M, T, W, Z;
	//A = 3;
	//B = 4;
	//C = 45;
	//D = 99;
	//E = 2;
	//F = 1;
	//G = 10;
	//H = 10;
	//J = 5;
	//K = 5;
	//M = 400;
	//T = 9;
	//W = 19;
	//Z = 5;
	
	////Serie 6
	//int A, B, C, D, E, F, G, H, J, K, M, T, W, Z;
	//A = 3;
	//B = 4;
	//C = 45;
	//D = 99;
	//E = 2;
	//F = 1;
	//G = 10;
	//H = 10;
	//J = 5;
	//K = 20;
	//M = 400;
	//T = 9;
	//W = 19;
	//Z = 5;
	
	////Serie 7
	//int A, B, C, D, E, F, G, H, J, K, M, T, W, Z;
	//A = 3;
	//B = 4;
	//C = 45;
	//D = 99;
	//E = 2;
	//F = 1;
	//G = 10;
	//H = 7;
	//J = 5;
	//K = 20;
	//M = 400;
	//T = 9;
	//W = 19;
	//Z = 5;
	
	//Serie 8
	int A, B, C, D, E, F, G, H, J, K, M, T, W, Z;
	A = 3;
	B = 4;
	C = 45;
	D = 99;
	E = 2;
	F = 1;
	G = 10;
	H = 7;
	J = 5;
	K = 20;
	M = 600;
	T = 9;
	W = 19;
	Z = 5;


////Exercise 18A
//	if (A > B)
//	{
//		cout << B;
//		C = A + C;
//	}
//	else
//	{
//		if (C != 45 && D >= 99)
//		{
//			if (E > F)
//				cout << F;
//		}
//		else
//		{
//			if (G == H)
//			{
//				if (K * 5 >= 100)
//					cout << K;
//				else
//					cout << "100";
//			}
//			else
//			{
//				if (M < 500)
//				{
//					if (J == Z)
//					{
//						if (T == W)
//							cout << T << ", " << W;
//					}
//				}
//				else
//					cout << "Fin de ce /@$$%&*% de programme inutile ";
//					
//				
//			}
//		}
//	}

//Exercise 18B
	if (A > B)
	{
		cout << B;
		C = A + C;
	}
	else if (C != 45 && D >= 99)
	{
		if (E > F)
				cout << F;
	}
	else if (G == H)
	{
		if (K * 5 >= 100)
				cout << K;
		else
				cout << "100";
	}
	else if (M < 500)
	{
		if (J == Z)
			if (T == W)
				cout << T << ", " << W;				
	}
	else
		cout << "Fin de ce /@$$%&*% de programme inutile ";

			


			
	


	_getch();
}