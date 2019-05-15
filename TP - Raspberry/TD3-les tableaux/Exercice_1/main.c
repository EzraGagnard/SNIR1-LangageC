/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ggagnard
 *
 * Created on 15 octobre 2018, 08:22
 */

#include <stdio.h>
#include <stdlib.h>
#include <senseHat.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int indice;
    uint16_t couleurs[8] = {ROUGE,VERT,BLEU,BLANC,JAUNE,ORANGE,MAGENTA,CYAN};
    
    InitialiserLeds ();
    
    for (indice=0; indice <8;indice++){
        Allumer(0,indice,couleurs[indice]);
    }
    
    return (EXIT_SUCCESS);
}
