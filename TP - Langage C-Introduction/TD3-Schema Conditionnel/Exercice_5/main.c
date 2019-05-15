/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 * 
 */

/* 
 * File:   main.c
 * Author: ggagnard
 *
 * Created on 11 octobre 2018, 10:26
 * TP3 exo 5 sur les val
 * 
 */


#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    
    int valeur1 = 8;
    int valeur2 = 10;
    int valeur3 = 12;
    int valeur4 = 14;

    if (valeur1 <= valeur2 && valeur1 <= valeur3 && valeur1 <= valeur4) 
    {
        printf("valeur1 = %d", valeur1);
    } 
    else 
    {
        if (valeur2 <= valeur1 && valeur2 <= valeur3 && valeur2 <= valeur4) 
        {
            printf("valeur2 = %d", valeur2);
        } 
        else 
        {
            if (valeur3 <= valeur1 && valeur3 <= valeur2 && valeur3 <= valeur4) 
            {
                printf("valeur3 = %d", valeur3);
            }
            else 
            {
                printf("valeur4 = %d", valeur4);
            }

        }
    }


    return (EXIT_SUCCESS);
}
