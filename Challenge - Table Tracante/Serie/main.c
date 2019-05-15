#include <stdio.h>
#include <stdlib.h>
#include "Serie.h"

int main() {

    
    int fdSerie;
    char message[1000];
    
    fdSerie = ouvrirSerie ("/dev/ttyS0");    
    configurerSerie(fdSerie, 9600);
    printf("La liaison série est configurée\n");
    
    
    recevoirMessage(fdSerie,message,' ');
    printf("Message reçu : %s",message);
    return (EXIT_SUCCESS);
    envoyerCaractere(fdSerie,'A');
    envoyerCaractere(fdSerie,'\n'); 
    
    return (EXIT_SUCCESS);
}
