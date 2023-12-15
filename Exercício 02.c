/*
Crie uma função chamada "calcularMedia" que recebe como parâmetro 
uma struct "Aluno", esta struct terá informações como: nome, data 
de nascimento, duas notas e média e retorna a média das notas. 
Em seguida, crie um programa que declare um array de 5 alunos e 
utilize a função "calcularMedia" para imprimir a média de cada aluno. 
Também crie uma função para verificar se um aluno está aprovado ou 
reprovado sendo necessário média maior ou igual a 7,0 para aprovação.
*/
#include <stdio.h>

int main()
{
    char aluno [5] [200];
    float nota [5] [3];
    int idade [5];
    int somanotas = 0;
    float media [3];
    int i;
    int j;

    for (i = 0; i < 5; i++ )
    {
        printf("\nDigite o nome do aluno: ");
        gets(aluno[i]);

        printf("Digite a idade do aluno: ");
        scanf("%d",&idade[i]);

        for (j = 0; j < 3; j++)
        {
            printf("Digite uma nota: ");
            scanf("%f",&nota[i] [j]);

            somanotas += nota[i][j];
        }

        media [i] = somanotas /(float)j;
        somanotas = 0;

        fflush(stdin);
    }

    system("cls||clear");
    printf("\nExibindo os dados dos alunos:");

    for ( i = 0; i < 5; i++){
        printf("\nAluno: %s \n",aluno[i]);
        printf("Idade: %d\n", idade[i]);

        for (j = 0; j < 3; j++) {
            printf("Nota: %.1f \n",nota[i][j]);
        }

        printf("Média: %1.f \n",media[i]);

        if (media[i] >= 7){
            printf("Aluno aprovado!\n");
        } else if (media[i] >= 5) {
            printf("Aluno em recuperação!\n");
        } else {
            printf("Aluno reprovado!\n");
        }
    }

    return 0;
}

