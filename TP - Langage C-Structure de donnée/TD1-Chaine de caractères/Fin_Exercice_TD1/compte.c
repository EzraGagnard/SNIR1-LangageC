/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "compte.h"

#include <string.h>

#define VRAI 1
#define FAUX 0

#define TAILLEMAX 6
#define COLMAX 36
#define LONG 120000


//_______________Exercice 4___________________________

int compte(char phrase[], char caractere) {

    int nombre = 0;
    int indice = 0;

    for (indice = 0; indice < strlen(phrase); indice++) {
        if (phrase[indice] == caractere) {
            nombre++;
        }
    }
    return nombre;
}


//_______________Exercice 5___________________________

int verifVoyelle(char caractere) {

    char voyelles[] = "aeiouyAEIOUY";

    int indice;
    int carVoyelle = FAUX;

    for (indice = 0; indice < strlen(voyelles); indice++) {
        if (caractere == voyelles[indice]) {
            carVoyelle = VRAI;
        }
    }
    return carVoyelle;
}

int compteVoyelles(char caractere[]) {

    int indice = 0;
    int nombreVoyelles = 0;

    for (indice = 0; indice < strlen(caractere); indice++) {
        if (verifVoyelle(caractere[indice]) == VRAI) {
            nombreVoyelles++;
        }
    }

    return nombreVoyelles;
}


//_______________Exercice 6___________________________

int verifCaractere(char caractere) {

    int nombre;
    int carCaractere;

    if ((caractere >= 'a' && caractere >= 'z') || (caractere >= 'A' && caractere >= 'Z')) {
        carCaractere = VRAI;

    }
    return carCaractere;
}

int compteConsonnes(char caractere[]) {

    int indice = 0;
    int nombreConsonnes = 0;

    for (indice = 0; indice < strlen(caractere); indice++) {
        if (!verifVoyelle(caractere[indice]) && verifCaractere(caractere[indice])) {
            nombreConsonnes++;
        }
    }

    return nombreConsonnes;
}


//_______________Exercice 7___________________________

int verifEsp(char caractere) {
    char espace[] = " /t";
    int indice;
    int carEsp = FAUX;

    for (indice = 0; indice < strlen(espace); indice++) {
        if (caractere == espace[indice]) {
            carEsp = VRAI;
        }
    }
    return carEsp;
}

int compteMot(char caractere[]) {

    int indice;
    int posCar = 0;
    int nombreMots = 0;
    int nombreEspace = 0;

    while (verifCaractere(caractere[posCar]) == FAUX) {
        posCar++;
    }

    for (indice = posCar; indice < strlen(caractere); indice++) {
        if ((verifEsp(caractere[indice]) == VRAI)&&(verifCaractere(caractere[indice + 1])) == VRAI) {
            // if ((verifEspace(caractere[indice])) == VRAI) {
            nombreEspace++;
        }
    }

    return nombreMots = nombreEspace + 1;
}


//_______________Exercice 8___________________________

int inverserPhrase(char phrase[], char phraseInverse[]) {

    int indice;
    for (indice = 0; indice < strlen(phrase); indice++) {
        phraseInverse[strlen(phrase) - 1 - indice] = phrase[indice];
    }

}


//_______________Exercice 9___________________________

int inversionMajMin(char phrase[], char phraseInvMajMin[]) {

    int indice;

    strcpy(phraseInvMajMin, phrase);

    for (indice = 0; indice < strlen(phrase); indice++) {
        if (phrase[indice] >= 'A' & phrase[indice] <= 'Z') {
            phraseInvMajMin[indice] = phrase[indice] + 32;
        } else if (phrase[indice] >= 'a' & phrase[indice] <= 'z') {
            phraseInvMajMin[indice] = phrase[indice] - 32;
        }
    }
}


