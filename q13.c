#include <stdio.h>
#include <stdlib.h>

void troca(float *a, float *b){
    float temp;
    temp = *a;
    *a = *b;
    *b = temp;
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
    for (int i=0; i < n-1; i++){
        for (int j=i+1; j < n; j++){
            if (j <= i){
                printf("menor\n");
            }
            else if (x[i] > x[j]){
                troca(&x[i], &x[j]);
            }
        }
    }
    
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
