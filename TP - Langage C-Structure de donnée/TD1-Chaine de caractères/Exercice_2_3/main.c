/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ggagnard
 *
 * Created on 12 novembre 2018, 10:47
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

int main(int argc, char** argv) {


    //strlen
    char mot[100] = "Dov"; //Hanter
    char phrase[100];
    printf("\nEcrit un mot de 3 lettres: ");
    gets(phrase);
    printf("\nLe mot à %u lettres", strlen(phrase));
    if (strlen(phrase) == 7) {
        printf("\nPruzah Fahdon ! "); //Bien Ami
    } else
        printf("\nViik !"); //defaite


    //strcmp
    printf("\nMaintenant écrit le mot Dov: ");
    gets(phrase);
    if (strcmp(mot, phrase) == 0) {
        printf("\nPruzah Fahdon ! ");
    } else
        printf("\nViik !");


    //strncmp
    char str[][5] = {"Kein", "Liiv", "Slen"}; // Guerre, Dépérir , Chair
    int n;
    puts("\nJe recherche le mot Guerre");
    for (n = 0; n < 3; n++)
        if (strncmp(str[n], "Kexx", 2) == 0) {
            printf("\nfound %s", str[n]);
        }

    //strcpy
    char chaine1[] = "Ruvaak"; //corbeau
    char chaine2[100];
    char chaine3[100];
    strcpy(chaine2, chaine1);
    strcpy(chaine3, "Pruzah Fahdon ! ");
    printf("\nchaine1: %s\nchaine2: %s\nchaine3: %s\n", chaine1, chaine2, chaine3);


    return (EXIT_SUCCESS);
}
