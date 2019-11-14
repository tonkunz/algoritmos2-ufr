/*
 Desenvolva um algoritmo que leia um conjunto de 10 valores reais, guarde-os em um vetor, calcule a soma dos
 valores armazenados em posi��es �mpares e escreva o resultado.
*/
#include <stdio.h>

int main()
{
    // Declarando o vetor e a vari�vel de soma

    float vet[10], soma = 0;
    int i;

    // Lendo e somando os valores nas posi��es �mpares na vari�vel soma
    for(i=0; i<10; i++)
    {
        printf("Insira o valor no vetor[%2d]: ",i);
        scanf("%f",&vet[i]);

        // Verificar se a posi��o � impar, se for, somar na vari�vel soma
        if(i % 2 != 0)
            soma+=vet[i];
    }

    // Impress�o do resultado
    printf("\nResultado da soma das posicoes impares no vetor: %0.2f\n",soma);


    return 0;
}
