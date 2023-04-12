#include <stdio.h>
#include <stdlib.h>

/*
    Seja x um vetor de 4 elementos, declarado da forma TIPO x[4];. Suponha que depois da
    declaração, x esteja armazenado no endereço de memória 4092 (ou seja, o endereço de x[0]).
    Suponha também que na máquina seja usada uma variável do tipo char ocupa 1 byte, do tipo
    int ocupa 2 bytes, do tipo float ocupa 4 bytes e do tipo double ocupa 8 bytes. Quais serão os
    valores de x+1, x+2 e x+3 se:
    ◦ x for declarado como char?
    ◦ x for declarado como int?
    ◦ x for declarado como float?
    ◦ x for declarado como double?
*/
int main(){
    int i;
    char x[4];
    for(i=1; i<4;i++){
        printf("%p ", x+i);
    }
    printf("\n");
    int y[4];
    for(i=1; i<4;i++){
        printf("%p ", y+i);
    }
    printf("\n");
    float z[4];
    for(i=1; i<4;i++){
        printf("%p ", z+i);
    }
    printf("\n");
    double t[4];
    for(i=1; i<4;i++){
        printf("%p ", t+i);
    }
}

/*
    Saída esperada:
    4093 4094 4095
    4094 4096 4098
    4096 409a 409e
    409a 40a2 40aa
    Saída real:
    0x7ffc1d968d05 0x7ffc1d968d06 0x7ffc1d968d07 
    0x7ffc1d968cc4 0x7ffc1d968cc8 0x7ffc1d968ccc 
    0x7ffc1d968cd4 0x7ffc1d968cd8 0x7ffc1d968cdc 
    0x7ffc1d968ce8 0x7ffc1d968cf0 0x7ffc1d968cf8 
*/