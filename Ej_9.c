//Diseñar una solución programable de manera tal que en el Puerto A se obtenga el
//resultado de la operación nand entre el Puerto B y el literal 0x23.
#include "MKL25Z4.h"

int main{
    SIM -> SCG5 |= SIM_SCGC5_PORTA_MASK |  SIM_SCGC5_PORTB_MASK; 
    PORTA -> PDDR |= 0xFFFFFFFF;
    PORTB -> PDDR |= 0x00000000;
while {
    int estado = PTB -> PDIR;
    int nand = ~(estado & 0x23);
    PTA -> PSOR |= nand;
}
    return 0;
}