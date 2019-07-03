/*
 Desenvolva um algoritmo que leia um vetor de 10 elementos inteiros. Determinar e
 escrever a maior diferença entre dois elementos consecutivos desse vetor.
*/

#include <stdio.h>

int main()
{
    // Declarando o vetor
    int vet[10], i, diferenca;

    // Lendo os valores do vetor e calculando a maior diferença
    for(i=0; i<10; i++)
    {
      printf("Insira o valor no vetor_1[%2d]: ",i);
      scanf("%d",&vet[i]);

      // Indice 'i' tem que ser maior que 0
      if(i > 0)
      {

        if(i == 1)                                  // A variável diferenca começa com o valor da posição do  vetor[0] - vetor[1]
            diferenca = vet[i-1] - vet[i];
        else if((vet[i-1] - vet[i]) > diferenca)    // Se caso tiver um diferença maior que a variável diferenca, então recebe o novo valor
            diferenca = vet[i-1] - vet[i];

      }
    }

    // Impressão da maior diferença

    printf("Maior diferenca: %d\n", diferenca);

    return 0;
}

