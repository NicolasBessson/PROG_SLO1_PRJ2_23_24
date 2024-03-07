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
enum e_valSerie {E6,E12,E24};
enum e_suffixePoidPuisssance {CST_K, CST_M};

	//-- d�claration de structeur --// 
	struct s_serieRX
    {
		int choixSerieR[101];
		int rangResistance[101];
		int poidPuissanceR[11];
		float pt_tbApproximation;
		float ResistanceBrute;
		float ResistanceNomalisee; 
    };

//-- d�claration de prototype --// 
void ControlChoixSerie(float valUser, int E_Validation);	  // controle de la s�rie E6, E12, E24... 
void ControleValR(float valUser, int E_Validation);  	      // contr�le de la valeur unitaire de la r�sistance 
void ControlePoidPuissanceR(int valUser, int E_Validation);	  // contr�le du puissance de puissance en base 10
void CalculRUser(float valR );								  // calcul la r�sistance brute de l'utilsateur
void CalculValSerie();										  // affichage de la valeur de r�sistance avec suffixe -, k, M
void CalculRNormalisee();				                      // calcul de la s�rie de r�sistance 

#endif // !INFO_SERIE


