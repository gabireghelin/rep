#include <stdio.h>
#include "biblio.h"

int main(){
    int lin,x;
    scanf("%i",&lin);
    int mat[lin][5], vet[lin];
    le_matriz(mat,lin);
    imprime_matriz(mat,lin);
    if (lin==5){
        x = traco(mat);
        printf("\nTraco = %i", x);
        simetrica(mat,lin);
    }
    else {
        printf("\nNao eh possivel calcular traco e simetria.");
    }
    maiores(mat,vet,lin);
    printf("\n");
    imprime_vetor(vet,lin);
    return 0;
}

