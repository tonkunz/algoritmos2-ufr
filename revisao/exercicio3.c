/*
Leia uma matriz M 5 x 5, calcular e escrever as seguintes somas:
  a. da linha 3 de M;
  b. da coluna 2 de M;
  c. da diagonal principal;
  d. da diagonal secundária;
  e. de todos os elementos da matriz.
*/
#include <stdio.h>

#define DIM 5

int main () {
  int mat[DIM][DIM], l, c;
  int sl = 0, sc = 0, sdp = 0, sds = 0, st = 0;
  int aux = DIM - 1; // Auxiliar para diagonal secundária


  // Preenchendo a matriz principal
  printf("Leitura da matriz:\n");
  for(l=0;l<DIM;l++) {
    for(c=0;c<DIM;c++) {
      printf("Mat[%d][%d]: ", l, c);
      scanf("%d", &mat[l][c]);
    }
  }

  // Efetuando as somas
  for(l=0;l<DIM;l++){
    for(c=0;c<DIM;c++){
      // If para somar a quarta linha
      if(l=3){
        sl = sl + mat[l][c];
      }
      // If para somar a terceira coluna
      if(c=2){
        sc = sc + mat[l][c];
      }
      // If para somar a diagonal principal
      if(l==c){
        sdp = sdp + mat[l][c];
      }
      // If para somar a diagona inversa
      if(c==aux){
        sds = sds + mat[l][c];
        aux--;
      }
      // Soma total
      st = st + mat[l][c];
    }
  }

  // Apresentando resultados
  printf("\n\nImpressão dos resultados: \n");
  printf("Soma da linha 3:  %d", sl);
  printf("Soma coluna 2: %d", sc);
  printf("Soma diagonal principal: %d", sdp);
  printf("Soma diagonal secundaria: %d", sds);
  printf("Soma total: %d", st);
  
  return 0;
}