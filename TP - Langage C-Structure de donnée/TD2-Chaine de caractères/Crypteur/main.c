/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ggagnard
 *
 * Created on 3 décembre 2018, 08:04
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "crypte.h"

#define TAILLE 500

/*
 * 
 */

int main(int argc, char** argv) {
    // char caractere[255]= {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
    // char cryptage[255]= {"@","8","[","0","3","{","6","#","1","}",":","7","W","Z","*","?","O","%","$","-","V","^","M","+","/","N"};  
    char message[TAILLE];
    int choix;
    char car;
    
    printf("Programme de Cryptage/Décryptage de message\n");
    printf("\nPour crypter un message: choisir 1");
    printf("\nPour décrypter un message: choisir 2");
    printf("\nQuel choix voulez vous faire ?");
    scanf("%d", &choix);
    getchar();
    switch(choix) {
        case 1: printf("\n\nVeuillez saisir le message à crypter: ");
        fgets(message, TAILLE, stdin);
        cryptage(message);
        printf("Message crypté: %s\n", message);
        break;
        case 2: printf("\n\nVeuillez saisir le message à décrypter:");
        fgets(message, TAILLE, stdin);
        decryptage(message);
        printf("\n\nMessage décrypté: %s\n", message);
        break;
    }
    return (EXIT_SUCCESS);
}