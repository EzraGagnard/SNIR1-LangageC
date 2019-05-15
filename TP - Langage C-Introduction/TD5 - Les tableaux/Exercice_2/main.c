/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ggagnard
 *
 * Created on 5 novembre 2018, 11:33
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define INDICE 7
/*
 * 
 */
int main(int argc, char** argv) {
    int indice;
    int memoire;
    int valeur[INDICE] = {10, 12, 45, 29, 31, 45, 5, 8};
    int tab;

    do {
        memoire = valeur[7];
        for(indice=6; indice >= 0; indice--){
            valeur[indice+1] = tab[indice];
        }
        valeur[0]= memoire;
    } while(1);

    return (EXIT_SUCCESS);
}