/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ggagnard
 *
 * Created on 12 décembre 2018, 10:25
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * 
 */

char *moisNom(int numero){
    char *mois[12] = {"janvier","février","mars","avril",
                        "mai","juin","juillet","août",
                        "septembre","octobre","novembre","décembre"};
    int nbCar;
    char *ptrMois;
    nbCar = strlen(mois[numero-1]);
    ptrMois = (char *)malloc(nbCar * sizeof(char));
    strcpy(ptrMois,mois[numero-1]);
    return ptrMois;
}

char *supprimerE(char *message){
    char *messageSansE;
    messageSansE = (char *)malloc(strlen(message) * sizeof(char));
    
    for(;*message != '\0';message++){
        if(*message != 'e'){
            *messageSansE = *message;
        }
    }
    return messageSansE;
}

int main(int argc, char** argv) {
    
    char *ptrCar;
    int *ptrEntier;
    float *ptrReel;
    void *adrPtrCar;
    void *adrPtrEntier;
    void *adrPtrReel;
    
    char *chaine = "12345678000A";
    int i;
    
    ptrCar = chaine ;
    adrPtrCar = &ptrCar;
    
    ptrEntier = (int *)chaine ;
    adrPtrEntier = &ptrEntier;
    
    ptrReel = (float *)chaine ;
    adrPtrReel = &ptrReel;
    
    int numero;

    for(i=0; i<3; i++){
        
	printf("ptrCar = %p\t*ptrCar = %c\n",ptrCar,*ptrCar);
	printf("ptrEntier = %p\t*ptrEntier = %d\n",ptrEntier,*ptrEntier);
	printf("ptrReel = %p\t*ptrReel = %f\n",ptrReel,*ptrReel);
                
	ptrCar++;
	ptrEntier++;
	ptrReel++;
	printf("\n");
    }
    printf("adrPtrCar = %p\n",adrPtrCar);
    printf("adrPtrEntier = %p\n",adrPtrEntier);
    printf("adrPtrReel = %p\n",adrPtrReel);
    
    printf("Donnez un numéro de mois : \n");
    scanf("%d", &numero);
    printf("%s", moisNom(numero));
    printf("%s", supprimerE(moisNom(numero)));
    
    return (EXIT_SUCCESS);
}