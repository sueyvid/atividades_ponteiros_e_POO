#include <stdio.h>

int main() {
  int valor;
  int *p1;
  float temp;
  float *p2;
  char aux;
  char *nome = "Ponteiros";
  char *p3;
  int idade;
  int vetor[3];
  int *p4;
  int *p5;
  
  /* (a) */
  valor = 10;
  p1 = &valor;
  *p1 = 20;
  printf("%d \n", valor); // 20
  /* (b) */
  temp = 26.5;
  p2 = &temp;
  *p2 = 29.0;
  printf("%.1f \n", temp); // 29.0
  /* (c) */
  p3 = &nome[0];
  aux = *p3;
  printf("%c \n", aux); // P
  /* (d) */
  p3 = &nome[4];
  aux = *p3;
  printf("%c \n", aux); // e
  /* (e) */
  p3 = nome;
  printf("%c \n", *p3); // Ponteiros
  /* (f) */
  p3 = p3 + 4;
  printf("%c \n", *p3); // eiros + lixo de memória
  /* (g) */
  p3--;
  printf("%c \n", *p3); // teiros + lixo de memória
  /* (h) */
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor;
  idade = *p4;
  printf("%d \n", idade); // 314527
  /* (i) */
  p5 = p4 + 1;
  idade = *p5;
  printf("%d \n", idade); // 14527 + lixo de memória
  /* (j) */
  p4 = p5 + 1;
  idade = *p4;
  printf("%d \n", idade); // 4527 + lixo de memória
  /* (l) */
  p4 = p4 - 2;
  idade = *p4;
  printf("%d \n", idade); // 314527
  /* (m) */
  p5 = &vetor[2] - 1;
  printf("%d \n", *p5); // 45
  /* (n) */
  p5++;
  printf("%d \n", *p5); // 27
  return(0);
}



/*
    a) Saída esperada: 20
       Saída real: 20
    b) Saída esperada: 29.0
       Saída real: 29.0
    c) Saída esperada: P
       Saída real: P
    d) Saída esperada: e
       Saída real: e
    e) Saída esperada: Ponteiros
       Saída real: P
    f) Saída esperada: eiros + lixo de memória
       Saída real: e
    g) Saída esperada: teiros + lixo de memória
       Saída real: t
    h) Saída esperada: 314527
       Saída real: 31
    i) Saída esperada: 14527 + lixo de memória
       Saída real: 45
    j) Saída esperada: 4527 + lixo de memória
       Saída real: 27
    l) Saída esperada: 314527
       Saída real: 31
    m) Saída esperada: 45
       Saída real: 45
    n) Saída esperada: 27
       Saída real: 27
*/