/*
 Desenvolva um algoritmo que leia um conjunto de 20 valores inteiros, guarde os em um vetor e escreva-os em ordem contr�ria.
 Por exemplo, trocar vetor[0] com vetor[19], trocar vetor[1] com vetor[18], etc;
*/

#include <stdio.h>

int main()
{
    // Declarando o vetor e o vetor auxiliar e o indice
    int vet[20], vet_aux[20], i, j;

    // La�o de leitura do vetor
    for(i=0; i<20; i++)
    {
        printf("Insira o valor no vetor[%2d]: ",i);
        scanf("%d",&vet[i]);
    }


    // La�o para trocar as posi��es em ordem contr�ria com vetor auxiliar
    j=19;
    for(i=0; i<20; i++)
    {
        vet_aux[i]=vet[j];
        j--;
    }

    printf("\n");
    printf("***Vetor em ordem contraria***");
    printf("\n\n");

    // La�o de impress�o
    for(i=0; i<20; i++)
    {
        printf("Valor no vetor[%2d]:%2d\n",i, vet_aux[i]);
    }

    return 0;
}
