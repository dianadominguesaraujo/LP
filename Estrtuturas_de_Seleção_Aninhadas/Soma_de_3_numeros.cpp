/*
3.7 Escreva um algoritmo para ler 3 valores e escrever a soma dos 2 maiores. Considere que o
usuário não informará valores iguais
*/

#include <stdio.h>

int main ()
{

    float a, b, c, soma;
    
    printf("Informe o primeiro valor: ");
    scanf("%f", &a);
    
    printf("Informe o segundo valor: ");
    scanf("%f", &b);
    
    printf("Informe o terceiro valor: ");
    scanf("%f", &c);
    
    if (a > b) {
        if (b > c) {
            soma = a + b;
        }
        else {
            soma = a + c;
        }
    }
    
    else {
        if (a > c) {
            soma = a + b;
        }
        else {
            soma = b + c;
        }
    }
    
    printf("Soma dos dois maiores: %.2f", soma);

    return 0;
}
