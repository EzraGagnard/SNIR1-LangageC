/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: gabri
 *
 * Created on 18 décembre 2018, 14:05
 */

#include <stdio.h>
#include <stdlib.h>

#define VRAI 0
#define FAUX 1

/*
 * 
 */
int main(int argc, char** argv) {



    int z = 0;
    int x = 0;
    int y = 0;

    int valeur = 10;

    int sortie = FAUX;
    int choix = 0;

    do {
        int nbMili = valeur;

        printf("\n\n\tQue doit faire la table tracante?\n");
        printf("\t 8 -----> Se déplacer de %d milimètre vers le haut\n", nbMili);
        printf("\t 2 -----> Se déplacer de %d milimètre vers le bas\n", nbMili);
        printf("\t 4 -----> Se déplacer de %d milimètre vers la gauche\n", nbMili);
        printf("\t 6 -----> Se déplacer de %d milimètre vers la droite\n", nbMili);
        printf("\t 5 -----> Changer la hauteur du crayon\n");
        printf("\t 9 -----> Changer le nombre de millimère\n");
        printf("\t 0 -----> Quitter\n");
        printf("Votre choix:");
        scanf(" %d", &choix);

        switch (choix) {
            case 8: x = x + 10;
                break;
            case 2: x = x - 10;
                break;
            case 4: y = y + 10;
                break;
            case 6: y = y - 10;
                break;
            case 5: if (z==0){
                z=1;
            }
            else{
                z=0;
            }
                break;
            case 9: printf("entrez le nombre de millimètre: ");
                scanf(" %d", &valeur);
                break;
            case 0: sortie = VRAI;
                break;
                
        }
        printf("g0 z%d x%d y%d", z, x, y);
    } while (sortie == FAUX);



    return (EXIT_SUCCESS);
}

