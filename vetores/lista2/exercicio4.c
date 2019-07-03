/*
 Desenvolva um algoritmo que leia um vetor de 10 elementos inteiros. Determinar e
 escrever a maior diferen�a entre dois elementos consecutivos desse vetor.
*/

#include <stdio.h>

int main()
{
    // Declarando o vetor
    int vet[10], i, diferenca;

    // Lendo os valores do vetor e calculando a maior diferen�a
    for(i=0; i<10; i++)
    {
      printf("Insira o valor no vetor_1[%2d]: ",i);
      scanf("%d",&vet[i]);

      // Indice 'i' tem que ser maior que 0
      if(i > 0)
      {

        if(i == 1)                                  // A vari�vel diferenca come�a com o valor da posi��o do  vetor[0] - vetor[1]
            diferenca = vet[i-1] - vet[i];
        else if((vet[i-1] - vet[i]) > diferenca)    // Se caso tiver um diferen�a maior que a vari�vel diferenca, ent�o recebe o novo valor
            diferenca = vet[i-1] - vet[i];

      }
    }

    // Impress�o da maior diferen�a

    printf("Maior diferenca: %d\n", diferenca);

    return 0;
}

