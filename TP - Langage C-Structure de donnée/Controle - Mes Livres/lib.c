/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <math.h>
#include <string.h>

#include "lib.h"


//********************************************************************************** typeLivre 

typeLivre *creerLivre() {

    typeLivre *livre;
    livre = (typeLivre *) malloc(sizeof (typeLivre));

    //------------ Titre 
    printf("Donnez le titre du livre  : \n");
    scanf("%s", livre->titre);
    //------------ Auteur
    printf("Donnez l'auteur du livre : \n");
    scanf("%s", livre->auteurs);
    //------------ Annee
    printf("Donnez l'année de publication du livre : \n");
    scanf("%d", livre->annee);
    //------------ Type/Genre
    printf("indiquez le nombre de genre du livre\n");
    scanf("%u", &livre->nbGenre);
    choisirGenres(livre, livre->nbGenre);
    //------------ Prix
    printf("Donnez le prix du livre : \n");
    scanf("%2.2f", livre->prix);
    
    //------------ Identifiant
    printf("donnez es 9 premiers numéro de l'identifiant ISBN du livre : \n");
    scanf("%d", &livre->identifiant);
    cleISBN(livre->identifiant);
    //------------ Quantité
    printf("Donnez le nombre de livre : \n");
    scanf("%d", livre->quantite);
    getchar();
    return livre;
}

//********************************************************************************** modifierUneFiche

void modifierUneFiche(typeLivre *tab[], int indice) {

    //------------ Titre 
    printf("Donnez le titre du livre  : \n");
    scanf("%s", tab[indice]->titre);
    //------------ Auteur
    printf("Donnez l'auteur du livre : \n");
    scanf("%s", tab[indice]->auteurs);
    //------------ Annee
    printf("Donnez l'année de publication du livre : \n");
    scanf("%d", tab[indice]->annee);
    //------------ Type/Genre
    printf("indiquez le nombre de genre du livre\n");
    scanf("%u", &tab[indice]->nbGenre);
    choisirGenres(tab[indice], tab[indice]->nbGenre);
    //------------ Prix
    printf("Donnez le prix du livre : \n");
    scanf("%2.2f", tab[indice]->prix);
    
    //------------ Identifiant
    printf("donnez l'identifiant ISBN du livre : \n");
    scanf("%d", &tab[indice]->identifiant);
    //------------ Quantité
    printf("Donnez le nombre de livre : \n");
    scanf("%d", tab[indice]->quantite);
}

//********************************************************************************** afficheUnLivre

void afficheUnLivre(typeLivre * livre) {
    unsigned int indGenre;

    //------------ Titre 
    printf("le titre du livre est : %s\n", livre->titre);
    //------------ Auteur
    printf("l'auteur du livre est : %s\n", livre->auteurs);
    //------------ Annee
    printf("l'année de publication du livre est : %d\n", livre->annee);
    //------------ Type/Genre
    printf("le nombre de genre du livre est : %d\n", livre->nbGenre);
    printf("Le/Les genre du livre est : \n");
    for (indGenre = 0; indGenre < livre->nbGenre; indGenre++) {
        afficherGenre(livre->genreLitt[indGenre]);
    }
    //------------ Prix
    printf("Le prix du livre est : %f\n", livre->prix);
    //------------ Identifiant
    printf("\n\tLe numero ISBN du livre est : %d\n", livre->identifiant);
    //------------ Quantité
    printf("Le nombre de livre est : %d\n", livre->quantite);
}


//********************************************************************************** choisirGenres

