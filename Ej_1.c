//Diseñar una solución programable de manera tal que en el Puerto A se reflejen los
//estados del Puerto B.
#include "MKL25Z4.h"

int main {
    SIM -> SCGC5 |= SIM_SCGC5_PORTA_MASK | SIM_SCGC5_PORTB_MASK;
    for (int i=0;i<32;i++) {
        PORTA -> PCR[i] |= PORT_PCR_MUX(1);
        PORTB -> PCR[i] |= PORT_PCR_MUX(0);
    }
    while (1) {
        for (i=0; i<32;i++) {
            int Valor = PTB -> PDIR & (1 << i);
            PTA -> PSOR |= (Valor u << i);
        }
    }
}
