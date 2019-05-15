/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   distributeur.h
 * Author: ggagnard
 *
 * Created on 8 novembre 2018, 09:17
 */

#include <stdio.h>
#include <stdlib.h>


#ifndef DISTRIBUTEUR_H
#define DISTRIBUTEUR_H
#define NB_BOISSONS 6
#define NB_TYPE_PIECES 5
#define FAUX 0
#define VRAI 1
#define NB_PIECES 5


#ifdef __cplusplus
extern "C" {
#endif

    int ChoisirBoisson(char * nomBoissons[], float prixBoissons[]);

    float EffectuerPayement(float prix, float valeurPieces[], int piecesIntroduites[]);

    float CalculerMontant(float valeurPieces[], int piecesIntroduites[]);

    int RendreMonnaie(float montant, float valeurPieces[], int pieceRendues[], int stockPieces[]);

    void ServirBoisson(int boisson, char * nomBoissons[], float valeurPieces[], int piecesRendues[]);

#ifdef __cplusplus
}
#endif

#endif /* DISTRIBUTEUR_H */
