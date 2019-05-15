#ifndef SERIE_H
#define SERIE_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> //read write open
#include <string.h> //strlen
#include <fcntl.h>
#include <errno.h> //erreurs systemes
#include <termios.h> //structure pour configuration serie
#include <sys/ioctl.h> //fonction pour acceder aux drivers


#ifdef __cplusplus
extern "C" {
#endif

int ouvrirSerie (const char *device);
void configurerSerie (int fd, const int baud);
void recevoirMessage (int fd, char *message, char fin);
void flush (const int fd);
void envoyerCaractere (const int fd, const unsigned char c);
void envoyerMessage (const int fd, const char *s);

#ifdef __cplusplus
}
#endif

#endif /* SERIE_H */

