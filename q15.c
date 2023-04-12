#include <stdio.h>
#include <stdlib.h>

int troca(const void* a, const void* b){
    if (*(int*)a < *(int*)b){
        return -1;
    }
    else if (*(int*)a > *(int*)b){
        return 1;
    }
    else{
        return 0;
    }
}

void ordena_int(int* vetor, size_t qtd_elementos, size_t tamanho_elemento_bytes, int (*cmp)(const void*, const void*)){
    int i, j;
    int temp;
    for (i = 0; i < qtd_elementos-1; i++){
        for (j = i+1; j < qtd_elementos; j++){
            if(cmp(&vetor[i], &vetor[j]) > 0){
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
}

void le(){
    int *x;
    int n;
    
    // Aloca memória
    printf("Quantos valores serão utilizados? ");
    scanf("%d", &n);
    x = malloc(n * sizeof(int));
    
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
        scanf("%d", &x[i]);
    }
    
    // Ordenação
    ordena_int(x, n, sizeof(int), troca);
    
    // Imprime os valores
    printf("Dados ordenados:");
    for (int i=0; i < n; i++){
        printf("\n%d", x[i]);
    }
    
    // Libera memória
    free(x);
}

int main()
{
    le();
    
    return 0;
}