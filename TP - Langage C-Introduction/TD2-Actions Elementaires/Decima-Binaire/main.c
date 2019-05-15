/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ggagnard
 *
 * Created on 27 septembre 2018, 11:41
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int decimal;
    decimal = 150;

    /* ********************* 128 *********************/
    if (decimal >= 128) {
        printf("1");
        decimal = decimal - 128;

    } else {
        printf("0");
    }

    /* ********************* 64 *********************/
    if (decimal >= 64) {
        printf("1");
        decimal = decimal - 64;

    } else {
        printf("0");
    }

    /* ********************* 32 *********************/
    if (decimal >= 32) {
        printf("1");
        decimal = decimal - 32;

    } else {
        printf("0");
    }

    /* ********************* 16 *********************/
    if (decimal >= 16) {
        printf("1");
        decimal = decimal - 16;

    } else {
        printf("0");
    }

    /* ********************* 8 *********************/
    if (decimal >= 8) {
        printf("1");
        decimal = decimal - 8;

    } else {
        printf("0");
    }

    /* ********************* 4 *********************/
    if (decimal >= 4) {
        printf("1");
        decimal = decimal - 4;

    } else {
        printf("0");
    }

    /* ********************* 2 *********************/
    if (decimal >= 2) {
        printf("1");
        decimal = decimal - 2;

    } else {
        printf("0");
    }

    /* ********************* 1 *********************/
    if (decimal >= 1) {
        printf("1");
        decimal = decimal - 1;

    } else {
        printf("0");
    }

    return (EXIT_SUCCESS);
}

