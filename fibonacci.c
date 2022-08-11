/*
  #include <stdio.h> 

int main(void) {

  int k, i, t0 = 0, t1 = 1, tn, soma = 1;

  scanf("%i", &k);
  if (k>=3) {
    printf("%i\n%i", t0, t1);
    for (i=3; i<=k; i++) {
      tn = t0 + t1;
      printf("\n%i", tn);
      
      t0 = t1;
      t1 = tn;
      
      soma = soma + tn;
    }
    printf("\n%i", soma);
  }
  else {
    printf("-100");
  }
  
return 0;
}
*/