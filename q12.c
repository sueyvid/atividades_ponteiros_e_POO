#include <stdio.h>
#include <stdlib.h>

/* Referência: https://www.dca.fee.unicamp.br/cursos/EA876/apostila/HTML/node144.html
Ponteiro para função: tipo de variável que permite armazenar endereço de funções.
*/

void funcao1(){
    printf("Você escolheu a função 1");
}

void funcao2(){
    printf("Você escolheu a função 2");
}

int main()
{
    int x;
    printf("Digite 1 ou 2: ");
    scanf("%d", &x);
    
    void (*funcao)();
    if (x == 1){
        funcao = funcao1;
    }
    else if (x == 2){
        funcao = funcao2;
    }
    else{
        printf("Valor não esperado");
        exit(0);
    }
    funcao();
    
    return 0;
}
