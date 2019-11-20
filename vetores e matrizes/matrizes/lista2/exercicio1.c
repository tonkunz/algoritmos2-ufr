/*
  Faça um programa que construa uma Matriz de 20 por 20 de números inteiros
  randômicos. Para isto, use a função rand(). Em seguida, escreva se a soma
  dos elementos de cada linha e a soma dos elementos de cada coluna é par
  ou ímpar.
*/
#include <stdio.h>

#define TAM 20

int main () {
  int mat[TAM][TAM], lin, col;

  // Vetores para armazenarem as somas em cada linha e coluna respectiva
  int somaLin[TAM], somaCol[TAM];

  // Laço de preenchimento da matriz
  for(lin=0;lin<TAM;lin++) {
    for(col=0;col<TAM;col++) {
      // Geramos os valores randômicos e salvamos na matriz
      mat[lin][col] = rand() % 100;

      // Podemos aproveitar o laço para zerarmos os vetores para as somas
      somaLin[lin] = 0;
      somaCol[col] = 0;
    }
  }

  // Efetuando as somas das linhas e colunas
  for(lin=0;lin<TAM;lin++) {
    for(col=0;col<TAM;col++) {
      somaLin[lin] += mat[lin][col];
      somaCol[col] += mat[lin][col];
    }
  }

  printf("Resultados: \n\n");
  // Soma Linha
  printf("Linhas:\n");
  for(lin=0;lin<TAM;lin++) {
    printf("SomaLinha[%d]: %d - ", lin, somaLin[lin]);

    if(somaLin[lin] % 2 == 0)
      printf("E par!\n");
    else 
      printf("E impar!\n");
  }

  // Soma Coluna
  printf("\nColunas:\n");
  for(lin=0;lin<TAM;lin++) {
    printf("Soma Coluna[%d]: %d - ", lin, somaCol[lin]);

    if(somaCol[lin] % 2 == 0)
      printf("E par!\n");
    else 
      printf("E impar!\n");
  }

  return 0;
}