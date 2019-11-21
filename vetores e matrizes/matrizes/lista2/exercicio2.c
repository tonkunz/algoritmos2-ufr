/*
  Faça um algoritmo que construa uma matriz 10 por 10 de números reais e
  depois de construída, colocar o conteúdo de sua diagonal principal dentro
  de um vetor e depois do vetor montado, imprimir o vetor;
*/
#include <stdio.h>

// Para randomizar números reais
#include <stdlib.h> // Necessária para as funções rand() e srand()
#include <time.h> // Necessária para a função time()

#define TAM 10

int main() {
  float mat[TAM][TAM], vetorDiagonal[TAM];
  int lin, col;
  float rangeFloat = 10.0; // Usado para função rand

  /*
    Para fazer com que os valores gerados não se repitam precisamos usar a
    função srand a fim de inicializar a função rand com um valor “semente”
    para que se produza um valor aleatório na faixa determinada. A função
    srand recebe um argumento do tipo inteiro sem sinal, ou seja unsigned int.

    srand(time(NULL)) objetiva inicializar o gerador de números  aleatórios com
    o valor da função time(NULL). Este por sua vez, é calculado
    como sendo o total de segundos passados desde 1 de janeiro de 1970 até a
    data atual. Desta forma, a cada execução o valor da "semente" será diferente.

    fonte: http://linguagemc.com.br/valores-aleatorios-em-c-com-a-funcao-rand/
  */
  srand((unsigned int) time(NULL)); 

  // Laço que alimenta a matrizes com valores reais de 0 a 10.0
  for(lin=0;lin<TAM;lin++) {
    for(col=0;col<TAM;col++) {
       mat[lin][col] = ((float)rand()/(float)(RAND_MAX)) * rangeFloat;
    }
  }
  /* 
    Para entenderem melhor como o código acima randomiza um conjunto de floats,
    confira o seguinte link do StackOverflow:
    https://stackoverflow.com/questions/13408990/how-to-generate-random-float-number-in-c
  */

  /*
    O laço imprime a matriz e preenche o vetor com a diagonal principal
  */
  for(lin=0;lin<TAM;lin++) {
    for(col=0;col<TAM;col++) {
      printf("%.2f\t", mat[lin][col]);

      // Preenchendo o vetor com os valores da diagonal principal
      if (lin == col)
        vetorDiagonal[lin] = mat[lin][col];
    }
    printf("\n");
  }

  // Imprimindo o resultado pedido no enunciado
  printf("\n\nVetor com os valores da diagona principal:\n");
  for(lin=0;lin<TAM;lin++) {
    printf("VetorDiagonal[%d]: %.2f\n", lin, vetorDiagonal[lin]);
  }

  return 0;
}