/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ggagnard
 *
 * Created on 11 octobre 2018, 11:23
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int nombre = 5;
    int zeros;
    int sable;
    int nbSable;
    int nbZeros;

    int compteur = 1;

    nbZeros = 0;
    nbSable = nombre;

    while (nbSable > 0) {
        for (zeros = 0; zeros < nbZeros; zeros++) {
            printf("0 ");
        }
        for (sable = 0; sable < nbSable; sable++) {
            printf("%d ", compteur);
            compteur++;
        }
        for (zeros = 0; zeros < nbZeros; zeros++) {
            printf("0 ");
        }
        printf("\n");
        nbZeros = nbZeros + 1;
        nbSable = nbSable - 2;
    }
    nbZeros = nbZeros - 1;
    nbSable = nbSable + 2;

    while (nbSable <= nombre) {
        for (zeros = 0; zeros < nbZeros; zeros++) {
            printf("0 ");
        }
        for (sable = 0; sable < nbSable; sable++) {
            printf("%d ", compteur);
            compteur++;
        }
        for (zeros = 0; zeros < nbZeros; zeros++) {
            printf("0 ");
        }
        printf("\n");
        nbZeros = nbZeros - 1;
        nbSable = nbSable + 2;
    }

    return (EXIT_SUCCESS);
}
