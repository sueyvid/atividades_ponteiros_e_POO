#include <stdio.h>
#include <stdlib.h>

// a)
/*
int main(){
    int vet[] = {4,9,13};
    int i;
    for(i=0;i<3;i++){
        printf("%d ",*(vet+i));
    }
}
*/
// b)
int main(){
    int vet[] = {4,9,13};
    int i;
    for(i=0;i<3;i++){
        printf("%X ",vet+i);
    }
}

/*
    Saída esperada:
    a) 4 9 13 // Imprime os elementos do vetor
    b) // Imprime os endereços de cada elemento do vetor (incrementando de 4 em 4 bytes)
    Saída real:
    a) 4 9 13 
    b) C061E88C C061E890 C061E894 
*/