/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ggagnard
 *
 * Created on 12 novembre 2018, 10:49
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    char phrase1[TAILLEMAX];
    char phrase2[TAILLEMAX];

    printf("saisir une phrase: ");
    gets(phrase1);

    printf("saisir une phrase: ");
    scanf("%s ", phrase2);

    printf("\nvous avez ecrit: %s ", phrase1);
    printf("\nvous avez ecrit: %s ", phrase2);

    return (EXIT_SUCCESS);
}