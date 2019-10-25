/*
 Desenvolva um algoritmo que leia um vetor de 10 elementos inteiros.
 Posteriormente, subtraia o valor da posição 0 pelo valor da próxima
 posição, e assim sucessivamente para todos os itens, exceto no último
 item/posição, onde você deve subtrair esse valor pelo valor da posição 0. Imprima o resultado.
*/

#include <stdio.h>

int main(){
   // define o vetore e variaveis auxiliares 
	  int i, sub, pos, vetor[10];
  
   // recebe os valores do vetor
	  printf("Entre com valores para o vetor :\n\n");
	  for (i=0; i<10; i++){
		     printf("Insira o valor na pos[%d]:", i);
		     scanf("%d", &vetor[i]);
	   }
 
    // Realizao a subtracao com o numero da posicao posterior do vetor
	   for (i=0; i<10; i++){
        
        // caso ainda nao seja a ultima posicao, segue com a operacao normalmente
		      if(i != 9){
			     pos = i + 1;
		     	sub = vetor[i] - vetor[i+1];
	     		printf("\nsubtracao da pos[%d] pela pos[%d]: %d", i, pos, sub);
	   	}
     
      // caso seja a ultima posicao, subtrai pelo valor da posicao 0
	  	else {
			     sub = vetor[9] - vetor[0];
			     printf("\nsubtracao da pos[9] pela pos[0]: %d", sub);
		  }
	 }
		

}
