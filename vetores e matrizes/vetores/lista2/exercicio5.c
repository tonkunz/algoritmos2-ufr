/*
 Desenvolva um algoritmo que registra a altura de 10 modelos, calcule a m�dia de altura e imprima as alturas acima da m�dia;
*/
#include <stdio.h>

int main()
{

    int i;

    // Declarando o vetor, e a vari�vel soma e m�dia
    float vet[10], soma, media = 0;

    // Lendo a altura
    for(i=0; i<10; i++)
    {
        printf("Modelo %d, altura:",i+1);
        scanf("%f", &vet[i]);
        soma+=vet[i];
    }

    // Calculando a m�dia
    media = soma/10;

    // Imprimir alturas acima da m�dia
    printf("\nAlturas acima da media %0.2f:\n",media);
    for(i=0; i<10; i++)
    {
        if(vet[i] > media)
            printf("%0.2f\n",vet[i]);
    }

    return 0;
}
