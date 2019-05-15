/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>
#include "panno.h"


void afficherPanneau(panneau infoPanneau) {
    printf("type de bois: %s\n", infoPanneau.typeBois);
    printf("largeur: %u\n", infoPanneau.largeur);
    printf("longueur: %u\n", infoPanneau.longueur);
    printf("epaisseur: %u\n", infoPanneau.epaisseur);
}

/* panneau *creePanneauPtr(){
    panneau *infoPanneau;
    infoPanneau = (panneau *) malloc(sizeof (panneau));
    printf("type bois:");
    scanf("%s", infoPanneau->typeBois);
    printf("largeur:");
    scanf("%u", &(infoPanneau->largeur));
    printf("longueur:");
    scanf("%u", &(infoPanneau->longueur));
    printf("epaisseur:");
    scanf("%u", &(infoPanneau->epaisseur));
    return infoPanneau;
} */
panneau *creePanneauPtr() {
    panneau *infoPanneau;
    int choix;

    infoPanneau = (panneau *) malloc(sizeof (panneau));

    printf("type bois:\n");
    printf("1: pin\n");
    printf("2: chene\n");
    printf("3: hetre\n");
    printf("4: peuplier\n");
    printf("Votre choix:");
    scanf("%d", &choix);
    switch (choix) {
        case 1: infoPanneau->typeBois = PIN;
            break;
        case 2: infoPanneau->typeBois = CHENE;
            break;
        case 3: infoPanneau->typeBois = HETRE;
            break;
        case 4: infoPanneau->typeBois = PEUPLIER;
            break;
    }
    printf("largeur:");
    scanf("%u", &(infoPanneau->largeur));
    printf("longueur:");
    scanf("%u", &(infoPanneau->longueur));
    printf("epaisseur:");
    scanf("%u", &(infoPanneau->epaisseur));
    return infoPanneau;
}

void afficherPanneauPtr(panneau * infoPanneau) {
    // printf("\n\ntype de bois: %s\n",infoPanneau->typeBois);
    char *tabTypeBois[4] = {"chene", "pin", "hetre", "peuplier"};
    printf("\ntype de bois:%s\n", tabTypeBois[infoPanneau->typeBois]);
    printf("largeur: %u\n", infoPanneau->largeur);
    printf("longueur: %u\n", infoPanneau->longueur);
    printf("epaisseur: %u\n", infoPanneau->epaisseur);
}

void volumePtr(panneau *infoPanneau) {
    char *tabTypeBois[4] = {"chene", "pin", "hetre", "peuplier"};
    float volume;
    volume = ((float) infoPanneau->longueur * infoPanneau->largeur * infoPanneau->epaisseur) / 1000000000;
    printf("\nLe volume du bois type %s est de: %.9f m3\n", tabTypeBois[infoPanneau->typeBois], volume);
}