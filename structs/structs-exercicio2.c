/* Enunciado
Escrever um programa que cadastre o nome, a altura, o peso, o cpf e sexo de
algumas pessoas. Com os dados cadastrados, em seguida localizar uma pessoa
através do seu CPF e imprimir o seu IMC
*/
#include <stdio.h>
// Para acesso a função strcmp() e comparar conteúdo de strings
#include <stdlib.h>

// Constantes
#define DIM 2

// Declarando o registro
struct cadastro {
	char nome[30];
	char cpf[11];
	float altura;
	float peso;
	char sexo;
};

int main () {
	struct cadastro pessoas[DIM];
	int i;
	char cpf_aux[30];
	
	// Laço responsável pela leitura dos valores
	printf("\n---------- Cadastro de pessoas -----------\n\n\n");
	for(i=0;i<DIM;i++){
		printf("Cadastro na posicao %d\n", i);
		printf("Insira o nome...........: ");
		scanf("%s", &pessoas[i].nome);
		printf("Insira o CPF............: ");
		scanf("%s", &pessoas[i].cpf);
		printf("Insira altura...........: ");
		scanf("%f", &pessoas[i].altura);
		printf("Insira o peso...........: ");
		scanf("%f", &pessoas[i].peso);
		printf("Insira o sexo...........: ");
		scanf("%c", &pessoas[i].sexo);
		printf("\n\n");
	}
	
	printf("\n\n-------- Busca e calculo do IMC ---------\n\n\n");
	printf("Informe o CPF que deseja buscar: \n");
	scanf("%s", &cpf_aux);
	
	printf("\n\n-------- Resultados encontrados ---------\n\n\n");
	for(i=0;i<DIM;i++){
		
		
		if(strcmp(pessoas[i].cpf, cpf_aux) == 0) {
			printf("O IMC do usuario %s e %.2f", pessoas[i].nome, pessoas[i].peso/(pessoas[i].altura * 2));
		}
	}
		
	return 0;
}
