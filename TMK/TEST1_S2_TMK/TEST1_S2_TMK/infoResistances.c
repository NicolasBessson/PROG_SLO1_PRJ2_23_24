//-----------------------------------------------------------------------------------//
// Nom du projet 		: Approximation r�sistance
// Nom du fichier 		: infoResistance.c
// Date de cr�ation 	: 04.03.2022
// Date de modification : 07.03.2022
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : main li� au test 1 semestre 2 PROG (voir donn�es)
//
// Remarques :          : 
//----------------------------------------------------------------------------------//
//-- directive pr�processeur pour supprimer certains warining --//
#pragma warning(disable : 4996)		//-- warning concernant les scanf

//-- librairires standards --// 
#include <stdint.h>		// normalisation des types entiers
#include <stdio.h>		// flux d'entr�e/sortie 
#include <math.h>

//-- librairies personnelles --// 
#include <infoUser.h>

//----------------------------------------------------------------------------------//
// Nom de la fonction		: AfficherValeurResistance
// Entr�e / Sortie / I/O    : - / - / - 
// Description				: calcul la valeur brute de la r�sistance en ohm 
// Date modfification		: le 06.03.2022
// Remarque					: -
//----------------------------------------------------------------------------------//
void AfficherValeurResistance(float valRBrute, uint8_t poidPuissance)
{
	//-- d�claration de variable --//
	char displaySuffixe = 0; 
	float displayValeurR; 
	
	//-- test en fct du poid de puissance --//
	if (poidPuissance < CONST_K)
	{
		displaySuffixe = ' ';
		displayValeurR = valRBrute; 
	}
	else if (poidPuissance < CONST_M)
	{
		displaySuffixe = 'k';
		displayValeurR = valRBrute / pow(10, CONST_K); 
	}
	else
	{
		displaySuffixe = 'M';
		displayValeurR = valRBrute / pow(10, CONST_M);
	}

	//-- affichage du message --// 
	printf(" est de %3.3f %cohm", displayValeurR, displaySuffixe);
}

//----------------------------------------------------------------------------------//
// Nom de la fonction		: ControleChoixSerie
// Entr�e / Sortie / I/O    : valUser / flagOK / - 
// Description				: test si la valeur entr�e par l'utilisateur est correcte
//							  renvoie un OK, et renvoi un NOT_OK si incorrecte 
// Date modfification		: le 05.03.2022
// Remarque					: -
//----------------------------------------------------------------------------------//

int ControleChoixSerie(int valUser, int E_Validation )
{
	if (valUser == 6)
	{
		E_Validation = OK;
	}
	else
	{
		E_Validation = NOT_OK;
	};

	if (valUser == 12)
	{
		E_Validation = OK;
	}
	else
	{
		E_Validation = NOT_OK;
	};

	if (valUser == 24)
	{
		E_Validation = OK;
	}
	else
	{
		E_Validation = NOT_OK;
	};

	return E_Validation;
}

//----------------------------------------------------------------------------------//
// Nom de la fonction		: ControleValR
// Entr�e / Sortie / I/O    : valUser / flagOK / - 
// Description				: test si la valeur entr�e par l'utilisateur est correcte
//							  renvoie OK, et renvoi un NOT_OK si incorrecte 
// Date modfification		: le 05.03.2022
// Remarque					: -
//----------------------------------------------------------------------------------//
int ControleValR(float valUser, int flagOK)
{
	if (valUser < 0)
	{
		flagOK = NOT_OK;
	};

	if (valUser >= 1)
	{
		flagOK = OK;
	};

	if (valUser > 10)
	{
		flagOK = NOT_OK;
	};

	if (flagOK == NOT_OK)
	{
		printf("la valeur n'est pas correcte");
	};
	return flagOK;
}

//----------------------------------------------------------------------------------//
// Nom de la fonction		: ControlePoidPuissanceR
// Entr�e / Sortie / I/O    : valUser / flagOK / - 
// Description				: test si la valeur entr�e par l'utilisateur est correcte
//							  renvoie OK, et renvoi un NOT_OK si incorrecte 
// Date modfification		: le 05.03.2022
// Remarque					: -
//----------------------------------------------------------------------------------//

int ControlePoidPuissanceR(int valUser, int flagOK)
{
	if (valUser <= 0 && valUser >= 6)
	{
		flagOK = OK;
	}
	else
	{
		flagOK = NOT_OK;
	};
	return flagOK;
}

//----------------------------------------------------------------------------------//
// Nom de la fonction		: CalculRUser
// Entr�e / Sortie / I/O    : valR, valP / R_ohm / - 
// Description				: calcul la valeur brute de la r�sistance en ohm 
// Date modfification		: le 05.03.2022
// Remarque					: -
//----------------------------------------------------------------------------------//
int CalculRUser(float valR, int valP, int R_ohm)
{
	long double pow(float valR, int valP);		//Je sais que c'est d�geux et gourmand en RAM mais au moins �a va pas overflow
	float ceilf(long double valR);
	R_ohm = valR;
	return R_ohm;
}




//----------------------------------------------------------------------------------//
// Nom de la fonction		: CalculValSerie
// Entr�e / Sortie / I/O    : - / - / infoR 
// Description				: calcul les diff�rents points de la s�rie choisie 
// Date modfification		: le 07.03.2022
// Remarque					: -
//----------------------------------------------------------------------------------//
int CalculValSerie(s_SerieRX infoR)
{
	
	return infoR;
}



//----------------------------------------------------------------------------------//
// Nom de la fonction		: CalculRNormalisee
// Entr�e / Sortie / I/O    : - / - / infoR
// Description				: calcule de la valeur normalis�e par rapport � la 
//							  r�sistance brute   
// Date modfification		: le 07.03.2022
// Remarque					: -
//----------------------------------------------------------------------------------//

int CalculRNormalisee(s_SerieRX infoR)
{

	return infoR;
}
