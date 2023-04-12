#include <stdio.h>
#include <stdlib.h>

void armazena_valores(float **mat, int nl, int nc){
    int i, j;
    for (i=0; i<nl; i++){
        for(j=0; j<nc; j++){
            scanf("%f", &mat[i][j]);
        }
    }
}

void imprime_valores(float **mat, int nl, int nc){
    int i, j;
    for(i=0; i<nl; i++){
        for(j=0; j<nc; j++){
            printf("%f ", mat[i][j]);
        }
        printf("\n");
    }
}

void multiplica_matrizes(float **A, float **B, float **C, int nl_A, int nc_A, int nc_B){
    int i, j, k;

    for(i=0; i<nl_A; i++){
        for(j=0; j<nc_B; j++){
            for(k=0; k<nc_A; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void main(){
    float **A, **B, **C;
    int nl_A, nc_A, nl_B, nc_B;
    int i, j;
    
    nl_A = 3;
    nc_A = 4;
    nl_B = 4;
    nc_B = 3;
    
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
    for(i=1; i<nl_A; i++){
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
        printf("Alocação de B[0] não funcionou!");
        exit(0);
    }
    
    // Ajustes de B[i]
    for(i=1; i<nl_B; i++){
        B[i] = B[i-1] + nc_B;
    }
    
    // Atribuição de 0
    for(i=0; i<nl_B; i++){
        for(j=0; j<nc_B; j++){
            B[i][j] = 0;
        }
    }
    
    // Alocação de C
    C = (float**) malloc(nl_A * sizeof(float*));
    if (C == NULL){
        printf("Alocação de C não funcionou!");
        exit(0);
    }

    // Alocação de C[0]
    C[0] = (float*) malloc(nl_A * nc_B * sizeof(float));
    if (C[0] == NULL){
        printf("Alocação de C[0] não funcionou!");
        exit(0);
    }

    // Ajuste de C[i]
    for (i=1; i<nl_A; i++){
        C[i] = C[i-1] + nc_B;
    }

    // Atribuição de 0
    for(i=0; i<nl_A; i++){
        for(j=0; j<nc_B; j++){
            C[i][j] = 0;
        }
    }
    
    // matriz A
    printf("Digite as dimensões de A: ");
    scanf("%d", &nl_A);
    scanf("%d", &nc_A);
    printf("Digite os valores de A:\n");
    armazena_valores(A, nl_A, nc_A);
    
    // matriz B
    printf("Digite as dimensões de B: ");
    scanf("%d", &nl_B);
    scanf("%d", &nc_B);
    printf("Digite os valores de B:\n");
    armazena_valores(B, nl_B, nc_B);
    
    multiplica_matrizes(A, B, C, nl_A, nc_A, nc_B);
    
    printf("Resultado:\n");
    imprime_valores(C, nl_A, nc_B);
    
    free(C[0]);
    free(C);
    free(B[0]);
    free(B);
    free(A[0]);
    free(A);
}