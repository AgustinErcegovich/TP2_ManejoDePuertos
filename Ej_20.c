/*Diseñar una solución programable de manera tal que las salidas A0 y A1 se activen si
B0 está activo, las salidas A2 y A3 se activen si B1 está activo, las salidas A4 y A5 se activen
si B2 está activo, las salidas A6 y A7 se activen si B3 está activo.*/
#include "MKL25Z4.h"

int main {
    SIM -> SCGC5 |= SIM_SCGC5_PORTA_MASK | SIM_SCGC5_PORTB_MASK;
    for (int i=0;i<32;i++) {
        PORTA -> PCR[i] |= PORT_PCR_MUX(1);
        PORTB -> PCR[i] |= PORT_PCR_MUX(0);
        array ac [] = {0, 1};
        array ad [] = {2, 3};
        array acu [] = {4, 5};
        array as [] = {6, 7};
    }
    while (1){
        int llave PTB -> PDIR & (1 << 0);
        int llave1 PTB -> PDIR & (1 << 1);
        int llave2 PTB -> PDIR & (1 << 2);
        int llave3 PTB -> PDIR & (1 << 3);
        if((llave == 1) && (llave1 == 0) && (llave2 == 0) && (llave3 == 0)){
            for(i=0;i<1;i++){
                PTA -> PSOR |= (1 u << ac[i]);
                PTA -> PSOR |= (0 u << ad[i]);
                PTA -> PSOR |= (0 u << acu[i]);
                PTA -> PSOR |= (0 u << as[i]);
            }
        }
        else if((llave == 0) && (llave1 == 1) && (llave2 == 0) && (llave3 == 0)){
            for(i=0;i<1;i++){
                PTA -> PSOR |= (0 u << ac[i]);
                PTA -> PSOR |= (1 u << ad[i]);
                PTA -> PSOR |= (0 u << acu[i]);
                PTA -> PSOR |= (0 u << as[i]);
            }
        }
        else if((llave == 0) && (llave1 == 0) && (llave2 == 1) && (llave3 == 0)){
            for(i=0;i<1;i++){
                PTA -> PSOR |= (0 u << ac[i]);
                PTA -> PSOR |= (0 u << ad[i]);
                PTA -> PSOR |= (1 u << acu[i]);
                PTA -> PSOR |= (0 u << as[i]);
            }
        }
        else if((llave == 0) && (llave1 == 0) && (llave2 == 0) && (llave3 == 1)){
            for(i=0;i<1;i++){
                PTA -> PSOR |= (0 u << ac[i]);
                PTA -> PSOR |= (0 u << ad[i]);
                PTA -> PSOR |= (0 u << acu[i]);
                PTA -> PSOR |= (1 u << as[i]);
            }
        }
    }
        return 0;
    }