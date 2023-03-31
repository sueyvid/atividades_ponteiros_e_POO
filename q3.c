#include <stdio.h>

int main(void){
    int i=5, j=0, *p=&i, *q=&j;
    p = i; // p recebe o valor de i
    q = &j; // q recebe a posição de j
    p = &*&i; // p recebe a posição de i
    i = (*&)j; // i recebe j
    i = *&j; // i recebe j
    i = *&*&j; // i recebe j
    q = *p; // q recebe o valor de p
    i = (*p)++ + *q; // i recebe o valor de p mais o de q
}

/*
    Saída esperada: Nenhuma dá erro
    Saída real: Deu erro na 4ª
*/