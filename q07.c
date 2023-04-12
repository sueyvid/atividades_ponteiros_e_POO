#include <stdio.h>
#include <stdlib.h>

int main(void){
    int mat[4], *p, x;
    mat[0] = 1500;
    //quais das expressoes sao validas? Justifique
    /*
        a) p = mat + 1; 
        b) p = mat++; 
        c) p = ++mat; 
        d) x = (*mat)++; 
    */
    x = (*mat)++;
    printf("*mat = %d", *mat);
}

/*
    Saída esperada:
    a) Nada... // Válido. Porque será atribuido a posição do segundo elemento da matriz à p.
    b) Erro    // Inválido. Por se tratar de um ponteiro constante, mat não pode ser incrementado.
    c) Erro    // Inválido. Mesmo motivo, não pode ser incrementado.
    d) Erro    // Inválido. Porque incrementa um ponteiro constante e atribui um ponteiro à uma variável comum.
    Saída real:
    a) Nada...
    b) error: lvalue required as increment operand
    c) error: lvalue required as increment operand
    d) Nada... // Válido. Na verdade, o valor do local para o qual está apontada a matriz (primeira posição
                  da matriz) é incrementado e esse valor é atribuido a x, ou seja, não ocorre nenhum erro.
    
*/