/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ggagnard
 *
 * Created on 4 octobre 2018, 09:57
 */

#include <stdio.h>
#include <stdlib.h>
#include <senseHat.h>
#include <unistd.h>

/*
 * 
 */

int main() {
    int ligne;
    int colonne;
    int touche;

    InitialiserLeds();
    InitialiserJoystick();
    touche = 0;

    while (1) 
    {
        do 
        {
            ligne = 0;
            for (colonne = 0; colonne <= 7; colonne++) 
            {
                Allumer(colonne, colonne, NOIR);
            }
            while (touche != KEY_ENTER && ligne <= 7) 
            {
                usleep(90000);
                for (colonne = 0; colonne <= ligne; colonne++) 
                {
                    Allumer(ligne, colonne, ORANGE);
                    Allumer(colonne, ligne, ORANGE);
                }
                usleep(90000);
                for (colonne = 0; colonne <= ligne; colonne++) 
                {
                    if (ligne == colonne) 
                    {
                        Allumer(ligne, colonne, ORANGE);
                    } 
                    else 
                    {
                        Allumer(ligne, colonne, NOIR);
                        Allumer(colonne, ligne, NOIR);
                    }
                }
                ligne++;
                touche = ScannerJoystick();
            }

        } 
        while (touche != KEY_ENTER);
        do 
        {
            touche = ScannerJoystick();
        } 
        while (ligne != 8 && touche != KEY_ENTER);
        touche = 0;
    }
    return 0;
}

