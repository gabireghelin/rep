/*Elabore um algoritmo em linguagem C que determine e mostre a soma dos números ímpares múltiplos de 3 em um intervalo entre zero e um número inteiro informado pelo usuário.
*/


#include <stdio.h> 

int main(void) {
  int i, lim, soma = 0;
  
printf("Escolha o limite superior do intervalo: ");
scanf("%i", &lim);

for (i = 0; i <= lim; i++){
  if (i%3 == 0)
  {
    if (i%2 == 1)
    {
      soma = soma + i;
    }
  }
}

printf("A soma é: %i", soma);

return 0;
}

