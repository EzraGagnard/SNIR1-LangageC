/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ggagnard
 *
 * Created on 5 novembre 2018, 08:19
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    int unEntier = 5;
    float unReel = 10.4;
    int entierEnPlus;

    printf("--------------|\n");
    printf("--- Entier ---|\n");
    printf("%d\n%4d\n%04d\n", unEntier, unEntier, unEntier);
    printf("\n---- Réel ----|\n");
    printf("%f\n %6.2f\n %.2e\n", unReel, unReel, unReel);
    printf("--------------|\n");

    scanf("%d", &entierEnPlus);
    printf("--------------|\n");
    printf("%d \n", entierEnPlus);
    printf("%d ", entierEnPlus);

    return 0;
    
}

