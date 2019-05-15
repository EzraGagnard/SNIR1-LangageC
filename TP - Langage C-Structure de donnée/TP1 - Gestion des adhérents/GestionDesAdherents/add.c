/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>
#include "add.h"

/*
adherent *creeUnAdherent(){
    adherent *infoAdherent;
    infoAdherent = (adherent *) malloc(sizeof (adherent));
    printf("nom:");
    scanf("%s", &infoAdherent->nom);
    printf("prenom:");
    scanf("%s", &infoAdherent->prenom);
    printf("idBadge:");
    scanf("%s", infoAdherent->idBadge);
    printf("idAct:");
    scanf("%d", &(infoAdherent->idAct));
    return infoAdherent;
}
*/

adherent *creeAdherent(int numeroAdherent){
    
      adherent *infoAdherent;
    infoAdherent = (adherent *) malloc(sizeof (adherent));
    printf("nom %d:",numeroAdherent+1);
    scanf("%s", &infoAdherent->nom);
    printf("prenom %d:",numeroAdherent+1);
    scanf("%s", &infoAdherent->prenom);
    printf("idBadge %d:",numeroAdherent+1);
    scanf("%s", infoAdherent->idBadge);
    printf("idAct %d:",numeroAdherent+1);
    scanf("%d", &(infoAdherent->idAct));
    return infoAdherent;
}

void afficherAdherent(adherent *infoAdherent[], int nbAdherent){
    int indAdherent;
    for (indAdherent = 0; indAdherent < nbAdherent; indAdherent++){
        printf("nom de l'adhérent %d: %s\n",indAdherent+1, infoAdherent[indAdherent]->nom);
        printf("\t\tprénom de l'adhérent %d: %s\n",indAdherent+1, infoAdherent[indAdherent]->prenom);
        printf("\t\tnuméro de badge de l'adhérent %d: %s\n",indAdherent+1, infoAdherent[indAdherent]->idBadge);
        printf("\t\tnuméro d'activité de l'adhérent %d: %d\n",indAdherent+1, infoAdherent[indAdherent]->idAct);
    }
    
}