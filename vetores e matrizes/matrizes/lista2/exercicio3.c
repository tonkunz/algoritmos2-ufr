/*
  Faça um programa que gere uma matriz transposta (Matriz transposta é toda a
  matriz onde são trocadas as linhas pelas colunas, ou vice-versa);
*/
#include <stdio.h>
#include <stdlib.h> // Necessária para as funções rand() e srand()

#define TAM 4

int main() {
  int mat[TAM][TAM], matTrans[TAM][TAM], lin, col;

  for(lin=0;lin<TAM;lin++) {
    for(col=0;col<TAM;col++){
      printf("Mat[%d][%d]: ", lin, col);
      scanf("%d", &mat[lin][col]); // Lê na matriz original

      // Salva na segunda matriz, trocando os índices, gerando a matriz transposta
      matTrans[col][lin] = mat[lin][col]; 
    }
  }

  printf("\n\nMatriz Original:\n");
  for(lin=0;lin<TAM;lin++) {
    for(col=0;col<TAM;col++){
      printf("%d\t", mat[lin][col]);
    }
    printf("\n");
  }

  printf("\n\nMatriz Transposta:\n");
  for(lin=0;lin<TAM;lin++) {
    for(col=0;col<TAM;col++){
      printf("%d\t", matTrans[lin][col]);
    }
    printf("\n");
  }

  return 0;
}