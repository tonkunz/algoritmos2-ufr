/*
 Desenvolva um algoritmo que leia um vetor de 10 elementos inteiros.
 Posteriormente, subtraia o valor da posi��o 0 pelo valor da pr�xima
 posi��o, e assim sucessivamente para todos os itens, exceto no �ltimo
 item/posi��o, onde voc� deve subtrair esse valor pelo valor da posi��o 0. Imprima o resultado.
*/

#include <stdio.h>

int main()
{

    // Declarando o vetor e o vetor auxiliar
    int vet[10], vet_aux[10], i;

    // Lendo o vetor e o vetor auxiliar
    for(i=0; i<10; i++)
    {
        printf("Insira o valor no vetor[%2d]: ",i);
        scanf("%d", &vet[i]);
        vet_aux[i]=vet[i];
    }

    printf("\n\n");

    // Subtraindo as posi��es e imprimindo em sequ�ncia
    for(i=0; i<10; i++)
    {
        if(i != 9)
        {
            vet[i] = vet_aux[i] - vet_aux[i+1];
            printf("vetor[%2d]: %d\n",i,vet[i]);
        }
        else
        {
            vet[i] = vet_aux[i] - vet_aux[0];
            printf("vetor[%2d]: %d\n",i,vet[i]);
        }

    }

    return 0;
}
