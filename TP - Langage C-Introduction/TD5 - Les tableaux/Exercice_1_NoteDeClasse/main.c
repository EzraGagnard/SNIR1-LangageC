/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ggagnard
 *
 * Created on 5 novembre 2018, 10:14
 */

#include <stdio.h>
#include <stdlib.h>
#define NB_ELEVES 5

/*
 * 
 */
int main(int argc, char** argv) {


    float notes[NB_ELEVES];

    int ind;

    float NoteSupp = 0;
    float somme = 0;
    float noteMin;
    float noteMax;
    float moyenne;

    for (ind = 0; ind < NB_ELEVES - 1; ind++) {
        printf("Note de l'élève n°%d : ", ind + 1);
        scanf("%f", &notes[ind]);
    }
    noteMin = notes[0];
    noteMax = notes[0];
    printf("\n");
    for (ind = 0; ind < NB_ELEVES - 1; ind++) {
        printf("L'éleve n° %d a: %2.1f/20\n", ind+1, notes[ind]);

        if (notes[ind] >= 10) {
            NoteSupp++;
        }

        somme = somme + notes[ind];

        if (noteMin > notes[ind]) {
            noteMin = notes[ind];
        }
        if (noteMax < notes[ind]) {
            noteMax = notes[ind];
        }

    }
    printf("\n");
    moyenne = somme / NB_ELEVES;
    printf("le nombre de note égale ou supérieur a dix est de %2f \n", NoteSupp);
    printf("la moyenne de classe est de %2.1f/20\n", moyenne);
    printf("la note la plus basse est %2.1f/20\n", noteMin);
    printf("la noter la plus élevée est %2.1f/20\n", noteMax);


    return (EXIT_SUCCESS);
}

