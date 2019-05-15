/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#include "adh.h"


//********************************************************************************** typeAdherent *creerAdherent()

typeAdherent *creerAdherent() {

    typeAdherent *personne;
    personne = (typeAdherent *) malloc(sizeof (typeAdherent));

    printf("Donnez le nom de l'adherent  : \n");
    scanf("%s", personne->nom);
    printf("Donnez le prénom de l'adherent : \n");
    scanf("%s", personne->prenom);
    printf("Donnez le jour de naissance de l'adherent\n");
    scanf("%d", &(personne->dateNaissance).jour);
    printf("Donnez le mois de naissance de l'adherent\n");
    scanf("%d", &(personne->dateNaissance).mois);
    printf("Donnez l'année de naissance de l'adherent\n");
    scanf("%d", &(personne->dateNaissance).annee);
    printf("indiquez le nombre d'activitée de l'adherent\n");
    scanf("%u", &personne->nbActivite);
    choisirActivites(personne, personne->nbActivite);
    printf("donnez le numero de license de l'adherent\n");
    scanf("%u", &personne->numLicence);
    getchar();
    return personne;
}

//********************************************************************************** afficherMenu

void afficherMenu() {

    typeAdherent * adherent[MAX];

    int compteurAdherent = 0;
    int numLicense;
    int indAdherent;
    char choix;
    do {
        printf("\t\tMenu de gestion \n");
        printf("\t\tA: Ajouter une fiche Adherent\n");
        if (compteurAdherent != 0) {
            printf("\t\tS: supprimer une fiche\n");
            printf("\t\tM: Modifier une fiche\n");
            printf("\t\tV: Voir le contenu d'une fiche\n");
            printf("\t\tL: Voir le contenu de toutes les fiches\n");
            printf("\t\tE: supprimer toutes les fiches\n");
            printf("\t\tW: Sauvegarder les fiches\n");
        }
        printf("\t\tQ: Quitter le menu\n");
        printf("\t\tIndiquez choix\n");
        scanf("%c\n", &choix);
        getchar();
        switch (choix) {
            case 'A':
                system("clear");
                printf("\t\t Ajouter un adherent\n");
                compteurAdherent = ajouterUnAdherent(adherent, compteurAdherent);
                break;

            case 'S':
                system("clear");
                printf("\t\t supprimer une fiche\n");
                indAdherent = numAdherent(adherent, compteurAdherent);
                if (indAdherent >= 0) {
                    // compteurAdherent = supprimerUnAdherent(adherent, adherent[indAdherent]->numLicence, compteurAdherent);
                    compteurAdherent = supprimerUnAdherent(adherent, indAdherent, compteurAdherent);
                } else {
                    printf("Pas de fiche avc ce numero de license\n");
                };
                break;

            case 'M':
                system("clear");
                printf("\t\t Modifier une fiche\n");
                indAdherent = numAdherent(adherent, compteurAdherent);
                if (indAdherent >= 0) {
                    modifierUneFiche(adherent, indAdherent);
                } else {
                    printf("Pas de fiche avc ce numero de license\n");
                }
                break;

            case 'V':
                system("clear");
                printf("\t\t Voir le contenu d'une fiche \n");
                indAdherent = numAdherent(adherent, compteurAdherent);
                if (indAdherent >= 0) {
                    afficherUnAdherent(adherent[indAdherent]);
                } else {
                    printf("Pas de fiche avc ce numero de license\n");
                }
                break;

            case 'L':
                system("clear");
                printf("\t\t Voir le contenu de l'ensemble des fiches\n");
                afficherAdherents(adherent, compteurAdherent);
                break;

            case 'E':
                system("clear");
                printf("\t\t Supprimer toutes les fiches\n");
                supprimerToutLesAdherent(adherent, compteurAdherent);
                break;

            case 'W':
                system("clear");
                printf("\t\t Sauvegarder les fiches\n");
                sauvegarderAdherents(adherent, compteurAdherent);
                break;

            case 'Q':
                system("clear");
                printf("\t\t Quitter");
                printf("\n\n");
                break;

            default:
                system("clear");
                printf("Erreur de choix , recommencez : \n");
                printf("\n\n");
        }
    } while (choix != 'Q');
}

