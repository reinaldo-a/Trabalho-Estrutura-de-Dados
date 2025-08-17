# Sistema de Notas de Alunos em C

## Descrição do Projeto
Este projeto em C implementa um **sistema simples de gerenciamento de notas de alunos**, utilizando **funções**, **ponteiros** e **arrays estáticos** (sem alocação dinâmica). O usuário pode cadastrar, listar, atualizar e remover alunos, além de calcular estatísticas (mínimo, máximo e média) e exibir endereços de memória das notas.

O projeto foi desenvolvido para atender aos seguintes requisitos:

- Uso correto de funções: protótipos, parâmetros, retorno e escopo.
- Passagem por referência via ponteiros para alteração de dados.
- Função que retorna múltiplos resultados usando ponteiros (mínimo, máximo e média).
- Impressão de endereços de memória de elementos de arrays.
- Modularização: arquivos `.h` e `.c` separados, além do `main.c`.

---

## Estrutura do Projeto

projeto_notas

main.c # Programa principal

devburro.c # Implementação das funções

devburro.h # Protótipos das funções e constantes

README.md # Documentação do projeto

---

## Funcionalidades

1. **Inserção de registros**: o usuário cadastra a quantidade desejada de alunos (até o máximo definido) com seus nomes e notas.  
2. **Listagem de todos os registros**: exibe todos os alunos cadastrados com suas notas.  
3. **Atualização de um registro existente**: altera nome ou nota de um aluno específico.  
4. **Remoção de um registro**: remove um aluno do sistema.  
5. **Estatísticas**: calcula mínimo, máximo e média das notas utilizando ponteiros.  
6. **Exibição de endereços de memória**: imprime os endereços dos elementos do array de notas.

---

## Tecnologias e Conceitos

- Linguagem: **C**
- Conceitos aplicados:
  - **Arrays estáticos** (`char nomes[MAX_ALUNOS][50]`, `float notas[MAX_ALUNOS]`)
  - **Ponteiros** para passagem por referência
  - **Funções** com retorno e múltiplos resultados
  - Modularização em **.c** e **.h**
  - Entrada do usuário para determinar a quantidade de registros

---

## Limites do Sistema

- Quantidade máxima de alunos: `MAX_ALUNOS` (definido em `funcoes.h`)
- Não utiliza **alocação dinâmica**
- Apenas **uma nota por aluno** (pode ser adaptado para múltiplas notas)

---

## Como Compilar e Executar

No terminal, usando o GCC:

```bash
gcc main.c funcoes.c -o sistema_notas
./sistema_notas
