/*
14. Escreva um algoritmo para ler um número inteiro (considere que serão lidos apenas valores
positivos e inteiros) e escrever se é par ou ímpar
*/

#include <stdio.h>

int main ()
{

    int num;
    
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);
    
    if(num % 2 == 0) {
        printf("O numero eh par");
    }
    
    else {
        printf("O numero eh impar");
    }

    return 0;
}
