/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ggagnard
 *
 * Created on 8 novembre 2018, 09:15
 */

#include <stdio.h>
#include <stdlib.h>
#include "distributeur.h"

/*
 * 
 */

int main(int argc, char** argv) {


    char * nomBoissons[NB_BOISSONS] = {"Lait de griffon", "Lait de péguase", "Lait de chimère", "Lait de dragon", "Lait d'hyppogriffe","lait de licorne"};


    float prixBoissons[NB_BOISSONS] = {3, 2.3, 4.2, 7.8, 4.5, 9};
    float valeurPieces[NB_TYPE_PIECES] = {2, 1, 0.5, 0.2, 0.1};
    int piecesIntroduites[NB_TYPE_PIECES] = {0, 0, 0, 0, 0};
    int piecesRendues[NB_TYPE_PIECES] = {0, 0, 0, 0, 0};
    int stockPieces[NB_TYPE_PIECES] = {15, 15, 15, 15, 15};
    // int piecesIntroduites[NB_TYPE_PIECES] = {}


    int boisson;
    float prix;
    int payement;
    float montant;
    float rendu;
    int indice;
    int piece;
    
   do {
        boisson = ChoisirBoisson(nomBoissons, prixBoissons);
        if (boisson != -1) {
            prix = prixBoissons[boisson];
            payement = EffectuerPayement(prix, valeurPieces, piecesIntroduites);
            if (payement == 1) {
                montant = CalculerMontant(valeurPieces, piecesIntroduites);
                rendu = RendreMonnaie(montant - prix, valeurPieces, piecesRendues, stockPieces);
                if (rendu == 1) {
                    ServirBoisson(boisson, nomBoissons, valeurPieces, piecesRendues);
                    printf("\nj'ajoute la monnaie dans le monnayeur\n");
                    for (piece = 0; piece < NB_TYPE_PIECES; piece++) {
                        stockPieces[piece] += piecesIntroduites[piece];
                        printf("pieces de %.2f: %d\n", valeurPieces[piece], stockPieces[piece]);
                    }
                    printf("\n\n");
                } else {
                    printf("\ndesole, nous n'avons pas suffisamment de pièces en stock\n");
                    for (piece = 0; piece < NB_TYPE_PIECES; piece++) {
                        printf("je vous rend %d piece de %.2f euros\n", piecesIntroduites[piece], valeurPieces[piece]);
                        piecesIntroduites[piece] = 0;
                        stockPieces[piece] += piecesRendues[piece];
                    }
                }
            }
        }
    } while (boisson != -1);

    return (EXIT_SUCCESS);
}


