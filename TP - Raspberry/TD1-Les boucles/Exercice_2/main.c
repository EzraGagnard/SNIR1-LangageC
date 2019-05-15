/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ggagnard
 *
 * Created on 1 octobre 2018, 10:13
 */

#include <stdio.h>
#include <stdlib.h>
#include <senseHat.h>
#include <unistd.h>

/*
 * int main() {

    int colonne;
    int ligne;
    InitialiserLeds();


    for (colonne = 0; colonne <= 7; colonne++) {
        sleep(1);
        Effacer();
        for (ligne = 0; ligne <= 7; ligne++) {
            Allumer(ligne, colonne, BLEU);
        }
    }


    return 0;
}
 */


int main(int argc, char** argv) {

    InitialiserLeds();
    int colonne;
    int ligne;
    
    for (ligne = 0; ligne <= 7; ligne++) {
        usleep(100000);
        Effacer();
        for (colonne = 0; colonne <= 7; colonne++) {
            Allumer(colonne, ligne, ORANGE);
            Allumer(ligne, colonne, ORANGE);
        }

    }
    for (ligne = 7; ligne >= 0; ligne--) {
        usleep(100000);
        Effacer();
        for (colonne = 7; colonne >= 0; colonne--) {
            Allumer(colonne, ligne, ORANGE);
            Allumer(ligne, colonne, ORANGE);
        }

    }
    return 0;
}