#include <stdio.h>
#include "alunos.h"

int main() {

    // a = número de alunos da escola
    // m = número de matérias da escola
    int a, m;

    //Preenchendo variável co função que preencher valores inteiros
    getint(&a, "Quantos alunos serão avaliados?\n");
    getint(&m, "Quantas materias tem cada aluno?\n");

    // Vetores para receber os nomes dos alunos, suas mareias e suas notas;
    char nome[a][100];
    char materia[m][100];
    float nota[a][m];
    
    // Pega o nome de cada aluno e aloca por referencia na matriz nome
    getstringmatriz( a, nome, "Digite o nome do %dº aluno\n");

    // Pega o nome das materias do curso e aloca por referencia na matriz materia
    getstringmatriz( m, materia, "Digite o nome da %dº materia do curso.\n");

    /* 
        Aloca a nota de cada aluno de acordo com a casa do vetor ex:
        Quando o aluno tem seu nome na linha 0 = nome [0]["nome do aluno"] suas notas vão estar na 
        linha 0 do vetor nota[0][nota em cada coluna] que sera referenciado.
     */
    getnota(a, m, nome, materia, nota);

    media(a, m, nome, materia, nota);

    return 0;
}
