// Chamada de bibliotecas
#include <stdio.h>
#include <stdlib.h>

// Prototipagem de funções
void altera(int *a, int *c, int d);
void altera2(int *v);
void imprime(int*);

int main(){
  // criação de ponteiro para interiro
	int *a;
  // criação de variável do tipo inteiro
	int b, c, d;
  // criação de ponteiro para inteiro na forma de vetor com 10 posições
	int *e = (int*) malloc(5 * sizeof(int*));

  // criação de vetor de inteiros
	int v[5];
	printf("\nVetor criado");
  // chamada de função
	altera2(v);
	printf("\nVetor preenchido");
  // chamada de função
	imprime(v);
	printf("Vetor impresso");

  printf("\nDigite um numero: ");
  // recebe um número inteiro do teclado
	scanf("%d", &b);
  printf("Digite um numero: ");
  // recebe um número inteiro do teclado
	scanf("%d", &c);
  printf("Digite um numero: ");
  // recebe um número inteiro do teclado
	scanf("%d", &d);
  // ponteiro 'a' reecebe o endereço de memória da variável 'b'
	a = &b;
  // imprime o valor de b
	printf("\nValor de 'b' antes de chamar a funcao 'altera': %d", b);
  // imprime o valor de d
	printf("\nValor de 'c' antes de chamar a funcao 'altera': %d", c);
  // imprime o valor de d
	printf("\nValor de 'd' antes de chamar a funcao 'altera': %d", d);
	// chama a funcao altera
	altera(a, &c, d);
    // imprime o valor de b
	printf("\nValor de 'b' depois de chamar a funcao 'altera': %d", b);
    // imprime o valor de c
	printf("\nValor de 'c' depois de chamar a funcao 'altera': %d", c);
    // imprime o valor de d
	printf("\nValor de 'd' depois de chamar a funcao 'altera': %d", d);
	printf("\n");
	return 0;
}

// corpo da função 'altera' que recebe 3 parâmetros do tipo inteiro sendo que 2 desses parâmetros são ponteiros para inteiros
void altera(int *a, int *c, int d){
	// o conteúdo apontado pelo ponteiro 'a' é modificado com a soma do conteúdo do ponteiro 'a' e o conteúdo do ponteiro 'c'
	*a = *a + *c;
	*c = *c * 2;
	// a variável de escopo local 'd' soma seu conteúdo com o conteúdo apontado pelo ponteiro 'c'
	d += *c;
}

void altera2(int *v){
	// laço para iterar no vetor 'v' de 5 posições inserindo valores de 0 a 4
	for(int i=0; i<5; i++){
		v[i] = i;
	}
}

void imprime(int *v){
	for(int i=0; i<5; i++){
		printf("v[%d]: %d\n", i, v[i]);
	}
}

