/*
Leia uma matriz 5 x 5. Leia também um valor  ́ X. O programa deverá fazer uma
busca desse valor na matriz e, ao final, escrever a localização (linha e coluna)
ou uma mensagem de “nao encontrado”.
*/
#include <stdio.h>

// Constante para controlar o tamanho da matriz
#define DIM 5

int main () {
  int mat[DIM][DIM], l, c, x;
  int aux = 0;

  // Preenchendo a Matriz
  printf("Preencha a Matriz:\n\n");
  for(l=0;l<DIM;l++){
    for(c=0;c<DIM;c++){
      printf("Matriz[%d][%d]: ", l, c);
      scanf("%d", &mat[l][c]);
    }
    printf("\n");
  }

  // Lendo o valor de X
  printf("\nInforme um valor para X: ");
  scanf("%d", &x);

  // Laço para busca do valor
  for(l=0;l<DIM;l++){
    for(c=0;c<DIM;c++){
      if(mat[l][c] == x){
        printf("\nValor encontrado: Matriz[%d][%d]: %d\n", l, c, mat[l][c]);
        aux = 1;
      }
    }
  }  

  // Impressão caso não o valor de X não exista na Matriz
  if(aux == 0){
    printf("\nValor não encontrado!\n");
  }

  return 0;
}