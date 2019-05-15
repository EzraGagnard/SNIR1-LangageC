/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ggagnard
 *
 * Created on 1 octobre 2018, 10:42
 */


#include <stdio.h>
#include <stdlib.h>
#include <senseHat.h>
#include <unistd.h>

int main() {

    int colonne;
    int ligne;
    int touche;

    InitialiserLeds();
    InitialiserJoystick();

    /*
        do {
            for (colonne = 0; colonne <= 7; colonne++) {

                for (ligne = 0; ligne <= colonne; ligne++) {
                    Allumer(ligne, colonne, JAUNE);
                    Allumer(colonne, ligne, JAUNE);
                }
                usleep(200000);
                Effacer();
            }
            touche = ScannerJoystick();
        } while (touche != KEY_ENTER);
        return 0;
    }
     */


    touche = 0;

    do {
        ligne = 0;
        while (touche != KEY_ENTER && ligne <= 7) {
            Effacer();
            for (colonne = 0; colonne <= ligne; colonne++) {
                Allumer(ligne, colonne, BLEU);
                Allumer(colonne, ligne, BLEU);
            }
            usleep(200000);
            ligne = ligne + 1;

            touche = ScannerJoystick();
            
            do {
                touche = ScannerJoystick();
            } while (touche != KEY_ENTER && ligne != 8);
            touche = 0;
        }
    } while (touche != KEY_ENTER);



}
