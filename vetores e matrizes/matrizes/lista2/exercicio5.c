/*
  Faça um programa que leia uma matriz de 5 linhas e 4 colunas contendo as
  seguintes informações sobre alunos de uma disciplina, sendo todas as
  informações do tipo inteiro:

    - Primeira coluna: número de matrícula (use um inteiro);
    - Segunda coluna: média das provas;
    - Terceira coluna: média dos trabalhos;
    - Quarta coluna: nota final.

    Elabore um programa que:
    a) Leia as três primeiras informações de cada aluno;
    b) Calcule a nota final como sendo a soma da média das provas e da média
       dos trabalhos;
    c) Imprima a matrícula do aluno que obteve a maior nota final (assuma que
       só existe uma maior nota);
    d) Imprima a média aritmética das notas finais.

*/
#include <stdio.h>

#define LIN 3
#define COL 4

int main() {
  float alunos[LIN][COL];
  int lin, col, matricula, menu, maiorNota;

  // Menu
  do {
    printf("==== MENU ====\n");
    printf("1 - Ler a matriz de alunos;\n");
    printf("2 - Mostrar aluno com maior nota;\n");
    printf("3 - Mostrar alunos e notas finais;\n");
    printf("0 - Encerrar;\n");
    printf("Entre com a opcao: ");
    scanf("%d", &menu);

    switch(menu) {
      case 1:
        // Cadastrar alunos
        for(lin=0;lin<LIN;lin++) {
          printf("\n\nEntre com a matricula: ");
          scanf("%d", &matricula); // Lemos um inteiro referente a matrícula
          // Depois com casting, salvamos na posição 0 da linha
          alunos[lin][0] = (float) matricula;

          printf("Notas de provas: ");
          scanf("%f", &alunos[lin][1]);

          printf("Notas de trabalhos: ");
          scanf("%f", &alunos[lin][2]);

          // Calculo da média final
          alunos[lin][3] = ((alunos[lin][1] + alunos[lin][2]) / 2);
        }
        printf("\n\n");    
        break;
      case 2:
        // Imprimir a maior nota
        maiorNota = 0;
        for(lin=0;lin<LIN;lin++) {
          if(alunos[maiorNota][3] < alunos[lin][3])
            maiorNota = lin; // Recebe a linha do aluno que possui a maior nota
        }

        // Demonstração dos resultados
        printf("\n\nAluno sob a matricula: %d\n", (int) alunos[maiorNota][0]);
        printf("Possui a media: %.2f\n", alunos[maiorNota][3]);
        printf("Sendo essa, a maior media encontrada...\n\n");
        break;
      case 3:
        printf("\n\nAlunos e notas finais:\n\n");
        for(lin=0;lin<LIN;lin++) {
          printf("Matricula %d\n", (int) alunos[lin][0]);
          printf("Media final: %.2f\n", alunos[lin][3]);
          printf("\n\n");
        }
        break;
      case 0:
        printf("\n\nEncerrando o programa...\n");
        break;
      default:
        printf("\n\nVoce nao digitou uma opcao valida...\n\n");
    }
  } while(menu != 0);

  return 0;
}