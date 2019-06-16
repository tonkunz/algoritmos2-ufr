/*
  Faça um programa que leia um vetor de 8 posições e, em seguida, leia também
dois valores X e Y quaisquer correspondentes a duas posições no vetor. Ao final
seu programa deverá escrever a soma dos valores encontrados nas respectivas
posições X e Y.
*/
#include <stdio.h>

#define TAM 8

int main() {
  int vetor[TAM], i, x, y;

  printf("----INSERINDO VALORES NO VETOR----\n\n");
  for(i=0;i<TAM;i++){
    printf("Vetor[%d]: \n", i);
    scanf("%d", &vetor[i]);
  }

  printf("----INSERINDO X E Y----\n\n");
  // Loop usado para garantir que o usuário insira o valor certo para X
  do {
    printf("Insira um valor para X (entre 0 e 7): \n");
    scanf("%d", &x);
  } while (x<0 || x>7);

 // Loop usado para garantir que o usuário insira o valor certo para Y
  do {
    printf("Insira um valor para Y (entre 0 e 7): \n");
    scanf("%d", &y);
  } while (y<0 || y>7);

  printf("----RESULTADO DA SOMA----\n\n");
  printf("Vetor[X: %d] + Vetor[Y: %d] = %d", x, y, vetor[x] + vetor[y]);
 
  return 0;
}