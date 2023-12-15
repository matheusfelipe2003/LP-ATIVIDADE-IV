/*Desenvolva uma struct "Produto" que contenha informações como nome, 
preço e quantidade em estoque. Em seguida, desenvolva um menu para facilitar a escolha das opções:
1 - Realizar uma compra
2 - Consultar estoque
3 - Sair do programa. 
Escreva funções necessárias para calcular o valor total em estoque do 
produto e para atualizar a quantidade em estoque com base em uma compra. 
Crie um programa que utiliza essas funções para um produto.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

struct produto_do_galpao
{
    char nome[200];
    float preco;
    int quantidadeEstoque;
};

int i;
int j;
int k;
int opcao;
float calculofinal;
int produtoencontrado = 0;
char nomeProduto[200];
char resposta[200];
int valorestoque;
int estoqueatualizado;
struct produto_do_galpao produto[100];
void menu()
{
    printf("________________MENU_____________\n");
    printf("Digite  o número 1 para realizar compra: \n");
    printf("Digite o número 2 para consultar estoque:\n");
    printf("Digite o número 3 para sair do programa: \n");
    scanf("%d", &opcao);
    printf("\n");
}

float calcularEstoque()
{
    calculofinal = produto[j].preco * produto[j].quantidadeEstoque;
    return calculofinal;
}

int atualizaEstoque()
{
    produto[j].quantidadeEstoque = produto[j].quantidadeEstoque + valorestoque;

    return produto[j].quantidadeEstoque;
}

int main()
{

    setlocale(LC_ALL, "portuguese");

    do
    {
        menu();

        switch (opcao)
        {
        case 1:
            do

            {
                k = k + 1;
                fflush(stdin);
                printf("Digite o nome do produto para cadastro: ");
                gets(produto[k].nome);

                printf("Digite o preço do produto: ");
                scanf("%f", &produto[k].preco);

                printf("Digite a quantidade de produtos em estoque: ");
                scanf("%d", &produto[k].quantidadeEstoque);
                printf("\n");

                getchar();

                printf("Continuar cadastrando produto? ");
                printf("Responda usando S ou N: \n");
                gets(resposta);
                fflush(stdin);

            } while (strcmp(resposta, "S") == 0);

            break;
        case 2:

            produtoencontrado = 0;
            fflush(stdin);
            printf("Digite o nome do produto a ser consultado: ");
            gets(nomeProduto);

            fflush(stdin);
            for (i = 0; i <= k ; i++)
            {

                if (strcmp(nomeProduto, produto[i].nome) == 0)
                {
                    produtoencontrado = 1;
                    j = i;
                    printf("Quantidade atual de estoque: %d\n", produto[j].quantidadeEstoque);

                    fflush(stdin);
                    printf("\n Atualizar estoque?");
                    printf("Responda usando S ou N: \n");
                    gets(resposta);

                    fflush(stdin);

                    if (strcmp(resposta, "S") == 0)
                    {
                        fflush(stdin);
                        printf("Qual valor a adição ao estoque? \n");
                        scanf("%d", &valorestoque);

                        atualizaEstoque();

                        printf("Estoque atualizado!");
                        printf("Estoque atual: %d\n", produto[j].quantidadeEstoque);
                    }
                }
            }

            if (produtoencontrado == 0)
            {
                printf("Produto não encontrado.\n");
            }

            break;

        default:
            break;
        }

    } while (opcao != 3);

    return 0;
}