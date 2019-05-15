/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ggagnard
 *
 * Created on 5 décembre 2018, 10:37
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p = NULL;
    int *q = NULL;

    q = tab;
    p = q;
    p++;
    *p = 10;

    for (int i = 0; i < 10; i++) {
        printf("tab[%d]: %d\n", i, /*tab[i]*/ *q);
        q++;
    }

    return (EXIT_SUCCESS);
}

/* La version avant que ca devienne compliqué
 * 
  int A = 10;
    int *p1 = NULL; // declaration et initialisation d'un pointeur sur int

    p1 = &A; //p prend pour valeur l'adresse de A

    int B;

    B = *p1; // B prend pour valeur le contenue adresser par p

    int *p2 = NULL; //declaration d'un deuxieme pointeur
    p2 = p1;
    
    printf("\np2 -> %p: %d",p2,*p2);
    printf("\np1 -> %p: %d",p1,*p1);
    
    //printf("adresse p: %p\n", p1);
    //printf("p1: %d\n", *p1);
    //printf("B: %d\n", B);
 */



/* La seconde version avant que ca devienne compliqué
 * 
 char phrase[25] = "Coucou les SNIR";
    int cpt = 0 ;
    char *ptr = NULL;

    ptr = phrase;


    while (*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;
        cpt++; //compte le nombre de caractere
    }
    printf("\nnombre de caractère: %d", cpt);
 */