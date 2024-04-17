//Diseñar una solución programable de manera tal que las salidas A0,A2, A4 y A6 se
//activen si B0 está activo; y las salidas A1, A3,A5 y A7 se activen si B0 está inactivo.
#include "MKL25Z4.h"

int main {
    SIM -> SCGC5 |= SIM_SCGC5_PORTA_MASK | SIM_SCGC5_PORTB_MASK;
    for (int i=0;i<32;i++) {
        PORTA -> PCR[i] |= PORT_PCR_MUX(1);
        PORTB -> PCR[i] |= PORT_PCR_MUX(0);
        array act [] = {0, 2, 4, 6};
        array des [] = {1, 3, 5, 7};
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