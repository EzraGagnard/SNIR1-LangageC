/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ggagnard
 *
 * Created on 13 novembre 2018, 11:16
 */

#include <stdio.h>
#include <stdlib.h>

#include "monnaie.h"

/*
 * 
 */
int main(int argc, char** argv) {

    float montant = 1.5;
    float valPiece[5] = {2, 1, 0.5, 0.2, 0.10};
    int pieceEnStock[5] = {5, 1, 0, 0, 0};
    int pieceRendue[5];
    int indice;
    int retour = rendreMonnaie(montant, valPiece, pieceRendue, pieceEnStock);

    printf("retour: %d\n", retour);
    for (indice = 0; indice < NB_PIECES; indice++) {
        printf("pieces en stock de %.2f : %d\n", valPiece[indice] , pieceEnStock[indice]);
    }
    for (indice = 0; indice < NB_PIECES; indice++) {
        printf("pieces rendues de %.2f : %d\n", valPiece[indice] , pieceRendue[indice]);
    }
    return (EXIT_SUCCESS);
}