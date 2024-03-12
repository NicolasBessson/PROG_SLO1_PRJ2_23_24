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
enum e_valSerie {E6 = 6, E12 = 12, E24 = 24};
enum e_suffixePoidPuissance {CST_K = 3, CST_M = 6};

//-- d�claration de structeur --// 
struct s_SerieRX {
	char choixSerieR;			// 1 octet
	char rangResistance;		// 1 octet
	char poidPuissanceR;		// 1 octet
	float pt_tbApproximation;	// 4 octets
	float resistanceBrute;		// 4 octets
	float ResistanceNormalisee;	// 4 octets
};								// Total : 15 octets

// Pointeur structure
struct s_SerieRX SerieRX;
struct s_SerieRX *ptrSerieRX = &SerieRX;

//-- d�claration de prototype --// 
					// controle de la s�rie E6, E12, E24... 
					int ControleChoixSerie(int valUser);

					// contr�le de la valeur unitaire de la r�sistance 
					float ControleValR(float valUser);

					// contr�le du puissance de puissance en base 10
					int ControlePoidPuissance(int valUser);

					// calcul la r�sistance brute de l'utilsateur
					float CalculRUser(float valR, int valP);

					// affichage de la valeur de r�sistance avec suffixe -, k, M
					void CalculValSerie(struct s_SerieRX infoR);

					// calcul de la s�rie de r�sistance 
					void CalculRNormalisee(struct s_SerieRX infoR);

					// calcul la valeur normalis�e de R

#endif // !INFO_SERIE


