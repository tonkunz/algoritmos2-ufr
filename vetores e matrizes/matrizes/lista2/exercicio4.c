/*
  Faça um programa que deverá permitir que o usuário entre com os valores dos
  elementos de uma matriz quadrada de ordem 4 e possibilite o usuário realizar
  as seguintes funcionalidades:

    a) Imprimir todos os elementos da matriz;
    b) Somar os quadrados de todos os elementos da primeira coluna;
    c) Somar os elementos da diagonal principal;
    e) Somar todos os elementos de índice par da segunda linha.
    d) Crie um "menu principal" para que o usuário acesse as funcionalidades na
       ordem e maneira que preferir.
*/
#include <stdio.h>

#define TAM 4

int main() {
  int mat[TAM][TAM], lin, col;
  int menu, somaQuadrados = 0, somaDiagPrincipal = 0, somaPares = 0;

  // Laço de leitura da matriz
  printf("\n\nPreenchimento da Matriz:\n");
  for(lin=0;lin<TAM;lin++) {
    for(col=0;col<TAM;col++) {
      printf("mat[%d][%d]: ", lin, col);
      scanf("%d", &mat[lin][col]);
    }
  }
  printf("\n\n");

  // Laço para os cálculos
  for(lin=0;lin<TAM;lin++) {
    for(col=0;col<TAM;col++) {
      // b) Somar os quadrados de todos os elementos da primeira coluna;
      if (col == 0)
        somaQuadrados += mat[lin][col] * 2;

      // Somar os elementos da diagonal principal;
      if (lin == col)
        somaDiagPrincipal += mat[lin][col];

      //e) Somar todos os elementos de índice par da segunda linha.
      /*
        Aqui a expressão verifica se a linha é igual a 2 e se a coluna é diferente
        de 0. Se as duas primeiras expressões retornam verdadeiras, aí a última
        verificação a ser feita é ser este índice é par com operador de módulo "%"
        
        PS: Como a matriz é 4x4, a única colula par é a coluna 2. Mas mantemos as
        verificaçoes para ser um código escalável para matrizes maiores.
      */
      if ((lin == 2 && col != 0) && (col % 2 == 0))
        somaPares += mat[lin][col];

    }
  }

  // Menu principal
  do {
    printf("==== MENU ====\n");
    printf("1 - Imprimir toda a matriz;\n");
    printf("2 - Somar os quadrados de todos os elementos da primeira coluna;\n");
    printf("3 - Somar os elementos da diagonal principal;\n");
    printf("4 - Somar todos os elementos de índice par da segunda linha;\n");
    printf("0 - Encerrar;\n");
    printf("Entre com a opcao: ");
    scanf("%d", &menu);

    switch(menu) {
      case 1:
        printf("\n\nImpressao da Matriz:\n");
        for(lin=0;lin<TAM;lin++) {
          for(col=0;col<TAM;col++) {
            printf("%d\t ", mat[lin][col]);
          }
          printf("\n");
        }
        printf("\n\n");     
        break;
      case 2:
        printf("\nSoma dos quadrados dos elementos da coluna 0: %d\n\n", somaQuadrados);
        break;
      case 3:
        printf("\nSoma dos elementos na diagonal principal: %d\n\n", somaDiagPrincipal);
        break;
      case 4:
        printf("\nSoma dos elementos de indice par da segunda linha: %d\n\n", somaPares);
        break;
      case 0:
        printf("\n\nEncerrando o programa...\n\n");
        break;
      default:
        printf("\n\nVoce nao digitou uma opcao valida...\n\n");
    }
  } while(menu != 0);

  return 0;
}