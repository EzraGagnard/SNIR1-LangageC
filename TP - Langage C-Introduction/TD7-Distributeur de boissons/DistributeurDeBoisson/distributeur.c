/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 * ggagnard
 */

#include "distributeur.h"

#define VRAI 1
#define FAUX 0
#define NB_PIECES 5

int ChoisirBoisson(char * nomBoissons[], float prixBoissons[]) {
    int indice;
    int choix;
    printf("\nListes des boissons\n");
    for (indice = 1; indice <= NB_BOISSONS; indice++) {
        printf("%d - %s \t %.2f\n", indice, nomBoissons[indice - 1], prixBoissons[indice - 1]);
    }
    printf("0 - Annuler\n");
    printf("Votre Choix:");
    do {
        scanf("%d", &choix);
    } while (choix > NB_BOISSONS || choix < 0);

    system("clear");
    printf("Vous avez choisi %s à %.2f€ très bon choix !\n", nomBoissons[choix - 1], prixBoissons[choix - 1]);

    return choix - 1;
}

float EffectuerPayement(float prix, float valeurPieces[], int piecesIntroduites[]) {
    int indice, piece;
    int payement = 1;
    float somme = 0;

    for (indice = 0; indice <= NB_TYPE_PIECES - 1; indice++) {

        printf("%d - Piece %.2f€\n", indice + 1, valeurPieces[indice]);
        piecesIntroduites[indice] = 0;
    }
    printf("0 - Annuler\n");
    do {
        do {
            printf("Saisir pièce:");
            scanf("%d", &piece);
        } while (piece < 0 || piece > 5);
        if (piece > 0) {
            somme = somme + valeurPieces[piece - 1];
            piecesIntroduites[piece - 1]++;
            printf("Reste à payer: %.2f\n", prix - somme);
        }
        if (piece == 0) {
            payement = 0;
        }
    } while (somme < prix && payement == 1);
    return payement;
}

float CalculerMontant(float valeurPieces[], int piecesIntroduites[]) {
    int indice;
    float somme = 0;
    for (indice = 0; indice < NB_TYPE_PIECES; indice++) {
        printf("Pièces de %.2f : %d\n", valeurPieces[indice], piecesIntroduites[indice]);
        somme = somme + valeurPieces[indice] * (float) piecesIntroduites[indice];
    }
    return somme;
}

int RendreMonnaie(float montant, float valeurPieces[], int pieceRendues[], int stockPieces[]) {
    int indice = 0;
    int retour = FAUX;
    for (indice = 0; indice < NB_PIECES; indice++) {
        pieceRendues[indice] = 0;
    }
    indice = 0;
    while (montant > 0 && indice < NB_PIECES) {
        while (montant >= valeurPieces[indice] && stockPieces[indice] > 0) {
            montant -= valeurPieces[indice];
            pieceRendues[indice] += 1;
            stockPieces[indice] -= 1;
        }
        indice++;
    }
    printf("montant %.2f\n", montant);
    if (montant < 0.001) {
        retour = VRAI;
    }
    return retour;
}

void ServirBoisson(int boisson, char * nomBoissons[], float valeurPieces[], int piecesRendues[]){
    
    printf("\nVotre boisson %s est servi\n\n", nomBoissons[boisson]);
    printf("\nIl vous a etet rendus %s €",);
    
}