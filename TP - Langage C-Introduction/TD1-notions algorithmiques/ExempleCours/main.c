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
écrire : "Entrez une valeur numérique : " lire : valeurNum écrire : "Entrez une valeur entière positive : " lire : entierPositif Affectation
resultat  0 Arithmétique
faire
resultat  resultat + valeurNum entierPositif  entierPositif - 1 tant que entierPositif > 0 Exemple
écrire : resultat fin

 * Created on 27 septembre 2018, 10:44
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int valeurNum;
    int entierPositif;
    int resultat;
    valeurNum = 2;
    entierPositif = 4;
    resultat = 0;
    do {
        resultat = resultat + valeurNum;
        entierPositif = entierPositif - 1;
    } while (entierPositif > 0);

    printf("resultat: %d", resultat);
    return (EXIT_SUCCESS);
}

