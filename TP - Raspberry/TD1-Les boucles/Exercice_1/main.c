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
int main(int argc, char** argv) {
    
    InitialiserLeds();

    Allumer(0,0,BLEU);
    Allumer(0,1,ROUGE);
    Allumer(1,0,VERT);
    Allumer(0,7,ORANGE);
    Allumer(7,0,JAUNE);
    Allumer(7,7,BLANC);

    return 0;
}

