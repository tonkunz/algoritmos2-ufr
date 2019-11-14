/*
Desenvolva um algoritmo que leia 2 vetores de 10 elementos inteiros cada.
Em seguida, calcule a soma desses vetores, guarde o resultado em um terceiro
vetor e escreva o resultado;
*/

#include <stdio.h>

int main()
{
  // Declarando os 3 vetores
  int vet_1[10], vet_2[10], vet_soma[10], i;

  /*
     Lendo os valores do vetor 1 e 2 e somando os valores no vetor soma,
     por exemplo:
      vet_1[0] = 1, vet_2[0] = 1, então vet_soma[0] = 2
    */
  for (i = 0; i < 10; i++)
  {
    printf("Insira o valor no vetor_1[%2d]: ", i);
    scanf("%d", &vet_1[i]);
    printf("Insira o valor no vetor_2[%2d]: ", i);
    scanf("%d", &vet_2[i]);
    vet_soma[i] = vet_1[i] + vet_2[i];
  }

  printf("\n\n");

  // Impressão do vetor soma
  for (i = 0; i < 10; i++)
  {
    printf("Valor no Vetor_soma[%2d]: %d\n", i, vet_soma[i]);
  }

  return 0;
}
