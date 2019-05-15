#include "Projet.h"

int ouvrirSerie(const char *device) {

    int fdSerie = 1;

    fdSerie = open(device, O_RDWR | O_NOCTTY);

    if (fdSerie == -1) {

        printf("pb d'ouverture : %s\n", strerror(errno));
        exit(EXIT_FAILURE);

    }

    return fdSerie;

}

void configurerSerie(int fdSerie, const int baud) {

    struct termios term;
    speed_t myBaud;

    switch (baud) {

        case 50: myBaud = B50;
            break;
        case 75: myBaud = B75;
            break;
        case 110: myBaud = B110;
            break;
        case 134: myBaud = B134;
            break;
        case 150: myBaud = B150;
            break;
        case 200: myBaud = B200;
            break;
        case 300: myBaud = B300;
            break;
        case 600: myBaud = B600;
            break;
        case 1200: myBaud = B1200;
            break;
        case 1800: myBaud = B1800;
            break;
        case 2400: myBaud = B2400;
            break;
        case 4800: myBaud = B4800;
            break;
        case 9600: myBaud = B9600;
            break;
        case 19200: myBaud = B19200;
            break;
        case 38400: myBaud = B38400;
            break;
        case 57600: myBaud = B57600;
            break;
        case 115200: myBaud = B115200;
            break;
        case 230400: myBaud = B230400;
            break;

        default:
            myBaud = B115200;

    }

    tcgetattr(fdSerie, &term);

    cfsetispeed(&term, B115200);
    cfsetospeed(&term, B115200);

    term.c_cflag |= (CLOCAL | CREAD);
    term.c_cflag &= ~PARENB;
    term.c_cflag &= ~CSTOPB;
    term.c_cflag &= ~CSIZE;
    term.c_cflag |= CS8;
    term.c_lflag &= ~ICANON;
    term.c_oflag = 0;

    tcsetattr(fdSerie, TCSANOW, &term);

}

void lirePortSerieNbchar(int fdSerie, int nb) {

    int n = 0;
    char buf[1];
    int nb_erreur;

    for (n = 0; n < nb; n++) {

        nb_erreur = read(fdSerie, buf, 1);

        if (nb_erreur == -1) {

            printf("Erreur de réception\n");
            exit(-1);

        }

        printf("%s", buf);

    }

}