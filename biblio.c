#include <stdio.h>
#include "biblio.h"

void le_matriz(int A[][5],int x){
    
    //A = mat
    //x = lin
    
    int i, j;
    
    for (i = 0; i <x; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%i ", &A[i][j]);
        }
    }
    
}

void imprime_matriz(int A[][5],int x){
    
    //A = mat
    //x = lin    
    
    int i, j;
    
    for (i = 0; i < x; i++) {
        for (j = 0; j < 5; j++) {
            printf("%i ", A[i][j]);
        }
        printf("\n");
    }

}

int traco(int A[][5]){
    
    int i, j, soma=0;
    
    for (i=0; i<5; i++) {
        for (j=0; j<5; j++) {
            if (i == j) {
                soma += A[i][j];//somar elementos i,i
            }
        }
    }
    
    return soma;
}

void maiores(int A[][5], int B[], int x){
    
    //A = mat
    //B = vet
    //x = lin
    
    int i, j, maior;
    
    for (i=0; i<x; i++) {//fixa linha
        
        maior = 0;
        
        for (j=0; j<5; j++) {//compara elementos
        
            if(j==0) {
                maior= A[i][j];
            }
            if(j>0) {
                if(A[i][j] > maior) {
                    maior = A[i][j];
                    B[i] = maior;
                }
            }
            
        }
    }
}

void imprime_vetor(int B[], int x){
    
    //B = vet
    //x = lin
    
    int i;
    
    for(i=0; i<x; i++) {
        printf("%i ", B[i]);
    }

}

void simetrica(int A[][5], int x){
    //fazer a transposta
    //comparar
    
    int i, j, T[5][5], naosime=0;
    //naosime = 0, é simétrica
    //naosime = 1, é simétrica
    
    for (i = 0; i <5; i++) {
        for (j = 0; j < 5; j++) {
            T[i][j] = A[j][i];
        }
    }
    
    for (i = 0; i <5; i++) {
        for (j = 0; j < 5; j++) {
            if(A[i][j] != T[i][j]) {
                naosime = 1;
            }
        }
    }
    
    if(naosime == 0) {
        printf("\nsimetrica");
    }
    else{
        printf("\nnao simetrica");
    }
    
}

