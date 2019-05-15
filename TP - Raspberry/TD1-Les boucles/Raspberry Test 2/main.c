/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ggagnard
 *
 * Created on 1 octobre 2018, 09:22
 */

#include <stdio.h>
#include <stdlib.h>
#include <senseHat.h>

/*
 * 
 */
int main() {

    int colonne;
    int ligne;
    InitialiserLeds();

    for (colonne = 0; colonne <= 7; colonne=colonne+2) {
        for (ligne = 1; ligne <= 4; ligne++) {
            Allumer(ligne, colonne, BLEU);
        }
    }


    return 0;
}

