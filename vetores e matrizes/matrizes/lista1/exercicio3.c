/*
Faça um programa que preenche uma matriz 4 x 4 com o produto do valor da linha e
da coluna de cada elemento. Em seguida, imprima na tela a matriz.
*/
#include <stdio.h>

int main (){
  int mat[4][4];
  int l, c;

  for(l=0;l<4;l++){
    for(c=0;c<4;c++){
      mat[l][c] = l * c;
      printf("\t[%d]", mat[l][c]);
    }
    printf("\n");
  }

  return 0;
}