//_______________Exercice 10__________________________  CA FONCTIONNE PAS, OH NOOOOOOOOOO !!!!
/*
void codeMorse(char caractere, char codeMorse[]) {

    char tabMorse[COLMAX][TAILLEMAX] = {
        ".-", //A
        "-...", //B
        "-.-.", //C
        "-..", //D
        ".", //E
        "..-.", //F
        "--.", //G
        "....", //H
        "..", //I
        ".---", //J
        "-.-", //K
        ".-..", //L
        "--", //M
        "-.", //N
        "---", //O
        ".--.", //P
        "--.-", //Q
        ".-.", //R
        "...", //S
        "-", //T
        "..-", //U
        "...-", //V
        ".--", //W
        "-..-", //X
        "-.--", //Y
        "--..", //Z
        "-----", //0
        ".----", //1
        "..---", //2
        "...--", //3
        "....-", //4
        ".....", //5
        "-....", //6
        "--...", //7
        "---..", //8
        "----."
    }; //9



    if ((caractere >= 'A')&&(caractere <= 'Z')) {
        strcpy(codeMorse, tabMorse[caractere - 'A']);
    } else if ((caractere >= '0')&&(caractere <= '9')) {
        strcpy(codeMorse, tabMorse[caractere - '0' + 26]);
    }
}*/

//_______________Exercice 11__________________________

int verifMessage(char phrase[], char phraseOk[]){
    if( strcmp(phrase,phraseOk)==0){
        return VRAI;
    }
    return FAUX ;
}

//_______________Exercice 12__________________________

int verifDebPhrase(char phrase[], char debPhrase[],int longDebPhrase){
    if(strncmp(phrase,debPhrase,longDebPhrase)==0){
        return VRAI;
    }
    return FAUX;
}

//_______________Exercice 13__________________________

int verifLoginMdp(char login[], char loginOk[],char Mdp[],char MdpOk[]){
    if((strcmp(login,loginOk)==0)&&(strcmp(Mdp,MdpOk)==0)){
        return VRAI;
    }
    return FAUX;
}

int verifChiffre(char caractere) {
    int carChiffre = FAUX;
    if ((caractere >= '0')&& (caractere <= '9')) {
        carChiffre = VRAI;
    }
    return carChiffre;
}

//_______________Exercice 14__________________________

void reecriturePhrase(char phrase[], char phraseTemp[]) {
    int indice;
    int longueurPhrase = 0;
    int nbChiffre = 0;
    int nbEspace = 0;

    longueurPhrase = strlen(phrase);

    for (indice = 0; indice < longueurPhrase; indice++) {
        if (phrase[indice] == ' ') {
            nbEspace++;
        } else if (verifChiffre(phrase[indice])) {
            nbChiffre++;
        } else if ((verifCaractere(phrase[indice]))) {
            phraseTemp[indice - nbEspace - nbChiffre] = phrase[indice];
            phraseTemp[indice - nbEspace - nbChiffre + 1] = '\0';
        }
    }
}

//_______________Exercice 15__________________________

int verifPalindrome(char phrase[], char phraseTemp[]){
    int indice;
    int longPhrase = 0;
    int nbEspace = 0;
    int verifPhrase = 0;
    
    longPhrase = strlen(phrase);
    
    for (indice = 0; indice < longPhrase; indice++) {
        if (phrase[indice] == ' ') {
            nbEspace++;
        } else if ((verifCaractere(phrase[indice])) || (verifChiffre(phrase[indice]))) {
            if ((phrase[indice] >= 'A')&&(phrase[indice] <= 'Z')) {
                phraseTemp[indice - nbEspace] = phrase[indice] + 32;
            } else {
                phraseTemp[indice - nbEspace] = phrase[indice];
            }
            phraseTemp[indice - nbEspace + 1] = '\0';
        }
    }
        printf("La phrase temporaire sans espaces est: %s\n\n", phraseTemp);

        longPhrase = strlen(phraseTemp);

        for (indice = 0; indice < longPhrase / 2; indice++) {
            if (phraseTemp[indice] != phraseTemp[longPhrase - 1 - indice]) {
                verifPhrase++;
            }
        }
    
    return verifPhrase;
}