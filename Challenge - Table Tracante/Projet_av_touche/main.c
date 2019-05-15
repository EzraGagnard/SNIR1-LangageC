#include <stdio.h>
#include <stdlib.h>
#include "Projet_av_touche.h"
#define NBCDE 56

int main() {

    int fdSerie;
    int nb = 28;

    fdSerie = ouvrirSerie("/dev/ttyACM0");
    configurerSerie(fdSerie, 115200);
    printf("La liaison série est configurée\n");

    lirePortSerieNbchar(fdSerie, nb);

    ordre(fdSerie);

    close(fdSerie);

    return 0;
}