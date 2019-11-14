/*
Faça um programa que receba 6 números inteiros e mostre:
  a. Os números pares digitados;
  b. A soma dos números pares digitados;
  c. Os números ímpares digitados;
  d. A quantidade de números ímpares digitados
*/
#include <stdio.h>

#define TAM 6

int main () {
  int vetor[TAM], pares[TAM], impares[TAM];
  int i, quant, soma, i_par, i_impar;

  // Laço respectivo pela leitura
  for (i=0; i<TAM; i++) {
    printf("Insira um valor para o vetor[%d]: ", i);
    scanf("%d", &vetor[i]);
  }

  // Inicializando variáveis
  i_par = 0;
  i_impar = 0;
  soma = 0;
  quant = 0;

  for (i=0; i<TAM; i++) {
    if(vetor[i] % 2 == 0) {
      pares[i_par] = vetor[i];
      soma = soma + vetor[i];
      i_par++;
    } else {
      impares[i_impar] = vetor[i];
      quant++;
      i_impar++;
    }
  }

  //Imprimindo pares
  for (i=0; i<i_par; i++) {
    printf("\nPares[%d]: %d", i, pares[i]);
  }
  printf("\nSoma dos pares: %d", soma);

  //Imprimindo impares
  for (i=0; i<i_impar; i++) {
    printf("\nImpares[%d]: %d", i, impares[i]);
  }
  printf("\nQuant de impares: %d", quant);

  return 0;
}