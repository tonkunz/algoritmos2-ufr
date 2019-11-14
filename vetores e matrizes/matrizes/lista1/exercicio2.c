/*
Declare uma matriz 5 x 5. Preencha com 1 a diagonal
principal e com 0 os demais elementos.Escreva ao
final a matriz obtida
*/
#include <stdio.h>

int main(){
  int l, c, mat[5][5];

  for(l=0;l<5;l++){
    for(c=0;c<5;c++){
      // Verificação se a posição é a diagonal principal
      if( l == c ){
        mat[l][c] = 1;
      }
      else{
        mat[l][c] = 0;
      }
    }
  }

  for(l=0;l<5;l++){
    for(c=0;c<5;c++){
      printf("\t%d",mat[l][c]);
    }
    printf("\n");
  }

  return 0;
}