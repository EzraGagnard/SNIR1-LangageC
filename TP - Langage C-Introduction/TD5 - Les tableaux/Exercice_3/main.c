/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ggagnard
 *
 * Created on 12 novembre 2018, 08:15
 */

#include <stdio.h>
#include <stdlib.h>

#define TAILLE 5

/*
 * 
 */
int main(int argc, char** argv) {
    
    int tabATrier[TAILLE] = {5, 7, 2, 1, 4};
    int val, posTab, valMin = 0, posMin = 0;
    
    
    printf("\n\nLe Tableau tabATrier avant tri est: ");
    
    
    for (val = 0; val < TAILLE; val++) {
        printf("%d  ", tabATrier[val]);
    }
    
    printf("\n\n");
    
    
    for (val = 0; val < TAILLE; val++) {
        valMin = tabATrier[val];
        posMin = val;

        for (posTab = val; posTab < TAILLE; posTab++) {
            
            if (valMin > tabATrier[posTab]) {
                valMin = tabATrier[posTab];
                posMin = posTab;
            }
        }
        tabATrier[posMin] = tabATrier[val];
        tabATrier[val] = valMin;
    }
    
    
    printf("Le tableau tabATrier après tri est: ");
    
    for (val = 0; val < TAILLE; val++) {
        printf("%d  ", tabATrier[val]);
    }
    
    printf("\n\n\n");

    return (0);
}
