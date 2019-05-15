/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   compte.h
 * Author: ggagnard
 *
 * Created on 12 novembre 2018, 10:17
 */

#ifndef COMPTE_H
#define COMPTE_H


#ifdef __cplusplus
extern "C" {
#endif

    //_______________Exercice 4___________________________
    int compte(char phrase[], char caractere);

    //_______________Exercice 5___________________________
    int verifVoyelle(char caractere);
    int compteVoyelles(char caractere[]);

    //_______________Exercice 6___________________________
    int verifCaractere(char caractere);
    int compteConsonnes(char caractere[]);

    //_______________Exercice 7___________________________
    int verifEsp(char caractere);
    int compteMot(char caractere[]);

    //_______________Exercice 8___________________________
    int inverserPhrase(char phrase[], char phraseInverse[]);

    //_______________Exercice 9___________________________
    int inversionMajMin(char phrase[], char phraseInvMajMin[]);

    //_______________Exercice 10__________________________  CA FONCTIONNE PAS, OH NOOOOOOOOOO !!!!!
    //void codeMorse(char caractere, char codeMorse[]);

    //_______________Exercice 11__________________________
    int verifMessage(char phrase[], char phraseOk[]);

    //_______________Exercice 12__________________________
    int verifDebPhrase(char phrase[], char debPhrase[], int longDePhraseVerif);

    //_______________Exercice 13__________________________
    int verifLoginMdp(char login[], char loginOk[], char Mdp[], char MdpOk[]);

    //_______________ -\_(:/)_/-__________________________
    int verifChiffre(char caractere);

    //_______________Exercice 14__________________________
    void reecriturePhrase(char phrase[], char phraseTemp[]);

    //_______________Exercice 15__________________________
    int verifPalindrome(char phrase[], char phraseTemp[]);


#ifdef __cplusplus
}
#endif

#endif /* COMPTE_H */

