#include <stdio.h>

int main(void){
    int i=5, *p;
    p = &i;
    printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);
}

/*
    Saída esperada: 4094, 7, 5, 15, 9
    Saída real: 7002e30c, 7, 5, 15, 9
*/