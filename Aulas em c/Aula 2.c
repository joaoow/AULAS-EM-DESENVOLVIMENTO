#include <stdio.h>
#include <stdlib.h>
//Autor: Jo�o

int main(void){

    char letra;//vari�vel do tipo char,cont�m caracteres
    int x;//variavel para n�meros inteiros
    float salario;//vari�vel do tipo float (real) cont�m casas decimais

    //Atribuindo valores para as vari�veis
    letra = 'a';
    x = 10;
    salario = 3973.70;

    //Sa�da de dados na tela
    printf("Letra = %c \n", letra);
    printf("x = %d \n", x);
    printf("salario = %.2f \n", salario);
    system("pause");
    return(0);

}
