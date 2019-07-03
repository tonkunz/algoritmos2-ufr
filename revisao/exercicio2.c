/*
Leia uma matriz G 5 x 5 e criar 2 vetores SL e SC de 5 elementos que contenham
respectivamente as somas das linhas e das colunas de G. Escrever os vetores
criados.
*/
#include <stdio.h>

#define DIM 5

int main () {
  int g[DIM][DIM], sl[DIM], sc[DIM], l, c;

  // Inicializando os vetores com 0
  for(l=0;l<DIM;l++){
    sl[l]=0;
    sc[l]=0;
  }

  // Leitura da matriz
  printf("Insira os valores para a matriz:\n");
  for(l=0;l<DIM;l++){
    for(c=0;c<DIM;c++){
      printf("[%d][%d]: ", l, c);
      scanf("%d", &g[l][c]);
      sl[l]= sl[l] + g[l][c];
      sc[c]= sc[c] + g[l][c];
    }
    printf("\n");
  }

  // Apresentando resultados
  printf("\nSoma linha:\n");
  for(l=0;l<DIM;l++){
    printf("sl[%d]: %d\t", l, sl[l]);
  }
  printf("\nSoma coluna:\n");
  for(l=0;l<DIM;l++){
    printf("sc[%d]: %d\t", l, sc[l]);
  }
  printf("\n");

  return 0;
}