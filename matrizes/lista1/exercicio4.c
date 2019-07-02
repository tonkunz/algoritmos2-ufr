/*
Leia uma matriz 4 x 4, imprima a matriz e retorne a localização (linha e a coluna) do
maior valor.
*/
#include <stdio.h>

int main () {
  int mat[4][4], l, c;
  int maior, linha = 0, coluna = 0;

  // Preenchendo a Matriz
  printf("Preencha a Matriz\n");
  for(l=0;l<4;l++){
    for(c=0;c<4;c++){
      printf("Matriz[%d][%d]: ", l, c);
      scanf("%d", &mat[l][c]);
    }
    printf("\n");
  }

  // Verificando o maior valor
  maior = mat[0][0];
  for(l=0;l<4;l++){
    for(c=0;c<4;c++){
      if(mat[l][c] > maior){
        maior = mat[l][c];
        linha = l;
        coluna = c;
      }
    }
  }

  // Impressão dos resultados
  printf("\nO maior valor encontrado:\n");
  printf("Matriz[%d][%d] = %d\n",linha,coluna,maior);

  return 0;
}