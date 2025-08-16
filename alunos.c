#include <stdio.h>
#include "alunos.h"

// Recebe uma string que será impressa na tela e uma variavel int para ser prenchida
void getint(int *x, const char *str) {
    printf("%s", str);
    scanf("%d", &*x);
}

// Prenche um matriz de strings recebemdo como paarametro a matriz um int de linha um int coluna
void getstringmatriz(int x, char matriz[x][100], const char *str) {
    for(int i = 0; i < x; i++) {
        printf(str, i + 1);
        scanf("%s", matriz[i]);        
    }
}

void getnota(int a, int m, char nome[a][100], char materia[m][100], float nota[a][m]) {
    for(int i = 0; i < a; i++) {
        printf("Adicionando notas do aluno %s: \n", nome[i]);
        for(int e = 0; e < m; e++) {
            printf("Nota de %s: ", materia[e]);
            scanf("%f", &nota[i][e]);
        }
    }
}

void media(int a, int m, char nome[a][100], char materia[m][100], float nota[a][m]) {

    float total = 0;
    for(int i = 0; i < a; i++) {
        float media = 0;
        for(int e = 0; e < m; e++) {
            media = media + nota[i][e];
        }
        media = media / m;
        total = total + media;
        printf("Média do aluno %s: %.2f\n", nome[i], media);
    }
    total = total / a;
    printf("Média da turma %.2f\n", total);
}
