/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   add.h
 * Author: ggagnard
 *
 * Created on 3 décembre 2018, 11:28
 */

#ifndef ADD_H
#define ADD_H

#define NBLETTRE 50

#ifdef __cplusplus
extern "C" {
#endif
typedef enum{
    PIN,CHENE,HETRE,PEUPLIER
}bois;    
    
typedef struct {
    char nom[NBLETTRE];
    char prenom[NBLETTRE];
    char idBadge[10];
    int idAct;
}adherent;


adherent *creeUnAdherent();
adherent *creeAdherent(int numeroAdherent);
void afficherAdherent(adherent *infoAdherent[], int nbAdherent);





#ifdef __cplusplus
}
#endif

#endif /* ADD_H */

