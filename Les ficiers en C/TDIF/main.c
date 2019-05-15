/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ggagnard
 *
 * Created on 11 décembre 2018, 10:33
 */

#include "Lib.h"
/*
 * 
 */
int main(int argc, char** argv) {

    char nomFichier;
    char *lesOptionsDuMenu[10];
    int nbOptions;
    int indice;
    int choix;

    nbOptions=LireFichierMenu("menu.txt", lesOptionsDuMenu);
    for (indice = 0 ; indice < nbOptions ; indice++){
        printf("\t%d - %s ", indice +1, lesOptionsDuMenu[indice]);
    }
    printf("Votre choix:");
    scanf("%s",&choix);
    
    return (EXIT_SUCCESS);
}
