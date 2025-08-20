#ifndef DVB_H
#define DVB_H

//sala só pode ter esse total maximo de alunos
#define MAX_ALUNOS 50

// Protótipos das funções
void inserirAluno(char nomes[][50], float notas[], int *qtd);
void listarAlunos(char nomes[][50], float notas[], int qtd);
void atualizarAluno(char nomes[][50], float notas[], int qtd);
void removerAluno(char nomes[][50], float notas[], int *qtd);
void estatisticas(float notas[], int qtd, float *min, float *max, float *media);
void mostrarEnderecos(float notas[], int qtd);

#endif