//********************************************************************************** afficherDate

void afficherDate(typeDate date) {
    printf("La date de naissance de l'adherent est:");
    printf("%02d/%02d/%d", date.jour, date.mois, date.annee);
}

//********************************************************************************** afficherActivite

void afficherActivite(sports activite) {
    char *tabSports[SMAX] = {"natation", "basketball", "aviron", "athletisme", "tennis"};
    printf("%s  ", tabSports[activite]);
}

//********************************************************************************** afficherUnAdherent

void afficherUnAdherent(typeAdherent * ad) {
    unsigned int indActivite;

    printf("le nom de l'Adherent est : %s\n", ad->nom);
    printf("le prenom de l'Adherent est : %s\n", ad->prenom);
    afficherDate(ad->dateNaissance);
    printf("\tle nombre d'activité de l'adherent est : %u\n", ad->nbActivite);
    printf("\tActivité pratiquées par l'adherent: \n");
    for (indActivite = 0; indActivite < ad->nbActivite; indActivite++) {
        afficherActivite(ad->activite[indActivite]);
    }
    printf("\n\tLe numero de license de l'adherent est : %04u\n", ad->numLicence);
}

//********************************************************************************** afficherAdherents

void afficherAdherents(typeAdherent *ad[], int nb) {
    int indAdherent;
    for (indAdherent = 0; indAdherent <= nb; indAdherent++) {
        printf("Fiche de l'adherent: %d\n", indAdherent + 1);
        afficherUnAdherent(ad[indAdherent]);
    }
}

/*void afficherAdherent(typeAdherent * infoAdherent[], int nbAdherent) {
    int indAdherent;
    for (indAdherent = 0; indAdherent < nbAdherent; indAdherent++) {
        printf("le nom de l'Adherent est : %s", infoAdherent[indAdherent]->nom);
        printf("\nle prenom de l'Adherent est : %s", infoAdherent[indAdherent]->prenom);
        printf("\nLe jour de naissance de l'Adherent est : %d", infoAdherent[indAdherent]->dateNaissance.jour);
        printf("\nLe mois de naissance de l'Adherent est : %d", infoAdherent[indAdherent]->dateNaissance.mois);
        printf("\nL'annee de naissance de l'Adherent est : %d", infoAdherent[indAdherent]->dateNaissance.annee);
        printf("\nle nombre d'activité de l'adherent est : %u", infoAdherent[indAdherent]->activite);
    }
}*/

//********************************************************************************** choisirActivites

void choisirActivites(typeAdherent *ad, int nbActivites) {
    int choixSport = 0;
    int indiceSport;
    printf("\t\tChoisir un sport :\n");
    printf("\t\t1 ---> natation\n");
    printf("\t\t2 ---> basketball\n");
    printf("\t\t3 ---> aviron\n");
    printf("\t\t4 ---> athletisme\n");
    printf("\t\t5 ---> tennis\n");
    for (indiceSport = 0; indiceSport < nbActivites; indiceSport++) {
        printf("choix sport n°%d: ", indiceSport + 1);
        scanf("%d", &choixSport);
        getchar();
        switch (choixSport) {
            case 1:
                ad->activite[indiceSport] = NATATION;
                break;
            case 2:
                ad->activite[indiceSport] = BASKETBALL;
                break;
            case 3:
                ad->activite[indiceSport] = AVIRON;
                break;
            case 4:
                ad->activite[indiceSport] = ATHLETISME;
                break;
            case 5:
                ad->activite[indiceSport] = TENNIS;
                break;
        }
    }
}

//********************************************************************************** ajouterUnAdherent

int ajouterUnAdherent(typeAdherent * tab[], int nb) {

    tab[nb] = creerAdherent();
    nb++;
    return nb;
}

//********************************************************************************** numAdherent

