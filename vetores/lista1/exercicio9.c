/*
Crie um programa que leia um vetor de 5 posições de números reais e, depois, um
código inteiro em uma variável comum. Se o código for zero, finalize o programa; se
for 1, mostra o vetor na ordem direta; se for 2 imprima na ordem inversa. Caso o
usuário insira um código diferente de 1 e 2 escreva uma mensagem informando que
o código é inválido.
*/
#include <stdio.h>

#define TAM 5

int main () {
  float vetor[TAM];
  int cod, i;

  // Laço responsável pela leitura
  printf("---Leitura do Vetor---\n\n");
  for (i=0;i<TAM;i++){
    printf("Insira valor[%d]:\n", i);
    scanf("%f", &vetor[i]);
  }

  // Laço de menu
  do {
    printf("\n\nInforme um valor para codigo, conforme o menu:\n");
    printf("1 - Para imprimir o vetor na ordem direta.\n");
    printf("2 - Para imprimir o vetor na ordem inversa.\n");
    printf("0 - Para encerrar o programa.\n");
    scanf("%d", &cod);

    switch(cod) {
      case 1:
        printf("\nSelecionado a impressao direta:\n");
        for(i=0;i<TAM;i++){
          printf("Vetor[%d]: %f\n", i, vetor[i]);
        }
      break;
      case 2:
        printf("\nSelecionado a impressao inversa:\n");
        for(i=TAM-1;i>=0;i--){
          printf("Vetor[%d]: %f\n", i, vetor[i]);
        }     
      break;
      default:
        printf("\nVoce informou uma opcao invalida, tente novamente!\n");
      break;
    }
  } while (cod != 0);

  // Impressao final
  printf("\nVoce encerrou o programa!\n");

  return 0;
}