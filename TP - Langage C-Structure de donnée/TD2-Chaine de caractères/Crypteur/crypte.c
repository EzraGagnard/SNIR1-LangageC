/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <string.h>
#include <stdio.h>

#include "crypte.h"

int verifLettreMin(char message) {
    int lettreMin = 0;
    if (message >= 'a' && message <= 'z') {
        lettreMin = 1;
    }
    return lettreMin;
}

int verifLettreMaj(char message) {
    int lettreMaj = 0;
    if (message >= 'A' && message <= 'Z') {
        lettreMaj = 1;
    }
    return lettreMaj;
}

void mettreEnMaj(char message[]) {
    int indice;
    for (indice = 0; indice < strlen(message); indice++) {
        if (verifLettreMin(message[indice])) {
            message[indice] = message [indice] - 32;
        }

    }
}

void cryptage(char message[]) {

    char chaine[255] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char cryptage[255] = {'@', '8', '[', '0', '3', '{', '6', '#', '1', '}', ':', '7', 'W', 'Z', '*', '?', 'O', '%', '$', '-', 'V', '^', 'M', '+', '/', 'N'};
    int indice;
    mettreEnMaj(message);
    printf("\nMessage en majuscule sans accent: %s", message);
    for (indice = 0; indice < strlen(message); indice++) {
        if (verifLettreMaj(message[indice])){
            message[indice] = cryptage[message[indice] - 'A'];
        }
    }
}

void decryptage(char message[]) {
 char chaine[255] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char cryptage[255] = {'@', '8', '[', '0', '3', '{', '6', '#', '1', '}', ':', '7', 'W', 'Z', '*', '?', 'O', '%', '$', '-', 'V', '^', 'M', '+', '/', 'N'};
    int indice;
    int indiceCar;
    for (indice = 0; indice < strlen(message) -1; indice++) {
        if(message[indice] != 32) {
            indiceCar=0;
            while(cryptage[indiceCar] != message[indice]) {
                indiceCar++;
            }
            message[indice] = chaine[indiceCar];
        }
    }
}