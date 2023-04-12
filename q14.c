#include <stdio.h>
#include <stdlib.h>

int troca(const void* a, const void* b){
    if (*(float*)a < *(float*)b){
        return -1;
    }
    else if (*(float*)a > *(float*)b){
        return 1;
    }
    else{
        return 0;
    }
}

void le(){
    float *x;
    int n;
    
    // Aloca memória
    printf("Quantos valores serão utilizados? ");
    scanf("%d", &n);
    x = malloc(n * sizeof(float));
    
    // Verifica se a alocação funcionou
    if (x == NULL){
        printf("Alocação deu errado!");
        exit(0);
    }
    
    // Atribui 0 à todas as posições do Array
    for (int i=0; i < n; i++){
        x[i] = 0;
    }
    
    // Armazena os valores
    printf("Digite os valores:\n");
    for (int i=0; i < n; i++){
        scanf("%f", &x[i]);
    }
    
    // Ordenação
    qsort(x, n, sizeof(float), troca);
    
    // Imprime os valores
    printf("Dados ordenados:");
    for (int i=0; i < n; i++){
        printf("\n%f", x[i]);
    }
    
    // Libera memória
    free(x);
}

int main()
{
    le();
    
    return 0;
}