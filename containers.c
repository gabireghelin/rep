/*Considere um container medindo A metros de largura, B metros de comprimento e C metros de altura. Um navio porta-container pode ser visto como um retângulo horizontal de X metros de largura e Y metros de comprimento, sobre o qual os contêineres são colocados. Nenhuma parte de container pode ficar para fora do navio. Além disso, para possibilitar a travessia de pontes, a altura máxima da carga no navio não pode ultrapassar Z metros.
*/



#include <stdio.h> 

int main(void) {
  int a, b, c, x, y, z, qtda_ax, qtdb_ax, qtdc, qtda_bx, qtdb_bx, qtd_ax, qtd_bx, qtdmax;
  
//printf("Informe largura, comprimento e altura dos containers: ");
scanf("%i %i %i", &a, &b, &c);
//printf("Informe largura, comprimento e altura máxima do navio: ");
scanf("%i %i %i", &x, &y, &z);

if (a>0 && b>0 && c>0 && x>0 && y>0 && z>0) {

  //alinhando a em x:
  // qtda = menor inteiro para x/a
  qtda_ax = (int)x/a; //(int) faz o casting do racional para o menor inteiro
  qtdb_ax = (int)y/b;
  
  //alinhando b em x:
  qtdb_bx = (int)x/b;
  qtda_bx = (int)y/a;
  
  // altura max:
  qtdc = (int)z/c;

  qtd_ax = qtda_ax * qtdb_ax * qtdc;
  qtd_bx = qtda_bx * qtdb_bx * qtdc;
  
  if (qtd_ax >= qtd_bx) {
    qtdmax = qtd_ax;
  }
  else {
    qtdmax = qtd_bx;
  }
  
  printf("%i", qtdmax);
}
  
else {
  printf("ERRO");
}

return 0;
}
