/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "biblioLivre.h"

char cleISBN(char *codeISBN){
    int i;
    int somme = 0;
    int cle;
    int rang = 1;
    for(i=0;i<strlen(codeISBN);i++){
        if(codeISBN[i]>='0' && codeISBN[i]<='9'){
           somme += rang*(codeISBN[i]-'0');
           rang++;
        }
        cle = somme%11;
        if(cle==10){
            return 'X';
        }else{
            return cle + '0'; // retourne le code ASCII correspondant à la clé
        }
    }
    
}