/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LS.h
 * Author: ggagnard
 *
 * Created on 10 décembre 2018, 10:15
 */

#ifndef LS_H
#define LS_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>//read write open
#include <string.h>// strlen
#include <fcntl.h>
#include <errno.h>// erreur systeme
#include <termios.h>// strucutre pour configuration serie
#include <sys/ioctl.h>// fonctions pour acceder au driver


int OuvrirPort(const char *device);
void configurerSerie(int fd, const int baud);
void recevoirMessage(int fd, char *message, char fin);
void flush(const int fd);
void envoyerCaractere(const int fd, const unsigned char c);
void envoyerMessage(const int fd, const char *s);


#ifdef __cplusplus
}
#endif

#endif /* LS_H */

