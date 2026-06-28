/*
15. Escreva um algoritmo para ler 2 valores (considere que não serão lidos valores iguais) e
escrevê-los em ordem crescente.
*/

#include <stdio.h>

int main ()
{

    int num1, num2;
    
    printf("Informe um numero inteiro: ");
    scanf("%d", &num1);
    
    printf("Informe um outro numero inteiro: ");
    scanf("%d", &num2);
    
    if(num1 < num2) {
        printf("%d, %d", num1, num2);
    }
    
    else {
        printf("%d, %d", num2, num1);
    }

    return 0;
}
