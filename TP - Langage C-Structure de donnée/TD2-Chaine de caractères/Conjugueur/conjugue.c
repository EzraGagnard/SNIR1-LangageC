/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#define VRAI 1
#define FAUX 0
#define LONG 255

#include "conjugue.h"

#include <string.h>

#define TAILLEMAX 255

int verifVoyelle(char caractere){
    char Voyelles[12] = "aeiouhAEIOUY";
    int n;
    int carVoyelles = FAUX;
    
    for (n=0; n < strlen(Voyelles); n++){
        if(caractere == Voyelles[n]){
            carVoyelles = VRAI;
        }
    }
    return carVoyelles;
}

int verifVerbeGroupe1( char verbe[]){
    int longVerbe = 0;
    int verifGroupe1 = FAUX;
    longVerbe = strlen(verbe);
    
    if((verbe[longVerbe - 1] == 'r') && (verbe[longVerbe -2 ] == 'e') && (strcmp(verbe, "aller") !=0)) {
        verifGroupe1 = VRAI;
    }
    return verifGroupe1;
}

void conjuguaisonPresent(char verbe[]) {
    char prefix[TAILLEMAX];
    
    strncpy(prefix, verbe, strlen(verbe) - 2);
    
    if ( verifVoyelle(verbe[0]) == VRAI) {
        printf("\t\tJ'%se\n", prefix);
    }else {
        printf("\t\tJe %se\n", prefix);
    }
    printf("\t\tTu %ses\n", prefix);
    printf("\t\tIl/Elle %se\n", prefix);
    
    if (( verbe[strlen(verbe) - 3] == 'g')) {
        printf("\t\tNous %seons\n", prefix);
    }else {
        printf("\t\tNous %sons\n", prefix);
    }
    printf("\t\tVous %sez\n", prefix);
    printf("\t\tIls/Elles %sent\n", prefix);
}