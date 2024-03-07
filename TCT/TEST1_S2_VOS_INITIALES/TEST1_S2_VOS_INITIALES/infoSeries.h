//-----------------------------------------------------------------------------------//
// Nom du projet 		: Approximation r�sistance
// Nom du fichier 		: infoSeries.h
// Date de cr�ation 	: 04.03.2022
// Date de modification : 06.03.2024
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : d�finition et prototype li� aux s�rie de r�sistance 
//
//
// Remarques :          : 
//----------------------------------------------------------------------------------//
#ifndef INFO_SERIE
#define INFO_SERIE 

//-- librairies utilis�es --//
#include <stdint.h>
#include "infoUser.h"

//-- d�claration des constantes ou de d�finition --// 
#define LIMITE_R_MIN 1.00
#define LIMITE_R_MAX 10.00
#define LIMITE_POID_PUISSANCE_MIN 0
#define LIMITE_POID_PUISSANCE_MAX 6

#define CONST_K 3
#define CONST_M 6
#define CONST_G 9

#define MSG_BRUTE "brute"
#define MSG_NORMALISEE "normalisee"

//-- d�claration �num�ration --// 
typedef enum e_valSerie {E6 = 6, E12 = 12, E24 = 24};
typedef enum e_suffixePoidPuissance {CST_K = 3, CST_M = 6};

//-- d�claration de structure --// 
typedef struct
{
	char choixSerieR;			//1 octet
	char rangResistance;
	char poidPuissanceR;
	float *pt_tbApproximation;	//4 octets
	float resistanceBrute;		
	float resistanceNormalisee;
}s_serieRX;						//15 octets

//-- d�claration de prototype --// 
	int ControleChoixSerie(enum e_validation);			// controle de la s�rie E6, E12, E24... 
	float ControleValR(enum e_validation);				// contr�le de la valeur unitaire de la r�sistance 
	int ControlePoidPuissanceR(enum e_validation);		// contr�le du puissance de puissance en base 10
	float; int CalculRUser(float);						// calcul la r�sistance brute de l'utilsateur								
														// affichage de la valeur de r�sistance avec suffixe -, k, M
	void calculCalSerie(void);							// calcul de la s�rie de r�sistance 
	void CalculRNormalisee(void);						// calcul la valeur normalis�e de R

#endif // !INFO_SERIE


