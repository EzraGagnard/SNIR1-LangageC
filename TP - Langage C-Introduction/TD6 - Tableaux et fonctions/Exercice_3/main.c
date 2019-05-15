/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ggagnard
 *
 * Created on 12 novembre 2018, 08:35
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int nbMatch;
    int scoreDomicile[15];
    int scoreExterieur[15];
    int indice;

    int MatchNul = 0;
    int gagneDomicile = 0;
    int gagneExterieur = 0;
    int matchA0 = 0;

    printf("Nombre de match : ");
    scanf("%d", &nbMatch);
    indice = 0;

    while (indice < nbMatch) {
        printf("Score Domicile : ");
        scanf("%d", &scoreDomicile[indice]);
        printf("Score Extérieur : ");
        scanf("%d", &scoreExterieur[indice]);
        printf("------Fin de Match ------\n");
        if (scoreDomicile[indice] = 0) {
            matchA0 = matchA0 + 1;
        }
        indice = indice + 1;

    }

    for (indice = 0; indice < nbMatch; indice++) {
        if (scoreDomicile[indice] == scoreExterieur[indice]) {
            MatchNul = MatchNul + 1;
        } else {
            if (scoreDomicile[indice] > scoreExterieur[indice]) {
                gagneDomicile = gagneDomicile + 1;

            } else {
                gagneExterieur = gagneExterieur + 1;
            }
        }
    }

    indice = indice - 1;

    do {
        indice = indice + 1;

    } while ((scoreDomicile[indice] != 0 || scoreExterieur[indice] != 0) && indice < nbMatch);

    indice = nbMatch - indice;

    if (matchA0 > 0) {
        printf("Il y a eu au moins un match sans aucun but \n");
    }

    printf("Nombre de Match Nul %d \n", MatchNul);
    printf("Nombre de match gagné à domicile %d \n", gagneDomicile);
    printf("Nombre de match gagné à l'extérieur %d \n", gagneExterieur);
    return (EXIT_SUCCESS);
}
