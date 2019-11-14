/*
Crie um programa que lê um vetor de 10 números inteiros e, em seguida, mostre:
a. O maior elemento e a posição que ele se encontra;
b. O menor elemento e a posição que ele se encontra;
*/
#include <stdio.h>

#define TAM 10

int main () {
  int vetor[TAM], i;
  int maior = 0;
  int menor = 0;

  // Laço respectivo pela leitura
  for (i=0; i<TAM; i++) {
    printf("Insira um valor para o vetor[%d]: ", i);
    scanf("%d", &vetor[i]);
  }
  
  // Laço de comparação
  for (i=0; i<TAM; i++) {
    if(vetor[i] > vetor[maior]) {
      maior = i;
    }

    if (vetor[i] < vetor[menor]) {
      menor = i;
    }
  }

  // Resultados
  printf("\n\nO maior é: %d, e esta na posicao %d", vetor[maior], maior);
  printf("\nO menor é: %d, e esta na posicao %d", vetor[menor], menor);

  return 0;
}