//Diseñar una solución programable de manera tal que las salidas A0, A1, A2 y A3 se
//activen si B0 está activo; y las salidas A4, A5, A6 y A7 se activen si B0 está inactivo.
#include "MKL25Z4.h"

int main {
    SIM -> SCGC5 |= SIM_SCGC5_PORTA_MASK | SIM_SCGC5_PORTB_MASK;
    for (int i=0;i<32;i++) {
        PORTA -> PCR[i] |= PORT_PCR_MUX(1);
        PORTB -> PCR[i] |= PORT_PCR_MUX(0);
        array act [] = {0, 1, 2, 3};
        array des [] = {4, 5, 6, 7};
    }
    while (1){
        int llave PTB -> PDIR & (1 << 0);
        if(llave == 1){
            for(i=0;i<4;i++){
                PTA -> PSOR |= (1 u << act[i]);
                PTA -> PSOR |= (0 u << des[i]);
            }
        }
        else if(llave == 0){
            for(i=0;i<4;i++){
                PTA -> PSOR |= (0 u << act[i]);
                PTA -> PSOR |= (1 u << des[i]);
            }
        }
    }
        return 0;
    }