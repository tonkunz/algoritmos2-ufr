# Matrizes: Lista 1

As resoluções estão nomeadas conforme a numeração dos respectivos enunciados.
Exemplo:

| Enunciado | Resolução    |
| --------- | ------------ |
| Nº 1      | exercicio1.c |
| Nº 2      | exercicio2.c |
| Nº 3      | exercicio3.c |

## Enunciado dos exercícios:

1. Faça um programa que construa uma Matriz de 20 por 20 de números inteiros randômicos. Para isto, use a função [rand()]((http://linguagemc.com.br/valores-aleatorios-em-c-com-a-funcao-rand/)). Em seguida, escreva se a soma dos elementos de cada linha e a soma dos elementos de cada coluna é par ou ímpar.

    Para saber como a função rand() funciona, [clique aqui](http://linguagemc.com.br/valores-aleatorios-em-c-com-a-funcao-rand/)

2. Faça um algoritmo que construa uma matriz 10 por 10 de números reais e depois de construída, colocar o conteúdo de sua diagonal principal dentro de um vetor e depois do vetor montado, imprimir o vetor;

3. Faça um programa que gere uma matriz transposta (Matriz transposta é toda a matriz onde são trocadas as linhas pelas colunas, ou vice-versa);

4. Faça um programa que deverá permitir que o usuário entre com os valores dos elementos de uma matriz quadrada de ordem 4 e possibilite o usuário realizar as seguintes funcionalidades:

    a) Imprimir todos os elementos da matriz;

    b) Somar os quadrados de todos os elementos da primeira coluna;

    c) Somar os elementos da diagonal principal;

    e) Somar todos os elementos de índice par da segunda linha.

    d) Crie um "menu principal" para que o usuário acesse as funcionalidades na ordem e maneira que preferir.

5. Faça um programa que leia uma matriz de 5 linhas e 4 colunas contendo as seguintes informações sobre alunos de uma disciplina, sendo todas as informações do tipo inteiro:

    - Primeira coluna: número de matrícula (use um inteiro);

    - Segunda coluna: média das provas;

    - Terceira coluna: média dos trabalhos;

    - Quarta coluna: nota final.

    Elabore um programa que:

    a) Leia as três primeiras informações de cada aluno;
    
    b) Calcule a nota final como sendo a soma da média das provas e da média dos trabalhos;

    c) Imprima a matrícula do aluno que obteve a maior nota final (assuma que só existe uma maior nota);

    d) Imprima a média aritmética das notas finais.

6. Leia uma matriz G 5 x 5 e criar 2 vetores SL e SC de 5 elementos que contenham respectivamente as somas das linhas e das colunas de G. Escrever os vetores criados;

7. Leia uma matriz M 5 x 5, calcular e escrever as seguintes somas:

    a) Da linha 3 de M;

    b) Da coluna 2 de M;

    c) Da diagonal principal;

    d) Da diagonal secundária;

    e) De todos os elementos da matriz.


## Como rodar as soluções

### Usuários Windows:

Por motivos de ganho de tempo em configuração e instalação, para usuários do Windows é recomendado a instalação da IDE
[DevC++](https://sourceforge.net/projects/orwelldevcpp/). Tendo instalado o programa, abra o arquivo.c de seu interesse e compile através do atalho F11 disponiblizado pela IDE.

### Usuários de Ubuntu/Linux Mint:

É altamente recomendado o uso do compilador [GCC](https://gcc.gnu.org/). Você pode instalar o GCC através do seguinte comando

- `apt-get install gcc`

Com o GCC instalado, certifique de estar no mesmo diretório do arquivo de extensão .c que deseja compilar. Uma vez estando no diretório do arquivo, execute o seguinte comando:

- `gcc nome-do-arquivos.c -o nome-do-arquivo`

Uma vez compilado sem erros, execute o seguinte comando:

- `./nome-do-arquivo`

### Importante:

Não veja as resoluções sem tentar resolver primeiro!

---

> Quem estuda e não pratica o que aprendeu, é como o homem que lavra e não semeia. Provérbio Árabe
