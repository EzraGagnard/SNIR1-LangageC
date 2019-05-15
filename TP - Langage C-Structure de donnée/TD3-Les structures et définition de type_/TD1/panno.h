/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   panno.h
 * Author: ggagnard
 *
 * Created on 3 décembre 2018, 10:21
 */

#ifndef PANNO_H
#define PANNO_H

#define TAILLEMAX 255

#ifdef __cplusplus
extern "C" {
#endif
    
  typedef enum{
    PIN,CHENE,HETRE,PEUPLIER
}bois;    
    
typedef struct {
    // char typeBois[TAILLEMAX];
    bois typeBois;
    unsigned int largeur;
    unsigned int longueur;
    unsigned int epaisseur;
} panneau;


panneau creerPanneau();
panneau *creePanneauPtr();
void afficherPanneau(panneau infoPanneau);
void afficherPanneauPtr(panneau *infoPanneau);
//void volume(panneau infoPanneau);
void volumePtr(panneau *infoPanneau);



    
#ifdef __cplusplus
}
#endif

#endif /* PANNO_H */

