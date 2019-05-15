/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   lib.h
 * Author: ggagnard
 *
 * Created on 14 janvier 2019, 08:15
 */

#ifndef LIB_H
#define LIB_H

#define maxLivre 5000 
#define max1 100
#define max2 13
#define genreMax 6

        typedef enum {
            ROMAN, POLICIER, BD, JEUNESSE, LOISIRS, SCIENCES
        } genre;

        typedef struct {
            char titre[max1];
            char auteurs[max1];
            unsigned int annee;
            unsigned int nbGenre;
            genre genreLitt[genreMax];
            unsigned float prix;
            char identifiant[max2];
            unsigned int quantite;
        } typeLivre; //Non Fini

        void modifierUneFiche(typeLivre *tab[], int indice);
        void choisirGenres(typeLivre *livre, int nbGenre);
        char cleISBN(char *codeISBN);
        //int verificationISBN(char *codeISBN);
        //int main();
        void afficherMenu(); //Non Fini
        int ajouterUnLivre(typeLivre * tab[], int nb);
        int supprimerUnLivre(typeLivre *tab[], int indLivre, int nb);
        void afficheUnLivre(typeLivre * livre);
        void afficherLivres(typeLivre *livre[], int nb);
        void afficherGenre(genre genreLitt);
        void actualiserPrix(double taxe1, double taxe2, double *prix);
int rechercherLivre(typeLivre *livre[], int nb);



#endif /* LIB_H */

