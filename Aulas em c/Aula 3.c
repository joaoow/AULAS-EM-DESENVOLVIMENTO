#include <stdio.h>
#include <stdlib.h>
//Autor: Jo�o

int main(void){

    char conceito;//vari�vel do tipo char que armazena um unico caractere na mem�ria
    float nota;
    int numero;

    printf("\nInforme o conceito do aluno:");
    scanf("%c", &conceito);

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    printf("Informe o numero de matricula do aluno: ");
    scanf("%d", &numero);

    printf("\nMatricula %d\n", numero);
    printf("Conceito: %c\n", conceito);
    printf("Nota: %.1f\n",nota);//formatando a saida da nota com uma casa decimal
    system("pause");
    return(0);

}
