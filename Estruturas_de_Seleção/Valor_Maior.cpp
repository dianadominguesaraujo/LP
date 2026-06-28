/*
12. Escreva um algoritmo para ler 2 valores (considere que não serão lidos valores iguais) e
escrever o maior deles..
*/

#include <stdio.h>

int main ()
{

    int valor1, valor2;
    
    printf("Informe um numero: ");
    scanf("%d", &valor1);
    
    printf("Informe um outro numero: ");
    scanf("%d", &valor2);
    

    if(valor1 > valor2) {
        printf("O maior valor eh: %d", valor1);
    }
    
    else {
        printf("O maior valor eh: %d", valor2);;
    }

    return 0;
}
