/*
Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada
posição das matrizes lidas
*/
#include <stdio.h>

#define DIM 4

int main () {
  int mat1[DIM][DIM], mat2[DIM][DIM], mat3[DIM][DIM];
  int c, l;

  // Leitura matriz 1
  printf("Preencha a primeira matriz:\n\n");
  for(l=0;l<DIM;l++){
    for(c=0;c<DIM;c++){
      printf("[%d][%d]: ", l, c);
      scanf("%d", &mat1[l][c]);
    }
    printf("\n");
  }

  // Leitura matriz 2
  printf("Preencha a segunda matriz:\n\n");
  for(l=0;l<DIM;l++){
    for(c=0;c<DIM;c++){
      printf("[%d][%d]: ", l, c);
      scanf("%d", &mat2[l][c]);
    }
    printf("\n");
  }

  // Preenchimento matriz 3
  for(l=0;l<DIM;l++){
    for(c=0;c<DIM;c++){
      if(mat1[l][c] > mat2[l][c]){
        mat3[l][c] = mat1[l][c];
      } else {
        mat3[l][c] = mat2[l][c];
      }
    }
  }

  // Impressão das Matrizes

  // Impressão matriz 1
  printf("\n========Matriz 1========\n\n");
  for(l=0;l<DIM;l++){
    for(c=0;c<DIM;c++){
      printf("[%d][%d]: %d ", l, c, mat1[c][l]);
    }
    printf("\n");
  }
    // Impressão matriz 1
  printf("\n========Matriz 2========\n\n");
  for(l=0;l<DIM;l++){
    for(c=0;c<DIM;c++){
      printf("[%d][%d]: %d ", l, c, mat2[c][l]);
    }
    printf("\n");
  }
    // Impressão matriz 1
  printf("\n========Matriz 3========\n\n");
  for(l=0;l<DIM;l++){
    for(c=0;c<DIM;c++){
      printf("[%d][%d]: %d ", l, c, mat3[c][l]);
    }
    printf("\n");
  }

  return 0;
}