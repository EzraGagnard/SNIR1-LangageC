/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ggagnard
 *
 * Created on 15 octobre 2018, 10:22
 */

#include <stdio.h>
#include <stdlib.h>
#include <senseHat.h>

#define N NOIR
#define J JAUNE
#define V VERT
#define R ROUGE

/*
 * 
 */
int main(int argc, char** argv) {

    int ligne;
    int colonne;
    int touche;

    InitialiserLeds();
    InitialiserJoystick();

    touche = 0;
    
    uint16_t image1[8][8] = {
        {N, J, J, J, J, J, J, N},
        {J, V, J, J, J, J, V, J},
        {J, J, J, J, J, J, J, J},
        {J, J, J, V, V, J, J, J},
        {J, J, J, J, J, J, J, J},
        {J, J, V, J, J, V, J, J},
        {N, J, J, V, V, J, J, N},
        {N, N, J, J, J, J, N, N},
    };
    uint16_t image2[8][8] = {
        {N, J, J, J, J, J, J, N},
        {J, R, J, J, J, J, R, J},
        {J, J, J, J, J, J, J, J},
        {J, J, J, R, R, J, J, J},
        {J, J, J, J, J, J, J, J},
        {J, J, J, R, R, J, J, J},
        {N, J, R, J, J, R, J, N},
        {N, N, J, J, J, J, N, N},
    };

    do {
        touche = ScannerJoystick();
        
        for (ligne = 0; ligne < 8; ligne++) {
            for (colonne = 0; colonne < 8; colonne++) {
                usleep(800);
                Allumer(ligne, colonne, image1[ligne][colonne]);
            }
        }

        for (ligne = 0; ligne < 8; ligne++) {
            for (colonne = 0; colonne < 8; colonne++) {
                usleep(800);
                Allumer(ligne, colonne, image2[ligne][colonne]);
            }
        }
    } while (touche != KEY_ENTER);

    return (EXIT_SUCCESS);
}

