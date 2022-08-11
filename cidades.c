/*
Considere n cidades numeradas de 0 a n-1 que estão interligadas por uma série de estradas de mão única. As ligações entre as cidades são representadas pelos elementos de uma matriz quadrada  Lnxn, cujos elementos lij assumem o valor 1 ou 0, conforme exista ou não estrada direta que saia da cidade i e chegue à cidade j. Assim, os elementos da linha i indicam as estradas que saem da cidade i, e os elementos da coluna j indicam as estradas que chegam à cidade j.
  Escreva um programa em C que leia uma matriz NxN e seus valores e ao final calcule:

A) Dado k, determinar quantas estradas saem e quantas chegam à cidade k.

B) Qual das cidades chega o maior número de estradas?

Mostre cada um dos valores determinados em uma linha. No caso da figura, considerando a cidade k = 3, as respostas seriam 1  1  2 porque existe uma estrada que sai da cidade 3, uma estrada que chega a cidade 3 e dois porque a cidade que recebe mais estradas é a número 2.

O programa deve ler a matriz linha por linha e ao final da entrada dos dados deve mostrar a matriz informada, uma linha de cada vez e os elementos devem estar separados por um espaço. Após mostrar a matriz o programa deve  solicitar k e mostrar os resultados. 
*/

#include <stdio.h> 

int main(void) {

  int n, i, j, k;
  int saemk=0, chegamk=0, soma, maischega, maiorsoma;

  printf("NUM CIDADES:");
  scanf("%i", &n);//receber numero de cidades
  
  int MATRIZ[n][n];

    printf("VALORES:");
  for (i=0; i<n; i++) {// receber valores da matriz
    for (j=0; j<n; j++) {
      scanf("%i", &MATRIZ[i][j]);
    }
  }
  
 printf("CIDADE K:");
 scanf("%i", &k);//ler valor k da cidade analisada
 
    for (j=0; j<n; j++) {//fixa linha no k, soma os que saem
        saemk += MATRIZ[k][j];
    }
    for (i=0; i<n; i++) {//fixa coluna no k, som os que chegam
        chegamk += MATRIZ[i][k];
    }
 
 
 //cidade que mais chegam estradas
 //fixa coluna, varia e soma linhas se soma dessa j > maiorsoma, gravar j
 //primeira volta, maischega=0, maiorsoma= soma de j
 
 for (j=0; j<n; j++) { //fixa uma coluna de cada vez

    soma=0;
    
    
    for (i=0; i<n; i++) {// soma linha em linha daquela coluna
     soma += MATRIZ[i][j];
    }
     
    if (j==0){
    maischega=j;
    maiorsoma=soma;
    }
    
    if(j>0) {
        if(soma>maiorsoma) {
            maischega=j;
            maiorsoma=soma;     
        }
    }
 }
    
 
 
 
 //OUTPUTS
 
   for (i=0; i<n; i++) {// imprimir matriz
    for (j=0; j<n; j++) {
      printf("%i ", MATRIZ[i][j]);
    }
    printf("\n");
  }
 
 printf("%i", saemk-1);
 printf("\n%i", chegamk-1);
 printf("\n%i", maischega);
 
 return 0;
}
 