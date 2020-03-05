#include <stdio.h>
#include <stdlib.h>

// tipo definido pelo usuário para registro contendo campos do tipo int e float (variável composta heterogênea)
typedef struct info{
	int cod;
	int idade;
	float peso;
}reg;

int menu();
void inserir(reg *v);
void remover(reg *v);
void mostrar(reg *v);

int main(){
	// criação de vetor do tipo 'reg' com 10 posições
	reg v[10];
	// faz a mesma coisa que a linha acima
	//reg *vet = (reg*) malloc(10 * sizeof(reg*));

	// criação de variável de controle 'op'
	int op;
	do{
		// chamada da função 'menu' esperando como retorno a opção escolhida pelo usuário
		op = menu();
		switch(op){
			case 1:
				// caso a opção seja '1' chama a função 'inserir' passando como parâmetro o vetor 'v'
				inserir(v);
				break;
			case 2:
				remover(v);
				break;
			case 3:
				mostrar(v);
				break;
			case 4:
				printf("Saindo!\n");
				break;
			default:
				// caso o usuário digite valores diferentes de 1 a 4 chama 'menu' novamente
				printf("Escolha uma opcao valida\n");
				break;
		}
	}while(op != 4);
}

// corpo da função 'menu'
int menu(){
	int op;
	printf("MENU\n");
	printf("1...Inserir\n");
	printf("2...Remover\n");
	printf("3...Mostrar\n");
	printf("4...Sair\n");
	printf("Escolha uma opcao: ");
	scanf("%d", &op);
	printf("\n");
	return(op);
}

// aqui deve ser criado o corpo da função inserir que irá inserir os dados informados pelo usuário tal qual aparecem no registro declarado no início do programa. Para cada vez que a função for chamada apenas uma posição do vetor deve ser inserida, mas cada posição originalmente tem 3 campos: cod, idade e peso.
void inserir(reg *v){
	printf("Funcao inserir\n");
}

// aqui deve ser criado o corpo da função remover que irá remover os últimos dados informados pelo usuário. Para cada vez que a função for chamada apenas uma posição do vetor deve ser removida, mas cada posição originalmente tem 3 campos: cod, idade e peso.
void remover(reg *v){
	printf("Funcao remover\n");
}

// aqui deve ser criado o corpo da função mostrar que irá imprimir todos os dados informados pelo usuário tal qual aparecem no registro declarado no início do programa. Para cada vez que a função for chamada todos os dados devem ser mostrados, mas somente os que tiverem dados válidos, ou seja, não deve imprimir as posições do vetor em que ainda não foram inseridos dados ou que os dados já foram removidos.

void mostrar(reg *v){
	printf("Funcao mostrar\n");
}

