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

  
  
 struct Produto { 
     float preco; 
     int quantidadeemestoque; 
     char nome[300]; 
 }; 
 float valorTotal(struct Produto produto) { 
     return produto.preco * produto.quantidadeemestoque; 
 } 
  
 void realizarCompra(struct Produto *produto) { 
     int quantidadedoprodutocomprada; 
  
     printf("Quantidade: "); 
     scanf("%d",&quantidadedoprodutocomprada); 
  
     if (quantidadedoprodutocomprada > 0) { 
         produto->quantidadeemestoque -= quantidadedoprodutocomprada; 
         printf("Compra realizada com sucesso!\n"); 
     } else { 
         printf("Quantidade de produto inválida.\n"); 
     } 
 } 
  
  
 void consultarEstoque(struct Produto produto) { 
     printf("Nome do produto: %s\n",produto.nome); 
     printf("Preço: R$%.2f\n", produto.preco); 
     printf("Quantidade em estoque: %d\n",produto.quantidadeemestoque); 
     printf("Valor total no estoque: R$%.2f\n", valorTotal(produto)); 
 } 
  
 int main() { 
  
     setlocale(LC_ALL, "portuguese");

     struct Produto produto; 
     int opcao; 
  
  
     printf("Nome do produto: "); 
     scanf("%s", produto.nome); 
  
     printf("Preço do produto: "); 
     scanf("%f", &produto.preco); 
  
     printf("Estoque do produto: "); 
     scanf("%d", &produto.quantidadeemestoque); 
     fflush(stdin);
  
     do { 
         printf("1 - Realizar compra\n"); 
         printf("2 - Consultar o estoque \n"); 
         printf("3 - Sair do programa\n"); 
         scanf("%d", &opcao); 
  
         switch (opcao) { 
             case 1: 
                 realizarCompra(&produto); 
                 break; 
             case 2: 
                 consultarEstoque(produto); 
                 break; 
             case 3: 
                 printf("Saindo\n"); 
                 break; 
             default: 
                 printf("Opção inválida.\n"); 
            system("cls||clear");
         } 
     } while (opcao != 3); 
  
     return 0; 
 }
 