/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   adh.h
 * Author: ggagnard
 *
 * Created on 10 décembre 2018, 09:31
 */

#ifndef ADH_H
#define ADH_H

#define max 50
#define MAX 5000
#define SMAX 5

#ifdef __cplusplus
extern "C" {
#endif

    typedef enum {
        NATATION, BASKETBALL, AVIRON, ATHLETISME, TENNIS
    } sports;

    typedef struct {
        int jour;
        int mois;
        int annee;
    } typeDate;

    typedef struct {
        char nom[max];
        char prenom[max];
        typeDate dateNaissance;
        unsigned int nbActivite;
        sports activite[SMAX];
        unsigned int numLicence;
    } typeAdherent;

    
    
    /* void presentation();
     void effacerEcran();
     void continuer();
     */
    void afficherMenu();
    typeAdherent *creerAdherent();
    void afficherDate(typeDate date);
    void afficherActivite(sports activite);
    void afficherUnAdherent(typeAdherent * ad);
    void choisirActivites(typeAdherent *ad, int nbActivites);
    int ajouterUnAdherent(typeAdherent *tab[], int nb);
    void afficherAdherents(typeAdherent *ad[], int nb);
    int numAdherent(typeAdherent *ad[], int nb);
    void modifierUneFiche(typeAdherent *tab[], int indice);
    int supprimerToutLesAdherent(typeAdherent * tab[], int nb);
    int supprimerUnAdherent(typeAdherent *tab[],int indAdherent,int nb);
    void sauvegarderAdherents(typeAdherent *tab[], int nbAdherent);
    int chargerAdherents(typeAdherent *tab[ ]);
    

#ifdef __cplusplus
}
#endif

#endif /* ADH_H */

