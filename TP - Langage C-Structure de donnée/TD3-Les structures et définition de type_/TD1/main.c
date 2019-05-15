/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ggagnard
 *
 * Created on 3 décembre 2018, 09:38
 */

#include <stdio.h>
#include <stdlib.h>

#define TAILLEMAX 255

#include "panno.h"
/*
 * 
 */

     /*
typedef struct {
    char typeBois[TAILLEMAX];
    unsigned int largeur;
    unsigned int longueur;
    unsigned int epaisseur;
} panneau;
*/

int main(int argc, char** argv) {
    panneau *descriptionPanneau;

    descriptionPanneau = creePanneauPtr();
    afficherPanneauPtr(descriptionPanneau);
    volumePtr(descriptionPanneau);
    free(descriptionPanneau);
    return (EXIT_SUCCESS);
}
