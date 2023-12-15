/*
Crie uma struct Contato para representar informações de contatos, 
incluindo nome, número de telefone e email. Solicite que o usuário 
cadastre 3 contatos. Escreva uma função que recebe um nome como parâmetro, 
e retorna o número de telefone correspondente a esse nome. Em seguida, 
implemente um programa que utiliza essa função para buscar e imprimir o 
número de telefone de um contato específico.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAM 3

struct dados_contatos {
    char nome[200];
    char telefone[250];
    char email[250];
};

void pesquisarContato(struct dados_contatos *contatos, char *contato) {
    int i;
    for (i = 0; i < TAM; i++) {
        if (strcmp(contatos[i].nome, contato) == 0) {
            printf("Nome: %s \n", contatos[i].nome);
            printf("Telefone: %s \n", contatos[i].telefone);
            return;
        }
    }
    printf("O contato não foi encontrado. \n");
}

int main() {
    setlocale(LC_ALL, "");
   
    struct dados_contatos contatos[TAM];
    char contato[200];
    int i;
   
    // Solicitando dados do usuário.
    for (i = 0; i < TAM; i++) {
        printf("\nDigite os dados do %dº contato: \n", i + 1);
        printf("Nome: ");
        gets(contatos[i].nome);
       
        printf("Telefone: ");
        gets(contatos[i].telefone);
       
        printf("E-mail: ");
        gets(contatos[i].email);
    }
   
    printf("\nDigite o nome do contato que deseja pesquisar: ");
    gets(contato);
   
    printf("\n");
   
    pesquisarContato(contatos, contato);
   
    return 0;
}



