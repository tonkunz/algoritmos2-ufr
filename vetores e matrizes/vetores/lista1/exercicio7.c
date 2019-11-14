/*
Faça um programa que leia 15 notas de alunos e no final, calcule e
imprima a média aritmética geral.
*/
#include <stdio.h>

#define TAM 15

int main () {
  int vetor[TAM], i;
  float soma = 0, media = 0;
  
  // Laço respectivo pela leitura
  for (i=0; i<TAM; i++) {
    printf("Insira um valor para o vetor[%d]: ", i);
    scanf("%d", &vetor[i]);
    soma = soma + vetor[i];
  }

  media = soma / TAM;
 
  // Impressão dos resultados
  printf("\n\nMedia Aritmetica: %.2f\n", media);

  return 0;
}