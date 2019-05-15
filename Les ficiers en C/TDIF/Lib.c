/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Lib.h"

int LireFichierMenu(char *nomFichier, char *options[]){
    int nbCar;
    FILE *ficMenu;
    int indice = 0;
    
    ficMenu = fopen(nomFichier, "r");
    if(ficMenu == NULL)
    {
        perror("Erreur Ouverture du fichier");
        exit(errno);
    }
    
    
    char ligne[NB_CAR];
    while(fgets(ligne,NB_CAR,ficMenu)!= NULL)
    {
         nbCar = strlen(ligne);
         options[indice]= (char *)malloc(sizeof(char) * nbCar+1);
         strcpy(options[indice++],ligne);
    }
    fclose(ficMenu);
    return (indice);
}
void EcrireFichierConfig(char * nomFichier, char * config[], int nbItem){
    
    
    
}