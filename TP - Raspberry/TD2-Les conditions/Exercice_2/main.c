/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ggagnard
 *
 * Created on 4 octobre 2018, 11:35
 */


#include <stdio.h>
#include <stdlib.h>
#include <senseHat.h>
#include <unistd.h>

#define FAUX 0
#define VRAI 1

/*Chasse aux trésors*/

int main(int argc, char** argv) {

    srand(time(NULL));

    int preY;
    int preX;
    int posX = 4;
    int posY = 4;

    int tresorX = rand() % 8;
    int tresorY = rand() % 8;

    int touche;
    int sortie = FAUX;
    int NbTresor = 0;


    InitialiserLeds();
    InitialiserJoystick();

    do {
        preX = posX;
        preY = posY;

        Allumer(posX, posY, ROUGE);
        touche = ScannerJoystick();
        switch (touche) {
            case KEY_ENTER:
                sortie = VRAI;
                break;
            case KEY_RIGHT:
                posY = posY + 1;
                if (posY > 7) {
                    posY = 0;
                }
                break;
            case KEY_LEFT:
                posY = posY - 1;
                if (posY < 0) {
                    posY = 7;
                }
                break;
            case KEY_UP:
                posX = posX - 1;
                if (posX < 0) {
                    posX = 7;
                }
                break;
            case KEY_DOWN:
                posX = posX + 1;
                if (posX > 7) {
                    posX = 0;
                }
                break;

        }
        if (posX != preX || posY != preY) {
            Allumer(preX, preY, NOIR);
        }
        if (tresorX == posX && tresorY == posY) {

            NbTresor++;
            Allumer(posX, posY, VERT);
            usleep(700000);
            Allumer(posX, posY, BLANC);
            while (tresorX == posX && tresorY == posY) {

                tresorX = rand() % 8;
                tresorY = rand() % 8;
            }
        }
        
        Allumer(tresorX, tresorY, BLANC);

    } while (sortie == FAUX);
    printf("Score = %d", NbTresor);

    return (0);
}



/*Partie 1 de l'exo
 * 
 * int main(int argc, char** argv) {
    int posX = 4;
    int posY = 4;
    int touche;
    int sortie = FAUX;

    InitialiserLeds();
    InitialiserJoystick();

    do {
        Allumer(posX, posY, ROUGE);
        touche = ScannerJoystick();
        switch (touche) {
            case KEY_ENTER:
                sortie = VRAI;
                break;
            case KEY_RIGHT:
                posY++;
                break;
            case KEY_LEFT:
                posY--;
                break;
            case KEY_UP:
                posX--;
                break;
            case KEY_DOWN:
                posX++;
                break;

        }
    }
    while (sortie == FAUX);

    return (0);
}
 * 
 */
