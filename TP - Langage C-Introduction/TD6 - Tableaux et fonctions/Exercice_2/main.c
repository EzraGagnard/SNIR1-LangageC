/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ggagnard
 *
 * Created on 12 novembre 2018, 08:34
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int val1;
    int val2;
    int choix;
    int resul;

    printf("Rentrez la première valeur:");
    scanf("%d", &val1);
    printf("Rentrez la deuxième valeur:");
    scanf("%d", &val2);

    printf("\n1)Faire la somme des valeurs \n");
    printf("2)Faire la soustraction des valeurs \n");
    printf("3)Faire le produit des valeurs \n");
    printf("Choisissez l'opération à effectuer \n");

    scanf("%d", &choix);

    switch (choix) {

        case 1:
            resul = val1 + val2;
            break;

        case 2:
            resul = val1 - val2;

            break;

        case 3:
            resul = val1 * val2;

            break;

    }
    printf("le résulat est %d \n",resul);
    return (EXIT_SUCCESS);
}