void choisirGenres(typeLivre *livre, int nbGenre) {
    int choixGenre = 0;
    int indiceGenre;
    printf("\t\tChoisir un genre :\n");
    printf("\t\t1 ---> Roman\n");
    printf("\t\t2 ---> Policier\n");
    printf("\t\t3 ---> BD\n");
    printf("\t\t4 ---> Jeunesse\n");
    printf("\t\t5 ---> Loisirs\n");
    printf("\t\t6 ---> Sciences\n");
    for (indiceGenre = 0; indiceGenre < nbGenre; indiceGenre++) {
        printf("choix genre n°%d: ", indiceGenre + 1);
        scanf("%d", &choixGenre);
        getchar();
        switch (choixGenre) {
            case 1:
                livre->genreLitt[indiceGenre] = ROMAN;
                break;
            case 2:
                livre->genreLitt[indiceGenre] = POLICIER;
                break;
            case 3:
                livre->genreLitt[indiceGenre] = BD;
                break;
            case 4:
                livre->genreLitt[indiceGenre] = JEUNESSE;
                break;
            case 5:
                livre->genreLitt[indiceGenre] = LOISIRS;
                break;
            case 6:
                livre->genreLitt[indiceGenre] = SCIENCES;
                break;
        }
    }
}

//********************************************************************************** cleISBN

char cleISBN(char *codeISBN) {

    int sommeCle;
    int cle;
    int i = 1;
    int ind=0;

    int car = codeISBN[ind];

    //somme des numero de la cle
    for (ind = 0; ind < strlen(codeISBN); ind++) {
        if (car <= 9) {
            i = i + 1;
            sommeCle = codeISBN[ind]*(i);
        }
    }
    //division euclidienne

    cle = sommeCle % 11;

    printf("L'identifiant est : %d -%d\n", codeISBN, cle);
    //verificationISBN;

    return cleISBN;

}

//********************************************************************************** verificationISBN (TEST)
/*
int verificationISBN(char *codeISBN) {
    int cle;
    int retour;
    cle = codeISBN[strlen(codeISBN) - 1];

    if (cle <= 9) {

        retour = 1;

    } else {
        retour = 0;
    }
    return retour;
}
 */

/*
int main() {
    printf("%c\n", cleISBN("2-225-80068"));
    printf("%d\n", verificationISBN("2-101-48491-5"));
    printf("%d\n", verificationISBN("2-266-11156-6"));

    return 0;
}
 */

//********************************************************************************** afficherMenu

void afficherMenu() {

    typeLivre * livre[maxLivre];

    //------------ Variable /Fini
    int compteurLivre = 0;
    int indLivre;
    char choix;

    //------------ Affichage du Menu /Fini
    do {
        printf("\t\tMenu de gestion \n");
        printf("\t\tA: Ajouter une fiche livre\n");
        printf("\t\tQ: Quitter le menu\n");
        if (compteurLivre != 0) {
            printf("\t\tA: Ajouter une fiche livre\n");
            printf("\t\tS: supprimer une fiche livre\n");
            printf("\t\tM: Modifier une fiche livre\n");
            printf("\t\tV: Voir le contenu d'une fiche livre\n");
            printf("\t\tL: Voir le contenu de toutes les fiches livre\n");
            printf("\t\tP: Actualiser le prix des livres\n");
            printf("\t\tR: Recherche d'un livre\n");
            printf("\t\tT: Calculer le prix du stock de livre\n");
        }
        printf("\t\tQ: Quitter le menu\n");
        printf("\t\tIndiquez choix :\n");
        scanf("%c\n", &choix);
        getchar();
        switch (choix) {

                //------------ Ajout de fiche livre /Fini
            case 'A':
                system("clear");
                printf("\t\t Ajouter un livre\n");
                compteurLivre = ajouterUnLivre(livre, compteurLivre);
                break;

                //------------ Suppression de fiche livre /Fini
            case 'S':
                system("clear");
                printf("\t\t supprimer une fiche\n");
                indLivre = rechercherLivre(livre, compteurLivre);
                if (indLivre >= 0) {
                    compteurLivre = supprimerUnLivre(livre, indLivre, compteurLivre);
                } else {
                    printf("Pas de fiche avec ce numero\n");
                };
                break;

                //------------ Modification de fiche livre /Fini
            case 'M':
                system("clear");
                printf("\t\t Modifier une fiche\n");
                indLivre = rechercherLivre(livre, compteurLivre);
                if (indLivre >= 0) {
                    modifierUneFiche(livre, indLivre);
                } else {
                    printf("Pas de fiche avc cette clé ISBN\n");
                }
                break;

                //------------ Voir fiche livre /Fini
            case 'V':
                system("clear");
                printf("\t\t Voir le contenu d'une fiche \n");
                indLivre = rechercherLivre(livre, compteurLivre);
                if (indLivre >= 0) {
                    afficheUnLivre(livre[indLivre]);
                } else {
                    printf("Pas de fiche avc cette clé ISBN\n");
                }
                break;

                //------------ Voir toutes les fiches livre /Fini
            case 'L':
                system("clear");
                printf("\t\t Voir le contenu de l'ensemble des fiches\n");
                afficherLivres(livre, compteurLivre);
                break;

                //------------ Actualiser le prix des livres /Fini
            case 'P':
                system("clear");
                printf("\t\t Actualiser le prix des livres\n");
                actualiserPrix(livre, compteurLivre);
                break;

                //------------ Recherche d'un livre------------  //Non commencé
            case 'R':
                system("clear");
                printf("\t\t Rechercher un livre\n");
                rechercherLivre(livre,compteurLivre);
                break;
                
                //------------ Calculer le prix du stock de livre------------  //Non commencé
                printf("\t\t Calculer le prix du stock\n");
                // calculerPrixEnStock(livre,compteurLivre);
                
            case 'T':
                system("clear");
                printf("\t\t Ajouter un livre\n");
                compteurLivre = ajouterUnLivre(livre, compteurLivre);
                break;


            default:
                system("clear");
                printf("Erreur de choix , recommencez : \n");
                printf("\n\n");
        }
    } while (choix != 'Q');
}

