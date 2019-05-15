#ifndef PROJET_H
#define PROJET_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include <termios.h>
#include <sys/ioctl.h>

#ifdef __cplusplus
extern "C" {
#endif

int ouvrirSerie (const char *device);
void configurerSerie (int fdSerie, const int baud);
void lirePortSerieNbchar(int fdSerie, int nb);
void readSerialUntil (int fdSerie, char *message, char fin);
int waitOk(int fdSerie);

#ifdef __cplusplus
}
#endif

#endif /* PROJET_H */

