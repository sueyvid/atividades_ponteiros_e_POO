#include <stdio.h>
#include <stdlib.h>

int main(void){
    int pulo[5] = {1, 2, 3, 4, 5};
    //qual expressao referencia o valor do terceiro elemento do vetor?
    /*
        *(pulo + 2); // valor do terceiro elemento
        *(pulo + 4); // valor do quinto elemento
        pulo + 4; // endereco do quinto elemento
        pulo + 2; // endereco do terceiro elemento
    */
    printf("\n*(pulo + 2) = %d", *(pulo + 2));
    printf("\n*(pulo + 4) = %d", *(pulo + 4));
    printf("\npulo + 4 = %p", pulo + 4);
    printf("\npulo + 2 = %p", pulo + 2);
}

/*
    Saída esperada:
    *(pulo + 2) = 3
    *(pulo + 4) = 5
    pulo + 4 = endereco do quinto elemento
    pulo + 2 = endereco do terceiro elemento
    Saída real:
    *(pulo + 2) = 3
    *(pulo + 4) = 5
    pulo + 4 = 0x7ffdc860f0b0
    pulo + 2 = 0x7ffdc860f0a8
*/