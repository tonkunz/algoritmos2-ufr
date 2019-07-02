/*
Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão
abaixo da diagonal principal.
*/
#include <stdio.h>

#define DIM 3

int main () {
  int mat[DIM][DIM], l, c, soma = 0;

  // Leitura da Matriz
  printf("Preencha a primeira matriz:\n\n");
  for(l=0;l<DIM;l++){
    for(c=0;c<DIM;c++){
      printf("[%d][%d]: ", l, c);
      scanf("%d", &mat[l][c]);
    }
    printf("\n");
  }

  // Soma dos itens
  for(l=0;l<DIM;l++){
    for(c=0;c<DIM;c++){
      if(c<l){
        soma = soma + mat[l][c];
      }
    }
  }

  // Resultado
  printf("\nResultado da soma: %d\n", soma);


  return 0;
}