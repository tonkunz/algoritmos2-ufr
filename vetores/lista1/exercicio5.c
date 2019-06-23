/*
Crie um programa que lê um vetor de 10 posições e ao final, imprime quantos
valores pares este vetor possui.
*/
#include <stdio.h>

#define TAM 10

int main () {
  int i, vetor[TAM];
  int soma_par = 0; //É necessário inicializar a variável

  // Laço responsável pela leitura do vetor e identificação de numeros pares
  for (i=0; i<TAM; i++) {
    printf("Insira um valor para o vetor[%d]: ", i);
    scanf("%d", &vetor[i]);

    if (vetor[i] % 2 == 0) {
      soma_par++;
    }
  }

  // Impressão dos resultados
  printf("\n\nA Quantidade de numeros pares e: %d\n", soma_par);
  return 0;
}