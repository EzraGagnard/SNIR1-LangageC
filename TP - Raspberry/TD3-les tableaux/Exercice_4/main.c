/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ggagnard
 *
 * Created on 15 octobre 2018, 09:15
 */

#include <stdio.h>
#include <stdlib.h>
#include <senseHat.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int indice;
    int touche;

    uint16_t couleurs[8] = {ROUGE, VERT, BLEU, BLANC, JAUNE, ORANGE, MAGENTA, CYAN};
    uint16_t chenille[8];
    uint16_t aux;

    InitialiserLeds();
    InitialiserJoystick();

    touche = 0;

    for (indice = 0; indice < 8; indice++) {

        chenille[indice] = couleurs[indice];
    }
    do {
        touche = ScannerJoystick();

        aux = chenille[0];
        for (indice = 0; indice < 7; indice++) {

            chenille[indice] = chenille[indice + 1];
        }
        chenille[indice] = aux;

        for (indice = 0; indice < 8; indice++) {
            Allumer(0, indice, chenille[indice]);
            Allumer(indice,7, chenille[indice]);
            Allumer(7, indice, chenille[7 - indice]);
            Allumer(indice, 0, chenille[7 - indice]);

        }

        usleep(150000);
    } while (touche != KEY_ENTER);

    return (EXIT_SUCCESS);
}
