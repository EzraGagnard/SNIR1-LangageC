/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ggagnard
 *
 * Created on 18 octobre 2018, 09:09
 */

#include <stdio.h>
#include <stdlib.h>
#include <senseHat.h>
#include <unistd.h>

#define FAUX 0
#define VRAI 1

/*
 * 
 */
int main(int argc, char** argv) {
    
    srand(time(NULL));

    InitialiserJoystick();
    InitialiserLeds();

    int colonne;
    int ligne;
    int touche;
    int sortie = FAUX;

    // Lumiere centrale de la raquette
    int posX = 7;
    int posY = 3;

    //Lumière de la baballe
    int balX = 6;
    int balY = 2;
    int depX = 1;
    int depY = 1;
    int memoX;
    int memoY;

    //affiche le mur de brique  ETAPE 1
    for (ligne = 0; ligne <= 7; ligne++) {
        Allumer(0, ligne, ROUGE);
        Allumer(1, ligne, ROUGE);
    }

    // ETAPE 2
    do {
        //Allume raquette a la position de base     
        Allumer(posX, posY, BLEU);
        Allumer(posX, posY + 1, BLEU); //Allumer lumière droite de la raquette
        Allumer(posX, posY - 1, BLEU); //Allumer lumière gauche de la raquette

        touche = ScannerJoystick();

        switch (touche) {
            case KEY_ENTER:
                sortie = VRAI;
                break;
                //***********************Si on appuie a droite du Joystick
            case KEY_RIGHT:
                Allumer(posX, posY - 1, NOIR);
                posY = posY + 1;
                if (posY > 6) {
                    posY = 6;
                }
                break;
                //************************Si on appuie a gauche du Joystick
            case KEY_LEFT:
                Allumer(posX, posY + 1, NOIR);
                posY = posY - 1;
                if (posY < 1) {
                    posY = 1;
                }
                break;
        }
        //ETAPE 3

        //Allumer la baballe
        Allumer(balX, balY, JAUNE);

        //Detection de couleur pour la baballe

        int couleur;
        uint16_t ObtenirPixel(int X, int Y);

        memoX = balX;
        memoY = balY;

        Allumer(memoX, memoY, NOIR);
        balX = balX + depX;
        balY = balY + depY;
        couleur = ObtenirPixel(balX, balY);

        if (couleur == ROUGE) 
        {
            depX = depX * +1;
            balX = memoX;
            depY = (rand() % 3) - 1;
        }
        if (balY == 0) 
        {
            depX = depX * +1;
            balX = memoX;
            depY = (rand() % 3) - 1;
        }
        if (balY == 7) 
        {
            depX = (rand() % 3) - 1;
            balX = memoX;
            depY = depY * -1;
        }
        if (couleur == BLEU) 
        {
            depX = depX * -1;
            balX = memoX;
            depY = (rand() % 3) - 1;
        }

        Allumer(balX, balY, JAUNE);

    } while (touche != KEY_ENTER);
    usleep(60000);
    return (0);
}

