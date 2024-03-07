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

#define MSG_BRUTE "brute"
#define MSG_NORMALISEE "normalisee"

//-- d�claration �num�ration --// 
typedef enum {E6 = 6, E12 = 12, E24 = 24} e_valSerie;				//enum pour la s�rie souhait�e

typedef enum {CST_K = 3, CST_M = 6}e_suffixePoidsPuissance;			//enum pour le suffixe de la valeur


//-- d�claration de structure --// 


typedef struct {													//d�finition de la structure
	uint8_t choixSerieR;					//1 octet 
	uint8_t rangResistance;					//1 octet
	uint8_t poidsPuissance;					//1 octet
	float *pt_tbApproximation;				//4 octets
	float resistanceBrute;					//4 octets
	float resistanceNormalisee;				//4 octets
} s_serieRX;								//Total = 15 octets



//-- d�claration de prototype --// 
e_validation ControleChoixSerie(int valUser);				// controle de la s�rie E6, E12, E24... 
e_validation ControleValR(float valUser);					// contr�le de la valeur unitaire de la r�sistance 
e_validation ControlePoidPuissanceR(int valUser);			// contr�le du puissance de puissance en base 10
float CalculRUser(float valR, int valP);					// calcul la r�sistance brute de l'utilsateur
															// affichage de la valeur de r�sistance avec suffixe -, k, M
s_serieRX CalculValSerie(s_serieRX infoR);					// calcul de la s�rie de r�sistance 
s_serieRX CalculRNormalise(s_serieRX infoR);				// calcul la valeur normalis�e de R

#endif // !INFO_SERIE


