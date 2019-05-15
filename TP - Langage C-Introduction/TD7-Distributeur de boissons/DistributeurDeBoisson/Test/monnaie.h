/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   monnaie.h
 * Author: ggagnard
 *
 * Created on 13 novembre 2018, 11:21
 */

#ifndef MONNAIE_H
#define MONNAIE_H

#define FAUX 0
#define VRAI 1

#define NB_PIECES 5


#ifdef __cplusplus
extern "C" {
#endif

    int RendreMonnaie (float montant, float valPiece[],int pieceRendu[],int pieceEnStock[]);


#ifdef __cplusplus
}
#endif

#endif /* MONNAIE_H */

