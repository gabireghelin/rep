/*Escreva um programa em C que calcule N! (fatorial de N), sendo que o valor inteiro de N é fornecido pelo usuário.
*/

#include <stdio.h> 

int main(void) {
  int i, num, fat = 1;
  
printf("Escolha o número para fazer o fatorial: ");
scanf("%i", &num);

for (i = 1; i <= num; i++)
{
  fat = fat * i;
}

printf("%i ! = %i", num, fat);

return 0;
}
