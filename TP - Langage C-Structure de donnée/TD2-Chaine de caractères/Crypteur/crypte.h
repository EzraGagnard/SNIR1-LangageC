/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   crypte.h
 * Author: ggagnard
 *
 * Created on 3 décembre 2018, 08:04
 */

#ifndef CRYPTE_H
#define CRYPTE_H

#ifdef __cplusplus
extern "C" {
#endif

    void cryptage(char message[]);
    void decryptage(char message[]);
    void mettreEnMaj(char message[]);
    int verifLettreMin(char message);
    int verifLettreMaj(char message);



#ifdef __cplusplus
}
#endif

#endif /* CRYPTE_H */

