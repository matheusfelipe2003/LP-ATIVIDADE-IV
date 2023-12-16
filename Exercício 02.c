/*
Crie uma função chamada "calcularmedia" que recebe como parâmetro 
uma struct "Aluno", esta struct terá informações como: nome, data 
de nascimento, duas nota e média e retorna a média das nota. 
Em seguida, crie um programa que declare um array de 5 alunos e 
utilize a função "calcularmedia" para imprimir a média de cada aluno. 
Também crie uma função para verificar se um aluno está aprovado ou 
reprovado sendo necessário média maior ou igual a 7,0 para aprovação.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAM 5

struct dados_aluno {
    char nome[300];
    char datadenascimento[20];
    float nota[2];
    float media;
};

float calcularmedia(struct dados_aluno aluno) {
    float soma = 0 ;

    for (int i = 0; i < 2; i++) {
        soma += aluno.nota[i];
    }
    return soma /2;
}

char *situacao(float media) {
    if (media < 7.0) {
        return "O aluno está reprovado";
    } else {
        return "O aluno está aprovado";
    }
}

int main() {
    struct dados_aluno alunos[TAM];

    for (int i = 0; i < TAM; i++) {
        printf("Digite o nome: \n");
        scanf("%s", alunos[i].nome);

        printf("Digite a data de nascimento: \n");
        scanf("%s", alunos[i].datadenascimento);

        for (int j = 0; j < 2; j++) {
            printf("Informe a %dª nota: \n", j + 1);
            scanf("%f", &alunos[i].nota[j]);
        }

        alunos[i].media = calcularmedia(alunos[i]);

        printf("A média de %s é : %.2f \n", alunos[i].nome, alunos[i].media);
        printf("Situação: %s \n", situacao(alunos[i].media));
        printf("\n");
    }

    return 0;
}