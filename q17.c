#include <stdio.h>
#include <stdlib.h>

void armazena_valores(int *vet, int n){
    int i;
    for (i=0; i<n; i++){
        scanf("%d", &vet[i]);
    }
}

void imprime_valores(int *vet, int n){
    int i;
    for (i=0; i<n; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");
}

void soma_vetores(int *vet1, int *vet2, int *resultado, int n){
    int i;
    for (i=0; i<n; i++){
        resultado[i] = vet1[i] + vet2[i];
    }
}

void main(){
    int *vet1, *vet2, *resultado, n;
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &n);
    vet1 = malloc(n*sizeof(int));
    vet2 = malloc(n*sizeof(int));
    resultado = malloc(n*sizeof(int));
    
    printf("Digite os valores de vet1: ");
    armazena_valores(vet1, n);

    printf("Digite os valores de vet2: ");
    armazena_valores(vet2, n);
    
    soma_vetores(vet1, vet2, resultado, n);
    
    printf("Vetor resultado: ");
    imprime_valores(resultado, n);
    
    free(resultado);
    free(vet2);
    free(vet1);
}