/*
Leia uma matriz 4 x 4,conte e escreva
quantos valores maiores que 10 ela possui.
*/
#include <stdio.h>

#define LIN 4
#define COL 4

int main (){
  int matriz[LIN][COL];
  int l, c, quant = 0;

  // Laço de leitura da matriz
  printf("Leitura de valores:\n\n");
  for(l=0;l<LIN;l++){
    for(c=0;c<COL;c++){
      printf("\nMatriz[%d][%d]", l, c);
      scanf("%d", &matriz[l][c]);
    }
  }

  // Verificação dos valores
  for(l=0;l<LIN;l++){
    for(c=0;c<COL;c++){
      if(matriz[l][c] > 10){
        quant++;
      }
    }
  }

  // Impressão dos resultados
  printf("\nQuantidade de maiores que 10: %d\n\n", quant);

  return 0;
}