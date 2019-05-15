/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ggagnard
 *
 * Created on 5 novembre 2018, 08:41
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    float denominateur = 3;
    float somme = 1;
    float signe = -1;
    float memo;
    
    do
    {
        memo = somme;
        somme = somme + (signe * (1/(float)denominateur));
        signe = signe* (-1);
        denominateur = denominateur + 2;     
    }
    while(fabs(somme-memo) > 0.0001);
    
    
    printf("%f\n", 4*somme);
    
    return (EXIT_SUCCESS);
}