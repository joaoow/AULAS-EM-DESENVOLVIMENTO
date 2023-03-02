#include <stdio.h>
#include <stdlib.h>
//Autor: João

int main(void){

    char letra;//variável do tipo char,contém caracteres
    int x;//variavel para números inteiros
    float salario;//variável do tipo float (real) contém casas decimais

    //Atribuindo valores para as variáveis
    letra = 'a';
    x = 10;
    salario = 3973.70;

    //Saída de dados na tela
    printf("Letra = %c \n", letra);
    printf("x = %d \n", x);
    printf("salario = %.2f \n", salario);
    system("pause");
    return(0);

}
