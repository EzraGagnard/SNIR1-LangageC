/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ggagnard
 *
 * début
écrire : "entrez un nombre positif"
lire : nombreLu
coefficient  2 * nombreLu - 1
Somme  0
faire
somme  somme + coefficient
coefficient  coefficient – 2
tant que coefficient ≥ 1
écrire : somme
fin
 * 
 * 
 * Created on 27 septembre 2018, 11:12
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int nombreLu;
    int coefficient;
    int somme;
    nombreLu = 3;
    coefficient = 2 * nombreLu - 1;
    somme = 0;

    do {
        somme = somme + coefficient;
        coefficient = coefficient - 2;
    } while (coefficient >= 1);
    printf("somme = %d", somme);


    return (EXIT_SUCCESS);
}