int numAdherent(typeAdherent *ad[], int nb) {
    unsigned int numSaisi;
    int indice;
    int indAdherent = -1;

    printf("\t\tIndiquez les 4 chiffres du numero de license\n");
    scanf("%u", &numSaisi);
    getchar();

    for (indice = 0; indice < nb; indice++) {
        if (numSaisi == (ad[indice]->numLicence)) {
            printf("\t\tNumero de license %u trouvé , fiche n°%d\n", ad[indice]->numLicence, indice + 1);
            indAdherent = indice;
        }
    }
    return indAdherent;
}

//********************************************************************************** supprimerUnAdherent

int supprimerUnAdherent(typeAdherent *tab[], int indAdherent, int nb) {
    int indice;

    if (indAdherent >= 0) {
        printf("Suppression de la fiche index n°%d\n", indAdherent);
        free(tab[indAdherent]);

        for (indice = indAdherent; indice < nb - 1; indice++) {
            tab[indice] = tab[indice + 1];
        }
        nb--;
    }
    printf("Le nombre de fiches après suppression est de %d\n", nb);
    return nb;
}

/*int supprimerUnAdherent(typeAdherent *tab[], int nro, int nb) {
    int indice;
    int indAdherent;
    printf("le nombre de fiches avant suppression est de %d\n", nb);
    for (indice = 0; indice < nb; indice++) {
        if (nro == (tab[indice]->numLicence)) {
            printf("Fiche avec license n°%d trouvée\n", nro);
            indAdherent = indice;
        }
    }
    if (indAdherent >= 0) {
        printf("Suppression de la fiche avec la licence n° %d\n", nro);
        free(tab[indAdherent]);
        for (indice = indAdherent; indice < nb - 1; indice++) {
            tab[indice] = tab[indice + 1];
        }
        nb--;
    }
    printf("Le nombre de fiches après suppression est de %d\n", nb);
    return nb;
}*/

//********************************************************************************** suppprimerToutLesAdherents

int supprimerToutLesAdherent(typeAdherent * tab[], int nb) {
    int indice;
    int nbAdherent = nb;
    for (indice = 0; indice < nb; indice++) {
        free(tab[indice]);
        nbAdherent--;
    }
    return nbAdherent;
}

//********************************************************************************** modifierUneFiche

void modifierUneFiche(typeAdherent *tab[], int indice) {

    printf("\t nouveau nom en majuscules: ");
    scanf("%s\n", tab[indice]->nom);
    printf("\t nouveau prenom : ");
    scanf("%s\n", tab[indice]->prenom);
    printf("\t nouveau jour de naissance de l'adherent: ");
    scanf("%d\n", &(tab[indice]->dateNaissance).jour);
    printf("\t nouveau mois de naissance de l'adherent: ");
    scanf("%d\n", &(tab[indice]->dateNaissance).mois);
    printf("\t nouvelle année de naissance de l'adherent: ");
    scanf("%d\n", &(tab[indice]->dateNaissance).annee);
    printf("\t nouveau nombre d'activitée de l'adherent: ");
    scanf("%u\n", &tab[indice]->nbActivite);
    choisirActivites(tab[indice], tab[indice]->nbActivite);
    printf("\t nouveau numero de license de l'adherent: ");
    scanf("%u\n", &tab[indice]->numLicence);
}

//********************************************************************************** sauvegarderAdherents

void sauvegarderAdherents(typeAdherent *tab[], int nbAdherent) {
    FILE *fic;
    int retour;
    int i;

    //ouverture du fichier en ecriture/creation
    fic = fopen("fichieradherent", "w+");
    if (fic == NULL) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }

    retour = fwrite(&nbAdherent, sizeof (int), 1, fic);

    if (retour != 1) {
        printf("erreur d'écriture avec fwrite\n");
        exit(retour);
    }

    //ecriture dans le fichier des adherents
    for (i = 0; i < nbAdherent; i++) {
        retour = fwrite(tab[i], sizeof (typeAdherent), 1, fic);
        if (retour != 1) {
            printf("erreur d'écriture avec fwrite\n");
            exit(retour);
        }
    }

    //fermeture fichier
    retour = fclose(fic);
    if (retour == EOF) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    printf("\nFichiers adherents sauvegardés\n");
}
//********************************************************************************** chargerAdherents
int chargerAdherents(typeAdherent *tab[ ]) {



    // return nbAdherent;
}