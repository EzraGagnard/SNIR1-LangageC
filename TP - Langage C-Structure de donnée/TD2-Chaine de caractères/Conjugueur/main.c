/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ggagnard
 *
 * Created on 26 novembre 2018, 11:09
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "conjugue.h"

#define TAILLEMAX 255
/*
 * 
 */
int main(int argc, char** argv) {

    char verbe[TAILLEMAX];
    
    printf("Veuillez saisir un verbe à l'infinitif \n");
    scanf("%s", verbe);
    
    printf("\nVous avez saisi le verbe: %s\n", verbe);
    
    if(verifVerbeGroupe1(verbe)){
        printf("\nLe verbe '%s' appartient au premier groupe\n\n", verbe);
        printf("\nSa conjugaison au présent de l'indicatif est : \n");
        conjuguaisonPresent(verbe);
    }else {
        printf("\nLe verbe '%s' n'appartient pas au premier groupe !", verbe);
    }
    
    return (EXIT_SUCCESS);
}
