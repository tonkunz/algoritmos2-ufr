/*
  Elabore um programa que armazene as seguintes informações de 10 alunos
  de uma turma:
    ● nome;
    ● sobrenome;
    ● matrícula;
    ● turma;
    ● data de nascimento.
  O programa deve possuir um menu com as seguintes opções:
    1. Cadastrar novamente o vetor de 10 alunos;
    2. Apresentar todos os alunos com: matrícula nome e sobrenome.
    3. Consultar um aluno pela matrícula;
    4. Encerrar o programa.
*/
#include <stdio.h>

#define TAM 2

// Definindo nossa estrutura de alunos
struct registro
{
  char nome[30];
  char sobrenome[30];
  int matricula;
  char turma[5];
};

int main()
{
  struct registro alunos[TAM];
  int i, find, matricula, op;

  // Preenchimento inicial do vetor
  printf("Insira os dados iniciais para o vetor de aluno:\n");
  for (i = 0; i < TAM; i++)
  {
    printf("--==Cadastro numero %d==--\n", i + 1);
    printf("Nome..............: ");
    scanf("%s", alunos[i].nome);
    printf("Sobrenome.........: ");
    scanf("%s", alunos[i].sobrenome);
    printf("Matricula.........: ");
    scanf("%d", &alunos[i].matricula);
    printf("Turma.............: ");
    scanf("%s", alunos[i].turma);
    printf("\n");
  }

  //Menu principal
  do
  {
    printf("\n\n--==Menu Principal==--\n");
    printf("1. Cadastrar novamente o vetor de 10 alunos\n");
    printf("2. Apresentar todos os alunos com: matrícula nome e sobrenome.\n");
    printf("3. Consultar um aluno pela matrícula.\n");
    printf("4. Encerrar o programa.\n");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
      printf("Insira os dados para o vetor de aluno:\n");
      for (i = 0; i < TAM; i++)
      {
        printf("--==Cadastro numero %d==--\n", i + 1);
        printf("Nome..............: ");
        scanf("%s", alunos[i].nome);
        printf("Sobrenome.........: ");
        scanf("%s", alunos[i].sobrenome);
        printf("Matricula.........: ");
        scanf("%d", &alunos[i].matricula);
        printf("Turma.............: ");
        scanf("%s", alunos[i].turma);
        printf("\n");
      }
      break;
    case 2:
      printf("\nImpressao de todos os registros no vetor:\n\n");
      for (i = 0; i < TAM; i++)
      {
        printf("Cadastro numero %d\n", i + 1);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Sobrenome: %s\n", alunos[i].sobrenome);
        printf("\n");
      }
      break;
    case 3:
      printf("\nBusca de aluno por matricula:\n");
      scanf("%d", &matricula);
      find = -1; // Inicializando a variavél de busca
      for (i = 0; i < TAM; i++)
      {
        if (matricula == alunos[i].matricula)
          find = i;
      }
      // Apresentando resultados
      if (find == -1)
        printf("\nNao foi encontrado nenhum aluno com essa matricula!\n");
      else
      {
        printf("\nResultado encontrado: \n\n");
        printf("Matricula: %d\n", alunos[find].matricula);
        printf("Nome: %s\n", alunos[find].nome);
        printf("Sobrenome: %s\n", alunos[find].sobrenome);
      }
      break;
    default:
      printf("\nVoce informou uma opcao invalida, tente novamente!\n");
      break;
    }

  } while (op != 4);

  printf("\nEncerrando programa...\n");

  return 0;
}