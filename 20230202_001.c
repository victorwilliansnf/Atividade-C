#include <stdio.h>
#include <string.h>

#define NUM_EQUIPES 5
#define NUM_ALUNOS 4
#define TAM_NOME 50

int main() {
    char equipe[NUM_EQUIPES][NUM_ALUNOS][TAM_NOME];
    int i, j;
    
    // Preenche a matriz de strings com o nome e sobrenome dos alunos
    for (i = 0; i < NUM_EQUIPES; i++) {
        printf("Digite os nomes dos alunos da equipe %d:\n", i+1);
        for (j = 0; j < NUM_ALUNOS; j++) {
            printf("Aluno %d: ", j+1);
            fgets(equipe[i][j], TAM_NOME, stdin);
        }
    }
    
    // Busca a equipe de um aluno pelo nome
    char nome[TAM_NOME];
    printf("\nDigite o nome do aluno para buscar a equipe: ");
    fgets(nome, TAM_NOME, stdin);
    
    for (i = 0; i < NUM_EQUIPES; i++) {
        for (j = 0; j < NUM_ALUNOS; j++) {
            // Remove o caractere '\n' do final da string lida com fgets
            equipe[i][j][strcspn(equipe[i][j], "\n")] = '\0';
            if (strcmp(equipe[i][j], nome) == 0) {
                printf("O aluno %s pertence a equipe %d.\n", nome, i+1);
                return 0;
            }
        }
    }
    
    printf("Aluno nao encontrado.\n");
    return 0;
}
