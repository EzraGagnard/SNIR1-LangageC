/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: nderouelle
 *
 * Created on 16 janvier 2019, 10:20
 */

#include "biblioLivre.h"

/*
 * 
 */
int main(int argc, char** argv) {
    
    char test;
    test=cleISBN("2-225-80068");
    printf("%c",test);
    
    return (EXIT_SUCCESS);
}

