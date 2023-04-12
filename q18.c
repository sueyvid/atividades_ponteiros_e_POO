#include <stdio.h>
#include <stdlib.h>

void armazena_valores(float **mat, int nl, int nc){
    int i, j;
    for (i=0; i<nl; i++){
        for(j=0; j<nc; j++){
            scanf("%d", &mat[i][j]);
        }
    }
}

void imprime_valores(float **mat, int nl, int nc){
    int i, j;
    for (i=0; i<nl; i++){
        for(j=0; j<nc; j++){
            printf("%d ", mat[i][j]);
        }
    }
    printf("\n");
}

void multiplica_matrizes(float **A, float **B, float **C, int nl_A, int nc_A, int nc_B){
    
}

void main(){
    float **A, **B, **C;
    int nl_A, nc_A, nl_B, nc_B;
    int i, j;
    
    // Alocação de A
    A = (float**) malloc(nl_A * sizeof(float*));
    if(A == NULL){
        printf("Alocação de A não funcionou!");
        exit(0);
    }
    
    // Alocação de A[0]
    A[0] = (float*) malloc(nl_A * nc_A * sizeof(float));
    if(A[0] == NULL){
        printf("Alocação de A[0] não funcionou!");
        exit(0);
    }
    
    // Ajustes de A[i]
    for(i=0; i<nl_A; i++){
        A[i] = A[i-1] + nc_A;
    }
    
    // Atribuição de 0
    for(i=0; i<nl_A; i++){
        for(j=0; j<nc_A; j++){
            A[i][j] = 0;
        }
    }
    
    // Alocação de B
    B = (float**) malloc(nl_B * sizeof(float*));
    if(B == NULL){
        printf("Alocação de B não funcionou!");
        exit(0);
    }
    
    // Alocação de B[0]
    B[0] = (float*) malloc(nl_B * nc_B * sizeof(float));
    if(B[0] == NULL){
        printf("Alocação de A[0] não funcionou!");
        exit(0);
    }
    
    // Ajustes de B[i]
    for(i=0; i<nl_B; i++){
        B[i] = B[i-1] + nc_B;
    }
    
    // Atribuição de 0
    for(i=0; i<nl_B; i++){
        for(j=0; j<nc_B; j++){
            B[i][j] = 0;
        }
    }
    
    multiplica_matrizes(A, B, C, nl_A, nc_A, nc_B);
    
    imprime_valores(A, nl_A, nc_A);
}