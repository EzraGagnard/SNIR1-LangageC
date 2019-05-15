#ifndef PROJET_AV_TOUCHE_H
#define PROJET_AV_TOUCHE_H
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <termios.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

int ouvrirSerie (const char *device);
void configurerSerie (int fdSerie, const int baud);
void lirePortSerieNbchar(int fdSerie, int nb);
void ordre(int fdSerie);

#ifdef __cplusplus
}
#endif

#endif /* PROJET_AV_TOUCHE_H */

