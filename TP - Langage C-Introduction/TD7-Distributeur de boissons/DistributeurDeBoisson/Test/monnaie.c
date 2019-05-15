/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "monnaie.h"

#define VRAI 1
#define FAUX 0

#define NB_PIECES 5

int rendreMonnaie(float montant, float valPiece[], int pieceRendue[], int pieceEnStock[]) {

    int indice = 0;
    int retour = FAUX;

    for (indice = 0; indice < NB_PIECES; indice++) {
        pieceRendue[indice] = 0;
    }
    indice = 0;
    while (montant > 0 && indice < NB_PIECES) {
        while (montant >= valPiece[indice] && pieceEnStock[indice] > 0) {
            montant -= valPiece[indice];
            pieceRendue[indice] += 1;
            pieceEnStock[indice] -= 1;
        }
        indice++;
    }
    printf("montant %.2f\n", montant);
    if (montant < 0.01) {
        retour = VRAI;
    }
    return retour;
}