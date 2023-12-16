/*
Crie uma struct "Funcionario" com membros para nome, cargo e salário. 
Escreva uma função que recebe um array de funcionários e um cargo como 
parâmetro, e retorna a média salarial dos funcionários com esse cargo. 
Em seguida, implemente um programa que utiliza essa função para calcular e 
imprimir a média salarial dos programadores em uma empresa.
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 200

struct funcionarios {
  char nome[200];
  char cargo[200];
  float salario;
};


float mediasalarial(struct funcionarios funcionario[], int total) {
  int contador = 0;
  float soma = 0;
  int i; 

  for ( i = 0; i < total; i++) {
    if (strcmp(funcionario[i].cargo, "Programador") == 0) {
      contador++;
      soma += funcionario[i].salario;
    }
  }
  
  if (contador > 0) {
    return soma / (float)contador;
  } else {
    return 0;
  }
}


int main() {
    
  setlocale(LC_ALL, "portuguese");
  int opcao = 0, i = 0;

  struct funcionarios
 funcionario[TAM];

  do {
    printf("______________ OPÇÕES _____________\n");
    printf("   1 - Adicionar informação\n");
    printf("   2 - Exibir informações\n");
    printf("   3 - Sair do programa\n");
    printf("   Digite a opção desejada: ");
    scanf("%d", &opcao);


    switch (opcao) {
    case 1:
      fflush(stdin);

      printf("Digite o nome do %dº funcionário: ", i + 1);
      scanf(" %s", funcionario[i].nome);

      printf("Informe o  cargo: ");
      scanf(" %s", funcionario[i].cargo);

      printf("Digite o valor do salario: ");
      scanf("%f", &funcionario[i].salario);
      i++;
      
      system("cls||clear");
      break;

    case 2:
      printf("Média salarial de programadores: R$ %.2f\n",
      mediasalarial(funcionario, i));
      break;

    default:
      break;
    }


  } while (opcao != 3);

  return 0;
}