//Diseñar una solución programable de manera tal que en el Puerto A se obtenga el
//resultado de la operación suma entre el Puerto B y el literal 0x23.
#include "MKL25Z4.h"

int main {
    SIM -> SCGC5 |= SIM_SCGC5_PORTA_MASK | SIM_SCGC5_PORTB_MASK;
    for (int i=0;i<32;i++) {
        PORTA -> PCR[i] |= PORT_PCR_MUX(1);
        PORTB -> PCR[i] |= PORT_PCR_MUX(0);
    }
    while (1){
        int estado = PTB -> PDIR;
        int suma = estado + 0x23;
        PTA -> PSOR |= suma;
    }
        return 0;
    }
