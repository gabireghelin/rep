/* Escreva um programa em C que solicite ao usuário a dimensão de uma matriz quadrada, ou seja, o programa deve solicitar um valor inteiro N para uma matriz de dimensão NxN. Após ler a dimensão da matriz o programa deve preenche-la com valores inteiros. 

O programa deve ler a matriz linha por linha e ao final da entrada dos dados deve mostrar a matriz informada, uma linha de cada vez e os elementos devem estar separados por um espaço.

Após o preenchimento da matriz, o programa deve indicar se a matriz é uma "matriz identidade" ou "matriz zero" e mostrar a soma dos elementos da diagonal principal da matriz.

A saída do programa deve seguir o seguinte padrão:

- Escreva "MATRIZ IDENTIDADE" se a matriz for uma matriz identidade;

- Escreva "MATRIZ ZERO" se a matriz for uma matriz zero;

- Em uma nova linha escreva a soma dos elementos da diagonal principal, no padrão "Soma1 = <valor_calculado>";

- Em uma nova linha escreva a soma dos elementos da diagonal secundária  no padrão "Soma2 = <valor_calculado>".

Caso a matriz não seja identidade e nem zero o programa deve mostrar apenas o valor das somas.
  */


#include <stdio.h> 

int main(void) {

  int n, i, j, naoid=0, naozero=0, somapri=0, somasec=0;
  //naoid = 1, matriz não é identidade
  //naoid = 0, matriz é identidade

  scanf("%i", &n);//receber tamanho da matriz
  
  int MATRIZ[n][n];

  for (i=0; i<n; i++) {// receber valores da matriz
    for (j=0; j<n; j++) {
      scanf("%i", &MATRIZ[i][j]);
    }
  }
    
// testar se é identidade
  for (i=0; i<n; i++) {// varia linha
    for (j=0; j<n; j++) {//varia coluna naquela linha
        if (i == j) {
            if (MATRIZ[i][j] != 1) {//elemento i,i = 1
                naoid = 1;
            }
        }
        if (i != j) {
            if (MATRIZ[i][j] != 0) {//elemento i,j = 0
                naoid = 1;
            }
        }
    }
  }
  
// testar se é zero
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
          if (MATRIZ[i][j] != 0) {//elemento i, j = 0
              naozero = 1;
          }
        }
    }

//soma diagonal principal
  for (i=0; i<n; i++) {
    for (j=0; j<n; j++) {
      if (i == j) {
          somapri += MATRIZ[i][j];//somar elementos i,i
      }
    }
  }
  
//soma diagonal secundaria
  for (i=0; i<n; i++) {
    for (j=0; j<n; j++) {
      if (i+j == n-1) {
          somasec += MATRIZ[i][j];//somar elementos i+j=n-1(pois i=0)
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

if (naoid == 0) {
    printf("MATRIZ IDENTIDADE");
}  
if (naozero == 0) {
    printf("MATRIZ ZERO");
}  

printf("\nSoma1=%i", somapri);
printf("\nSoma2=%i", somasec);

return 0;
}
