#include <stdio.h>
#include "dvb.h"

int main() {
    char nomes[MAX_ALUNOS][50]; // Matriz de nomes
    float notas[MAX_ALUNOS];    // Matriz de notas
    int qtd = 0;                 // Quantidade atual de alunos
    int opcao;                   // Opção do menu

    // Repete até escolher sair
    do {
        // Menu
        printf("\n--- Sistema de Notas ---\n");
        printf("1. Inserir aluno\n");
        printf("2. Listar alunos\n");
        printf("3. Atualizar aluno\n");
        printf("4. Remover aluno\n");
        printf("5. Estatísticas (min, max, média)\n");
        printf("6. Mostrar endereços de memória das notas\n");
        printf("0. Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        // Executa ação escolhida
        if (opcao == 1) {
            inserirAluno(nomes, notas, &qtd);
        } else if (opcao == 2) {
            listarAlunos(nomes, notas, qtd);
        } else if (opcao == 3) {
            atualizarAluno(nomes, notas, qtd);
        } else if (opcao == 4) {
            removerAluno(nomes, notas, &qtd);
        } else if (opcao == 5) {
            float min, max, media;
            estatisticas(notas, qtd, &min, &max, &media);
            printf("Nota mínima: %.2f\n", min);
            printf("Nota máxima: %.2f\n", max);
            printf("Nota média: %.2f\n", media);
        } else if (opcao == 6) {
            mostrarEnderecos(notas, qtd);
        }

    } while (opcao != 0); // Repete até escolher sair

    return 0;
}
