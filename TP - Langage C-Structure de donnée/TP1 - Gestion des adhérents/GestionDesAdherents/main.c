/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ggagnard
 *
 * Created on 3 décembre 2018, 09:07
 */
#include <stdio.h>
#include <stdlib.h>

#define TAILLEMAX 50000

#include "add.h"
/*
 * 
 */

    
    int main(int argc, char** argv) {
   // adherent *adherent;
   // adherent = creeAdherent();
    adherent * adherent[TAILLEMAX];
    int nbAdherent = 0 ;
    int indiceAdherent;
    int choix = 0;
    
    do{
        printf("\n\n\tQue voulez vous faire ?\n");
        printf("\t 1 -----> Ajouter un adhérent\n");
        printf("\t 2 -----> Afficher un adhérent\n");
        printf("\t 3 -----> Quitter\n");
        printf("Votre choix:");
        scanf("%d",&choix);
        
        switch(choix) {
            case 1: adherent[nbAdherent] = creeAdherent(nbAdherent);
            nbAdherent++;
            break;
            case 2: afficherAdherent(adherent,nbAdherent);
            break;
            case 3: printf("\nSaisie terminée\n\n");
        }
        
    } while (choix < 3);
    
    
    for(indiceAdherent = 0; indiceAdherent < nbAdherent; indiceAdherent++) { //liberation de la mémoire
        free(adherent[indiceAdherent]);
    }
    
    
    return (EXIT_SUCCESS);
}
