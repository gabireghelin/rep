/*Sendo H = 1 + 1/2 +1/3 +1/4 + ... + 1/N, escreva um programa em C para gerar o número H. O número N é um valor inteiro e é fornecido pelo usuário. O valor H calculado é um valor real e deve ser mostrado ao final do programa com três casas decimais. 


#include <stdio.h> 

int main(void) {
  float i, n, fator, soma = 0;
  
printf("Escolha o número N: ");
scanf("%f", &n);

for (i = 1; i <= n; i++)
{
  fator = 1/i;
  soma = fator + soma;
}

printf("A soma H resulta %.3f", soma);

return 0;
}
*/