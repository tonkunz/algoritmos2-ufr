/*
Escreva um algoritmo que leia um vetor de 20 posições e mostre-o. Em seguida,
troque o primeiro elemento pelo o último, o segundo com o penúltimo, o terceiro com
o antepenúltimo e, assim, sucessivamente. Mostre o novo vetor após todas as
trocas
*/
#include <stdio.h>

#define TAM 6

int main () {
  int vet[TAM], i, lim, aux = 0;

  // Ler o vetor
  printf("Insira os valores para o vetor:\n");
  for(i=0;i<TAM;i++){
    printf("Vet[%d]: ", i);
    scanf("%d", &vet[i]);
  }

  // Impressão do vetor
  printf("\n-------Vetor Original-------\n");
  for(i=0;i<TAM;i++) {
    printf("%d\t", vet[i]);
  }

  // Efetuar a troca de elementos
  lim = TAM - 1;
  for (i=0;i<TAM/2;i++) {
    aux = vet[i]; // backup
    vet[i] = vet[lim];
    vet[lim] = aux;
    lim --;
  }

  // Impressão vetor resultante
  printf("\n-------Vetor Resultante-------\n");
  for(i=0;i<TAM;i++) {
    printf("%d\t", vet[i]);
  }
  printf("\n");

  return 0;
}