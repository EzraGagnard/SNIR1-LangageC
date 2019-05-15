#include <stdio.h>
#include <stdlib.h>
#include "Projet.h"
#define NBCDE 56

int main() {

    char *gcode[NBCDE] = {"g90",
        "g0 z1",
        "g0 x30 y70",
        "g0 z0",
        "g0 x75 y70",
        "g0 x75 y100",
        "g0 x220 y100",
        "g0 x240 y70",
        "g0 x275 y70",
        "g0 x275 y40",
        "g0 x260 y40",
        "g3 x220 y40 i-20 j0 f200",
        "g0 z1",
        "g0 x240 y25",
        "g0 z0",
        "g2 x240 y25 i0 j15 f200",
        "g0 z1",
        "g0 x220 y40",
        "g0 z0",
        "g0 x95 y40",
        "g3 x55 y40 i-20 j0 f200",
        "g0 z1",
        "g0 x75 y25",
        "g0 z0",
        "g2 x75 y25 i0 j15 f200",
        "g0 z1",
        "g0 x55 y40",
        "g0 z0",
        "g0 x30 y40",
        "g0 x30 y70",
        "g0 z1",
        "g0 x75 y70",
        "g0 z0",
        "g0 x75 y60",
        "g0 z1",
        "g0 x155 y100",
        "g0 z0",
        "g0 x155 y40",
        "g0 z1",
        "g0 x240 y70",
        "g0 z0",
        "g0 x240 y60",
        "g0 z1",
        "g0 x85 y95",
        "g0 z0",
        "g0 x145 y95",
        "g0 x145 y70",
        "g0 x85 y70",
        "g0 x85 y95",
        "g0 z1",
        "g0 x165 y95",
        "g0 z0",
        "g0 x210 y95",
        "g0 x230 y70",
        "g0 x165 y70",
        "g0 x165 y95",
        "g0 z1",
        "M2",};

    int fdSerie;
    int nb = 28;
    int n;

    fdSerie = ouvrirSerie("/dev/ttyACM0");
    configurerSerie(fdSerie, 115200);
    printf("La liaison série est configurée\n");

    lirePortSerieNbchar(fdSerie, nb);

    for (n = 0; n < NBCDE; n++) {

        write(fdSerie, gcode[n], strlen(gcode[n]));
        write(fdSerie, "\r\n", 2);
        sleep(6);

    }

    close(fdSerie);

    return 0;
}

