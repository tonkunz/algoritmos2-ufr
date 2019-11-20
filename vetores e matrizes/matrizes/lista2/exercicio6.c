/*
  Leia uma matriz G 5 x 5 e criar 2 vetores SL e SC de 5 elementos que
  contenham respectivamente as somas das linhas e das colunas de G. Escrever
  os vetores criados
*/
#include <stdio.h>

#define TAM 5

int main() {
  int G[TAM][TAM], SL[TAM], SC[TAM];
  int lin, col;

  // Zerar os vetores de soma
  for(lin=0; lin<TAM; lin++) {
    SL[lin] = 0;
    SC[lin] = 0;
  }

  // Leitura da Matriz
  printf("Preencha a Matriz G: \n\n");
  for(lin=0;lin<TAM;lin++) {
    for(col=0;col<TAM;col++) {
      printf("G[%d][%d]: ", lin, col);
      scanf("%d", &G[lin][col]);

      // Já efetuamos as somas nos vetores respectivos
      SL[lin] += G[lin][col];
      SC[col] += G[lin][col];
    }
  }

  // Apresentação dos resultados
  printf("\n\nSoma das linhas: \n");
  for(lin=0; lin<TAM; lin++)
    printf("SL[%d]: %d\t", lin, SL[lin]);

  printf("\n\nSoma das colunas: \n");
  for(lin=0; lin<TAM; lin++)
    printf("SC[%d]: %d\t", lin, SC[lin]);

  return 0;
}