/*O código de César é uma das mais simples e conhecidas técnicas de criptografia. A técnica consiste em substituir cada letra do texto por outra, que se apresenta n posições após ela no alfabeto. Por exemplo, com uma troca de quatro posições, a letra A seria substituída por E, B ser tornaria F e assim por diante. Escreva um programa em C que implemente o código de César para quatro posições. O programa deve ler um string e imprimir a string codificada toda em letras maiúsculas.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char frase[100], letra;
    int i;
    
    printf("Frase original: ");
    fgets(frase, 100, stdin);
    
    
    for(i = 0; frase[i] != '\0'; ++i){
        letra = frase[i];// variável letra temporária para o loop
        if(letra >= 'a' && letra <= 'z'){
            letra = letra + 4;//troca 4
            if(letra > 'z'){
                letra = letra - 'z' + 'a' - 1;//troca 4 reinicia alfabeto
            }
        frase[i] = letra;// grava nova letra
    }
    }
    
    
    printf("frase criptografada: %s", frase);
    
return 0;
}