//********************************************************************************** ajouterUnLivre

int ajouterUnLivre(typeLivre * tab[], int nb) {

    tab[nb] = creerLivre();
    nb++;
    return nb;
}

//********************************************************************************** supprimerUnLivre

int supprimerUnLivre(typeLivre *tab[], int indLivre, int nb) {
    int indice;

    if (indLivre >= 0) {
        printf("Suppression de la fiche index n°%d\n", indLivre);
        free(tab[indLivre]);

        for (indice = indLivre; indice < nb - 1; indice++) {
            tab[indice] = tab[indice + 1];
        }
        nb--;
    }
    printf("Le nombre de fiches après suppression est de %d\n", nb);
    return nb;
}

//********************************************************************************** afficherAdherents

void afficherLivres(typeLivre *livre[], int nb) {
    int indLivre;
    for (indLivre = 0; indLivre <= nb; indLivre++) {
        printf("La fiche du livre est : %d\n", indLivre + 1);
        afficheUnLivre(livre[indLivre]);
    }
}

//********************************************************************************** afficherGenre

void afficherGenre(genre genreLitt) {
    char *tabGenre[genreMax] = {"roman", "Policier", "BD", "Jeunesse", "loisirs", "sciences"};
    printf("%s  ", tabGenre[genreLitt]);
}

//********************************************************************************** actualiserPrix

void actualiserPrix(double taxe1, double taxe2, double *prix) {

    taxe1 = 5.5 / 100;
    taxe2 = 19.6 / 100;
    *prix = 24.9;

    double prixSTaxes;
    double nvPrix;

    prixSTaxes = *prix - *prix * taxe1;
    double round(double prixSTaxes);
    printf("Le prix sans taxes: %2.2f\n", prixSTaxes);

    nvPrix = prixSTaxes + prixSTaxes * taxe2;
    double round(double nvPrix);
    printf("Le nouveau prix: %2.2f\n", nvPrix);

}

//********************************************************************************** rechercherLivre
int rechercherLivre(typeLivre *livre[], int nb) {
    unsigned int ISBNreche;
    int indice;
    int indLivre = -1;

    printf("Veuillez saisir l'ISBN du livre\n");
    scanf("%u", &ISBNreche);
    getchar();

    for (indice = 0; indice < nb; indice++) {
        if (ISBNreche == (livre[indice]->identifiant)) {
            printf("Un livre avec cette ISBN %d correspo,d , fiche n°%d\n", livre[indice]->identifiant, indice + 1);
            indLivre = indice;
        }
       afficheUnLivre(livre[indLivre]);
    }
    return indLivre;
}