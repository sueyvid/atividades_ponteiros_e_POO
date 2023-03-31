#include <stdio.h>
#include <stdlib.h>

int main(void){
    float vet[5] = {1.1,2.2,3.3,4.4,5.5};
    float *f;
    int i;
    f = vet;
    printf("contador/valor/valor/endereco/endereco");
    for(i = 0 ; i <= 4 ; i++){
        printf("\ni = %d",i);
        printf("vet[%d] = %.1f",i, vet[i]);
        printf("*(f + %d) = %.1f",i, *(f+i));
        printf("&vet[%d] = %X",i, &vet[i]);
        printf("(f + %d) = %X",i, f+i);
    }
}

/*
    Saída esperada:
    contador/valor/valor/endereco/endereco
    i = 0 vet[0] = 1.1 *(f + 0) = 1.1 &vet[0] = endereco inicial (f + 0) = endereco inicial
    i = 1 vet[1] = 2.2 *(f + 1) = 2.2 &vet[1] = endereco inicial + 4 bytes (f + 1) = endereco inicial + 4 bytes
    i = 2 vet[2] = 3.3 *(f + 2) = 3.3 &vet[2] = endereco inicial + 8 bytes (f + 2) = endereco inicial + 8 bytes
    i = 3 vet[3] = 4.4 *(f + 3) = 4.4 &vet[3] = endereco inicial + 12 bytes (f + 3) = endereco inicial + 12 bytes
    i = 4 vet[4] = 5.5 *(f + 4) = 5.5 &vet[4] = endereco inicial + 16 bytes (f + 4) = endereco inicial + 16 bytes
    Saída real: 
    contador/valor/valor/endereco/endereco
    i = 0vet[0] = 1.1*(f + 0) = 1.1&vet[0] = 4B759730(f + 0) = 4B759730
    i = 1vet[1] = 2.2*(f + 1) = 2.2&vet[1] = 4B759734(f + 1) = 4B759734
    i = 2vet[2] = 3.3*(f + 2) = 3.3&vet[2] = 4B759738(f + 2) = 4B759738
    i = 3vet[3] = 4.4*(f + 3) = 4.4&vet[3] = 4B75973C(f + 3) = 4B75973C
    i = 4vet[4] = 5.5*(f + 4) = 5.5&vet[4] = 4B759740(f + 4) = 4B759740
*/