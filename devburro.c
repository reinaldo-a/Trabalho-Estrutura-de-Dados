#include <stdio.h>   // printf, scanf
#include <string.h>  // strcpy
#include "devburro.h" // header com MAX_ALUNOS e protótipos

// Insere um aluno no array
void inserirAluno(char nomes[][50], float notas[], int *qtd) {
    if (*qtd >= MAX_ALUNOS) { // Se já chegou ao limite
        printf("Limite de alunos atingido!\n");
        return;
    }
    printf("Nome do aluno: ");
    scanf(" %[^\n]", nomes[*qtd]); // Lê nome com espaços
    printf("Nota do aluno: ");
    scanf("%f", &notas[*qtd]);     // Lê nota
    (*qtd)++;                       // Incrementa quantidade de alunos
    printf("Aluno inserido com sucesso!\n");
}

// Lista todos os alunos
void listarAlunos(char nomes[][50], float notas[], int qtd) {
    if (qtd == 0) { // Se nenhum cadastrado
        printf("Nenhum aluno cadastrado.\n");
        return;
    }
    for (int i = 0; i < qtd; i++) { // Percorre array
        printf("[%d] Nome: %s | Nota: %.2f\n", i, nomes[i], notas[i]);
    }
}

// Atualiza dados de um aluno específico
void atualizarAluno(char nomes[][50], float notas[], int qtd) {
    int indice;
    listarAlunos(nomes, notas, qtd); // Mostra lista
    if (qtd == 0) return;

    printf("Digite o índice do aluno que deseja atualizar: ");
    scanf("%d", &indice); // Escolhe índice

    if (indice < 0 || indice >= qtd) { // Checa validade
        printf("Índice inválido!\n");
        return;
    }
    printf("Novo nome: ");
    scanf(" %[^\n]", nomes[indice]); // Novo nome
    printf("Nova nota: ");
    scanf("%f", &notas[indice]);     // Nova nota
    printf("Aluno atualizado!\n");
}

// Remove aluno do array
void removerAluno(char nomes[][50], float notas[], int *qtd) {
    int indice;
    listarAlunos(nomes, notas, *qtd); // Mostra lista
    if (*qtd == 0) return;

    printf("Digite o índice do aluno a remover: ");
    scanf("%d", &indice); // Escolhe índice

    if (indice < 0 || indice >= *qtd) { // Valida índice
        printf("Índice inválido!\n");
        return;
    }
    // Desloca elementos para "fechar" espaço do removido
    for (int i = indice; i < *qtd - 1; i++) {
        strcpy(nomes[i], nomes[i + 1]);
        notas[i] = notas[i + 1];
    }
    (*qtd)--; // Reduz quantidade
    printf("Aluno removido!\n");
}

// Calcula mínimo, máximo e média das notas
void estatisticas(float notas[], int qtd, float *min, float *max, float *media) {
    if (qtd == 0) { // Sem alunos
        *min = *max = *media = 0;
        return;
    }
    *min = *max = notas[0]; // Inicializa
    float soma = 0;
    for (int i = 0; i < qtd; i++) {
        if (notas[i] < *min) *min = notas[i];
        if (notas[i] > *max) *max = notas[i];
        soma += notas[i];
    }
    *media = soma / qtd; // Calcula média
}

// Mostra endereço de memória de cada nota (debug)
void mostrarEnderecos(float notas[], int qtd) {
    for (int i = 0; i < qtd; i++) {
        printf("Aluno %d - Endereço da nota: %p\n", i, (void*)&notas[i]);
    }
}
