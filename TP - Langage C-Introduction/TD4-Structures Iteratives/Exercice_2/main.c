/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ggagnard
 *
 * Created on 15 octobre 2018, 08:37
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    float taillePopulation1;
    float taillePopulation2;
    float tauxPopulation1;
    float tauxPopulation2;
    int annee;

    annee = 0;

    
        do {
            taillePopulation2 = taillePopulation2*tauxPopulation2;
            taillePopulation1 = taillePopulation1 * tauxPopulation1;
            annee = annee++;
        }
    while (taillePopulation2 <= taillePopulation1);
    printf("annee = %d " ,annee);
    return (EXIT_SUCCESS);
}