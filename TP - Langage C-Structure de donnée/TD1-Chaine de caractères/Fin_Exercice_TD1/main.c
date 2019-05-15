/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ggagnard
 *
 * Created on 12 novembre 2018, 08:08
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "compte.h"



#define TAILLEMAX 6
#define COLMAX 36
#define LONG 120000

int main(int argc, char** argv) {

    char phrase[LONG];

    printf("Entrer le texte: \n");
    gets(phrase);

    //_______________Exercice 4___________________________
/*
    char lettre = {'a'};

    printf("Dans cette phrase, il y a %d lettre %c", compte(phrase, lettre), lettre);


    //_______________Exercice 5___________________________
    printf("\nDans cette phrase, il y a %d voyelles", compteVoyelles(phrase));


    //_______________Exercice 6___________________________
    printf("\nDans cette phrase, il y a %d consonnes", compteConsonnes(phrase));


    //_______________Exercice 7___________________________
    printf("\nDans cette phrase, il y a %d mots", compteMot(phrase));


    //_______________Exercice 8___________________________

    char phraseInverse[LONG];

    printf("\n\nla phrase avant l'inversion est : %s", phrase);

    inverserPhrase(phrase, phraseInverse);
    printf("\n\nla phrase après l'inversion est : %s", phraseInverse);


    //_______________Exercice 9___________________________

    char phraseInvMajMin[LONG];

    inversionMajMin(phrase, phraseInvMajMin);
    printf("\nla phrase après l'inversin des minuscule et des majuscule est : %s", phraseInvMajMin);

*/
    //_______________Exercice 10__________________________  CA FONCTIONNE PAS, OH NOOOOOOOOOO !!!!!
    /*
        char codeMorse[COLMAX];
        int indice = 0;

      codeMorse(phrase, codeMorse);
        printf("\nLa phrase saisi donne en morse :\n\t");

        for (indice = 0; indice < strlen(phrase); indice++) {
            codeMorse(phrase[indice], codeMorse);
            printf("%s ", codeMorse);
}
printf("\n\n");
     */
    //_______________Exercice 11__________________________
/*
    char phraseOk[] = "bonjour";

    printf("\nVeuillez saisir le mot bonjour\n");
    scanf("%s", phrase);
    if (verifMessage(phrase, phraseOk) == 1) {
        printf("Ok\n");
    } else {
        printf("pas correct\n");
    }


    //_______________Exercice 12__________________________

    char debPhrase[] = "salut";

    int longDebPhrase;

    printf("saisir une phrase\n");
    scanf("%s", phrase);
    longDebPhrase = strlen(debPhrase);
    if (verifDebPhrase(phrase, debPhrase, longDebPhrase) == 1) {
        printf("debut de la phrase bon\n");
    } else {
        printf("mauvais debut de phrase\n");
    }

    //_______________Exercice 13__________________________

    char login[LONG];
    char loginOk[] = {"Touchard"};
    char mdp[LONG];
    char mdpOk[] = {"admin"};


    printf("saisir votre identifiant\n");
    scanf("%s", login);
    printf("saisir votre mot de passe\n");
    scanf("%s", mdp);
    if (verifLoginMdp(login, loginOk, mdp, mdpOk) == 1) {
        printf("Accès autorisé\n");
    } else {
        printf("Accès refusé");
    }
 */ 
 
        //_______________Exercice 14__________________________
    
    /* 
    char phraseTemp[LONG];
    
    printf("saisir phrase : \n");
    gets(phrase);
    
    reecriturePhrase(phrase, phraseTemp);
    
    printf("la phrase reecrite est: %s\n",phraseTemp);
     */
     
    //_______________Exercice 15__________________________

    char phraseTemp[LONG];
    
    int nbDifference = 0;
    
    gets(phrase);
    
    nbDifference = verifPalindrome(phrase, phraseTemp);
    
    if (nbDifference == 0) {
        printf("La phrase %s est un palindrome", phrase);
    } else {
        printf("la phrase %s n'est pas un palindrome et possède %d difference", phrase,nbDifference );
    }

    



    return (EXIT_SUCCESS);

}























/*
 * Texte utilisé
 Ah ! Non ! C'est un peu court, jeune homme !
On pouvait dire... oh ! Dieu ! ... bien des choses en somme...
En variant le ton, —par exemple, tenez :
Agressif : « moi, monsieur, si j'avais un tel nez,
Il faudrait sur le champ que je me l'amputasse ! »
Amical : « mais il doit tremper dans votre tasse :
Pour boire, faites-vous fabriquer un hanap ! »
Descriptif : « c'est un roc ! ... c'est un pic... c'est un cap !
Que dis-je, c'est un cap ? ... c'est une péninsule ! »
Curieux : « de quoi sert cette oblongue capsule ?
D'écritoire, monsieur, ou de boîte à ciseaux ? »
Gracieux : « aimez-vous à ce point les oiseaux
Que paternellement vous vous préoccupâtes
De tendre ce perchoir à leurs petites pattes ? »
Truculent : « ça, monsieur, lorsque vous pétunez,
La vapeur du tabac vous sort-elle du nez
Sans qu'un voisin ne crie au feu de cheminée ? »
Prévenant : « gardez-vous, votre tête entraînée
Par ce poids, de tomber en avant sur le sol ! »
Tendre : « faites-lui faire un petit parasol
De peur que sa couleur au soleil ne se fane ! »
Pédant : « l'animal seul, monsieur, qu'Aristophane
Appelle hippocampelephantocamélos
Dut avoir sous le front tant de chair sur tant d'os ! »
Cavalier : « quoi, l'ami, ce croc est à la mode ?
Pour pendre son chapeau c'est vraiment très commode ! »
Emphatique : « aucun vent ne peut, nez magistral,
T'enrhumer tout entier, excepté le mistral ! »
Dramatique : « c'est la Mer Rouge quand il saigne ! »
Admiratif : « pour un parfumeur, quelle enseigne ! »
Lyrique : « est-ce une conque, êtes-vous un triton ? »
Naïf : « ce monument, quand le visite-t-on ? »
Respectueux : « souffrez, monsieur, qu'on vous salue,
C'est là ce qui s'appelle avoir pignon sur rue ! »
Campagnard : « hé, ardé ! C'est-y un nez ? Nanain !
C'est queuqu'navet géant ou ben queuqu'melon nain ! »
Militaire : « pointez contre cavalerie ! »
Pratique : « voulez-vous le mettre en loterie ?
Assurément, monsieur, ce sera le gros lot ! »
Enfin parodiant Pyrame en un sanglot :
« Le voilà donc ce nez qui des traits de son maître
A détruit l'harmonie ! Il en rougit, le traître ! »
—Voilà ce qu'à peu près, mon cher, vous m'auriez dit
Si vous aviez un peu de lettres et d'esprit :
Mais d'esprit, ô le plus lamentable des êtres,
Vous n'en eûtes jamais un atome, et de lettres
Vous n'avez que les trois qui forment le mot : sot !
Eussiez-vous eu, d'ailleurs, l'invention qu'il faut
Pour pouvoir là, devant ces nobles galeries,
Me servir toutes ces folles plaisanteries,
Que vous n'en eussiez pas articulé le quart
De la moitié du commencement d'une, car
Je me les sers moi-même, avec assez de verve,
Mais je ne permets pas qu'un autre me les serve.
 */

