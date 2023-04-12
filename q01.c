#include <stdio.h>

int main(void){
    int i = 3, j = 5;
    int *p, *q;
    p = &i;
    q = &j;
    printf("%d\n", p == &i);
    printf("%d\n", *p - *q);
    printf("%d\n", **&p);
    printf("%d\n", 3 - *p/(*q) + 7);
}
/*
    a) Saída esperada: 1
       Saída real: 1
    b) Saída esperada: -2
       Saída real: -2
    c) Saída esperada: 3
       Saída real: 3
    d) Saída esperada: 10
       Saída real: 10
*/
      