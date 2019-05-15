/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ggagnard
 *
 * Created on 21 novembre 2018, 10:53
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LONG 255

typedef enum { FAUX, VRAI} logique;

/*
 * 
 */
logique concatenerChaine(char dst[], char src[]) {

    int longueur_init, i;
    int longueur_src;
    logique erreur = FAUX;

    longueur_init = strlen(dst);
    longueur_src = strlen(src);

    if (longueur_init + longueur_src < LONG) {

        for (i = 0; src[i] != '\0'; i++) {
            dst[longueur_init + i] = src[i];

        }

        dst[longueur_init + i] = '\0';

    } else {
        erreur = VRAI;
    }

    return (erreur);
}

int main(int argc, char** argv) {

    char phrase[LONG];
    char phrase2[LONG];
    int erreur = 0;
    
    printf("Saisir une phrase \n");
    fgets(phrase, LONG, stdin);

    printf("Saisir la deuxième phrase \n");
    fgets(phrase2, LONG, stdin);

    if (! concatenerChaine(phrase, phrase2)){
        
        printf("la concaténation donne : \n %s", phrase);
        
    }
    else{
        erreur = 1;
        printf("Une erreur de concaténation");
    }
    return (erreur);
}

