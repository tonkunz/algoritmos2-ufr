/*
Leia uma matriz M 5 x 5, calcular e escrever as seguintes somas:
  a. da linha 3 de M;
  b. da coluna 2 de M;
  c. da diagonal principal;
  d. da diagonal secundária;
  e. de todos os elementos da matriz.
*/
#include <stdio.h>

#define TAM 5

int main () {
  int mat[TAM][TAM], lin, col;
  int sl = 0, sc = 0, sdp = 0, sds = 0, st = 0;
  int aux = TAM - 1; // Auxiliar para diagonal secundária


  // Preenchendo a matriz principal
  printf("Preencha a Matriz: \n\n");
  for(lin=0;lin<TAM;lin++) {
    for(col=0;col<TAM;col++) {
      printf("Matriz[%d][%d]: ", lin, col);
      scanf("%d", &mat[lin][col]);
    }
  }

  // Efetuando as somas
  for(lin=0;lin<TAM;lin++){
    for(col=0;col<TAM;col++){
      // If para somar a quarta linha
      if(lin==3){
        sl += mat[lin][col];
      }
      // If para somar a terceira coluna
      if(col==2){
        sc += mat[lin][col];
      }
      // If para somar a diagonal principal
      if(lin==col){
        sdp += mat[lin][col];
      }
      // If para somar a diagona inversa
      if(col==aux){
        sds += + mat[lin][col];
        aux--;
      }
      // Soma total
      st += mat[lin][col];
    }
  }

  // Apresentando resultados
  printf("\n\nImpressao dos resultados: \n\n");
  printf("Soma da linha 3:  %d\n", sl);
  printf("Soma coluna 2: %d\n", sc);
  printf("Soma diagonal principal: %d\n", sdp);
  printf("Soma diagonal secundaria: %d\n", sds);
  printf("Soma total: %d\n", st);
  
  return 0;
}