/*
Modele uma struct "ContaBancaria" que represente uma conta bancária com 
número da conta, nome do titular, saldo e tipo de conta (poupança ou 
corrente). Implemente funções para depositar e sacar dinheiro da conta,
bem como para imprimir o saldo atual. Crie um programa que utilize essas 
funções para simular operações bancárias. Crie um menu para as operações 
disponíveis.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

const int SALDO = 1000;
   struct conta_bancaria{
        char numeroconta[200];
        char nometitular[200];
        char tipodaconta[200];
    };


    void pesquisardeposito(float depositodeumaquantidade) {
        float saldofinal;
        int i;

       saldofinal = depositodeumaquantidade + SALDO;

        printf("Valor de R$%.2f depositado em sua conta \n", depositodeumaquantidade);
        printf("Saldo atual: R$%.2f", saldofinal);
    }

    void pesquisarsaque(float sacarumaquantidade) {
        float saldofinal;
        int i;

       saldofinal = SALDO - sacarumaquantidade;

        printf("Valor de R$%.2f retirado da sua conta \n", sacarumaquantidade);
        printf("Saldo atual: R$%.2f", saldofinal);
    }

int main () {
	setlocale(LC_ALL, "portuguese");
	
    struct conta_bancaria banco;
    float depositodeumaquantidade;
    float sacarumaquantidade;
    int opcao;

    printf("Digite os seus dados\n");
    printf("Digite o número da conta: ");
    gets(banco.numeroconta);

    printf("Digite o nome do titular: ");
    gets(banco.nometitular);
    
    printf("Digite o tipo de serviço:\n");
    printf("P - Poupança\n");
    printf("C - Conta corrente");
    printf("Opção: ");
    gets(banco.tipodaconta);

    system("cls||clear");
    
    printf("\nEscolha a opção que deseja realizar\n");

    printf("|----------------Opções-------------------|\n");
    printf("|codigo | Alternatinas                    |\n");
    printf("|1      | Realizar um desposito           |\n");
    printf("|2      | Realizar um saque               |\n");
    printf("|3      | Mostrar saldo o atual           |\n");
    printf("|--------------------Fim------------------|\n");

    printf("opção: ");
	scanf("%i", &opcao);

    if (opcao == 1) {
        printf("Digite o valor que deseja depositar: ");
        scanf("%f", &depositodeumaquantidade);
        pesquisardeposito(depositodeumaquantidade);
    } else if (opcao == 2) {
        printf("Digite o valor que deseja sacar: ");
        scanf("%f", &sacarumaquantidade);
        pesquisarsaque(sacarumaquantidade);
    } else if (opcao == 3) {
        printf("Saldo atual: R$%.2d", SALDO);
    }  

return 0;
}