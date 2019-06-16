/*
Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado
dos componentes deste vetor, armazenando o resultado em outro vetor.
Os conjuntos possuem 10 elementos cada. Imprimir todos os conjuntos.
*/
#include <stdio.h>

// Definindo constante TAMANHO do vetor
#define TAM 3

int main() {
  float vetor[TAM], quadrado[TAM];
  int i;

  printf("----INSERINDO VALORES----\n\n");
  for(i=0;i<TAM;i++){
    printf("Insira para Vetor[%d]: \n", i);
    scanf("%f", &vetor[i]);
    quadrado[i] = vetor[i] * vetor[i];
  }

  printf("\n\n----VETOR ORIGINAL/ VETOR COM QUADRADOS----\n\n");
  for(i=0;i<TAM;i++) {
    printf("Vetor[%d]: %.2f\n", i, vetor[i]);
    printf("Quadrado[%d]: %.2f\n", i, quadrado[i]);
  }

  return 0;
}