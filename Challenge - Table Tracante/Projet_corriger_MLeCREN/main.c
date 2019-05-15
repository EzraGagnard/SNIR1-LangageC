/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: anthony
 *
 * Created on 28 novembre 2018, 21:09
 */

#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <sys/fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#define NBCDE 15

/*
 * 
 */

void readSerialUntil(int fd, char buffer[], char code) {
    char car;
    char buf[1];
    int indice = 0;
    int n;
    buf[0] = 0;
    do {
        n = read(fd, buf, 1);
        if (n == -1) {
            printf("Error = %s\n", strerror(errno));
            exit(errno);
        }
        if (n == 1) {
            buffer[indice++] = buf[0];
        }
    } while (buf[0] != code);
    buffer[indice] = 0;
    printf("%s\n", buffer);
}

int waitOk(int fd) {
    char buf[5];
    int retour = -1;
    readSerialUntil(fd, buf, 10);
    if (strcmp(buf, "ok\r\n") == 0) {
        retour = 1;
    }   
    return retour;
}

void lirePortSerieNbchar(int fd,int nb) {
    int n = 0;
    int compteur = 0;
    char buf[1];
    do { //\r\nGrbl 1.1g ['$' for help]\r\n
        n = read(fd, buf, 1);
        if (n == -1) {
            printf("Error = %s\n", strerror(errno));
            exit(errno);
        }
        if (n == 1) {
            compteur++;
        }
    } while (compteur != nb);
    printf("-> %d, %s \n", compteur, buf);
}

void sendCde(int fd, char cde[]) {
    int n;
    printf("%s,%d\n", cde, strlen(cde));
    n = write(fd, cde, strlen(cde));
    if (n == -1) {
        printf("Error = %s\n", strerror(errno));
        exit(errno);
    }
    n = write(fd, "\r\n", 2);
    if (n == -1) {
        printf("Error = %s\n", strerror(errno));
        exit(errno);
    }
}

int main(int argc, char** argv) {
    int fd;
    int retour;
    // char buf[30];
    int n;
    struct termios tty, orig;

    char *gcode[NBCDE] = {"g90", //coord absolu (cotes au mmm) 
        "g0 z1", // monte le crayon de 1mm
        "g0 x-9 y-9", //deplacement x y
        "g0 z0", //descend le crayon de 1mm
        "g0 x-9 y8", //trace une droite verticale
        "g2 x-5 y12 i4 j0 f200", // trace un arc de cercle sens horaire
        "g0 x8 y12",
        "g2 x12 y8 i0 j-4 f200",
        "g0 x12 y-9",
        "g2 x8 y-13 i-4 j0 f200",
        "g0 x-5 y-13",
        "g2 x-9 y-9 i0 j4 f200",
        "g0 z1", // monte le crayon de 1mm
        "g0 x0 y0", // retourne au depart
        "g0 z0"}; //descend le crayon de 1mm


    /* Ouverture de la liaison série */
    fd = open("/dev/ttyACM0", O_RDWR);
    if (fd == -1) {
        printf("pb ouverture: %s\n", strerror(errno));
        exit(errno);
    }
    printf("port ouvert");

    /* Lecture et sauvegarde des parametres courants */
    tcgetattr(fd, &tty);
    orig = tty;
    /* remplissage des champs de la structure termios*/
    cfsetispeed(&tty, B115200);
    cfsetospeed(&tty, B115200);
    tty.c_cflag |= (CLOCAL | CREAD);
    tty.c_cflag &= ~PARENB;
    tty.c_cflag &= ~CSTOPB;
    tty.c_cflag &= ~CSIZE;
    tty.c_cflag |= CS8;
    tty.c_lflag &= ~ICANON;
    tty.c_oflag = 0;



    /* appplication des nouveaux parametres */
    if (tcsetattr(fd, TCSANOW, &tty) < 0) {
        printf("impossible d'initialiser le port série\n");
    }
    /* lecture/ecriture/traitement sur la liaison série */

    
    lirePortSerieNbchar(fd,28);

    /*    
        for (n = 0; n < NBCDE; n++) {
            printf("commande N° %d : ", n);
            sendCde(fd, gcode[n]);
            waitOk(fd);
            waitOk(fd);
        }
        printf("\ngcode envoye\n");
     */
    n = 0;
    do {
        printf("commande N° %d : ", n);
        sendCde(fd, gcode[n]);
        retour = waitOk(fd);
        if (retour == 1) {
            retour = waitOk(fd);
        }
        n++;
    } while (retour == 1 && n < NBCDE);
    if (retour == 1) {
        printf("\ngcode envoye\n");
    } else {
        printf("\nerreur\n");
    }


    /* on remet l'etat initiale de la configuration du port*/
    if (tcsetattr(fd, TCSANOW, &orig) < 0) {
        printf("impossible d'initialiser le port série\n");
    }
    /* Fermeture port série*/

    if (close(fd) == -1) {
        printf("pb fermeture: %s\n", strerror(errno));
        exit(errno);
    }
    return (EXIT_SUCCESS);
}
