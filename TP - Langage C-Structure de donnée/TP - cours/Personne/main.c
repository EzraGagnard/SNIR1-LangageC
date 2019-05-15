/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ggagnard
 *
 * Created on 28 novembre 2018, 10:58
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 255

typedef struct {
    char nom[MAX];
    char prenom[MAX];
    unsigned int annee;
    float taille;
    float poids;

} typePersonne;

void afficherPersonne (typePersonne toto){
    
    printf("nom      : %s\n", toto.nom);
    printf("annee    : %d\n", toto.annee);
    
}
/*
typePersonne creePersonne() {

    typePersonne toto;

    printf("Donnez le nom: \n");
    scanf("%s", toto.nom);
    
    printf("Donnez l'année de naissance: \n");
    scanf("%d", &toto.annee);

    return toto;

}

typePersonne *creePersonnePtr(){
    typePersonne *toto;
    toto=(typePersonne *)malloc(sizeof(typePersonne));
    printf("Donner un nom : \n");
    scanf("%s", toto->nom);
    printf("Donner l'année de naissance : \n");
    scanf("%d", &toto->annee);
    
    return toto;
}

/*
 * 
 */
/*
int main(int argc, char** argv) {
    
    typePersonne robert, jumeau, raymonde;
        
    robert = *creePersonnePtr();
    

    /*typePersonne robert, jumeau, raymonde;
    
    robert = creePersonne();
    raymonde = creePersonne();
    
    afficherPersonne(robert);
    
    jumeau=raymonde;
    afficherPersonne(jumeau);
     */
    
    /*
    strcpy(robert.nom, "Bidochon");
    strcpy(robert.prenom, "Robert");
    robert.annee = 1954;
     */
    

typePersonne creePersonne(){
    typePersonne toto;
    printf("Donner un nom : \n");
    scanf("%s", toto.nom);
    printf("Donner l'année de naissance : \n");
    scanf("%d", &toto.annee);
    
    return toto;
}

typePersonne *creePersonnePtr(){
    typePersonne *toto;
    toto=(typePersonne *)malloc(sizeof(typePersonne));
    printf("Donner un nom : \n");
    scanf("%s", toto->nom);
    printf("Donner l'année de naissance : \n");
    scanf("%d", &toto->annee);
    
    return toto;
}

int main(int argc, char** argv) {
    
    typePersonne robert, jumeau, raymonde;
        
    robert = *creePersonnePtr();
    raymonde = creePersonne();
    
    afficherPersonne(robert);
    jumeau=raymonde;
    afficherPersonne(jumeau);
    

    return (EXIT_SUCCESS);
}

