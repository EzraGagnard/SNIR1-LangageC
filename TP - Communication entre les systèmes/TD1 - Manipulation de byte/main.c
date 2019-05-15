/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ggagnard
 *
 * Created on 4 décembre 2018, 11:41
 */

#include <stdio.h>
#include <termios.h>
#include <sys/fcntl.h>
#include <stdlib.h>
#include <unistd.h>

void main(void) {

    printf("CS5 %x \n", CS5);
    printf("CS6 %x \n", CS6);
    printf("CS7 %x \n", CS7);
    printf("CS8 %x \n", CS8);

    printf("PARENB %x \n", PARENB);

    printf("B0 %x \n", B0);
    printf("B50 %x \n", B50);
    printf("B75 %x \n", B75);
    printf("B110 %x \n", B110);
    printf("B134 %x \n", B134);
    printf("B150 %x \n", B150);
    printf("B200 %x \n", B200);
    printf("B300 %x \n", B300);
    printf("B600 %x \n", B600);
    printf("B1200 %x \n", B1200);
    printf("B1800 %x \n", B1800);
    printf("B2400 %x \n", B2400);
    printf("B4800 %x \n", B4800);
    printf("B9600 %x \n", B9600);
    printf("B19200 %x \n", B19200);
    printf("B38400 %x \n", B38400);
    printf("B57600 %x \n", B57600);
    printf("B115200 %x \n", B115200);
    printf("B230400 %x \n", B230400);

    printf("CRTSCTS %x \n", CRTSCTS);

    exit(0);

}
