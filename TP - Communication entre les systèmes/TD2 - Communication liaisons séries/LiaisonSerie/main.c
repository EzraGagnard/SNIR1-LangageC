/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ggagnard
 *
 * Created on 10 décembre 2018, 10:15
 */

#include <stdio.h>
#include <stdlib.h>

#include "LS.h"

/*
 * 
 */
int main(int argc, char** argv) {

    int fdSerie;
    char message[1000];

    fdSerie = OuvrirPort("/dev/ttyS0");
    configurerSerie(fdSerie, 9600);
    printf("la liaison serie est configurée\n");

    recevoirMessage(fdSerie, message, ' ');
    printf("Message reçu : %s\n", message);
    envoyerMessage(fdSerie, "Bien reçu\n");
    return (EXIT_SUCCESS);

    envoyerCaractere(fdSerie, 'A');
    envoyerCaractere(fdSerie, '\n');
    return (EXIT_SUCCESS);
}
