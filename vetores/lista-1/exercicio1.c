/*
Crie um programa que leia 6 números inteiros e, em seguida, mostre na tela os
valores lidos.
 */
#include <stdio.h>

int main () {
  // Declarando o vetor e o contador
  int vetor[6], i;

  // Laço de leitura do vetor
  for (i=0;i<6;i++){
    printf("Insira valor[%d]:\n", i);
    scanf("%d", &vetor[i]);
  }

  // Laço de impressão
  for (i=0;i<6;i++){
    printf("Valor: %d\n", vetor[i]);
  }

  return 0;
}