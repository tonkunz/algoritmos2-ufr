/*
Leia uma matriz A de 4 x 4, calcular e escrever as somas dos elementos marcados
com o X. Utilizar estruturas de repetição:
XX..   ....   X...   .XXX
XX..   ....   XX..   ..XX
....   ..XX   XXX.   ...X
....   ..XX   XXXX   ....
*/
#include <stdio.h>

#define DIM 4

int main()
{
  int A[DIM][DIM], l, c;
  int s1 = 0, s2 = 0, s3 = 0, s4 = 0;

  // Preenchendo a matriz
  printf("Leitura da matriz A:\n");
  for (l = 0; l < DIM; l++)
  {
    for (c = 0; c < DIM; c++)
    {
      printf("A[%d][%d]: ", l, c);
      scanf("%d", &A[l][c]);
    }
  }

  // Efetuando as somas
  for (l = 0; l < DIM; l++)
  {
    for (c = 0; c < DIM; c++)
    {
      // Primeira soma
      if (c <= 1 && l <= 1)
      {
        s1 = s1 + A[l][c];
      }

      // Segunda soma
      if (c >= 2 && l >= 2)
      {
        s2 = s2 + A[l][c];
      }

      // Terceira soma
      if (l >= c)
      {
        s3 = s3 + A[l][c];
      }

      // Quarta soma
      if (l < c)
      {
        s4 = s4 + A[l][c];
      }
    }
  }

  // Apresentando resultados
  printf("\n\nImpressão dos resultados: \n");
  printf("Soma 1:  %d\n", s1);
  printf("Soma 2:  %d\n", s2);
  printf("Soma 3:  %d\n", s3);
  printf("Soma 4:  %d\n", s4);

  return 0;
}