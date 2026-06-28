/*
3.8 Escreva um algoritmo para ler 3 valores e escrevê-los em ordem crescente. Considere que o
usuário não informará valores iguais
*/

#include <stdio.h>

int main ()
{

    float a, b, c;
    
    printf("Informe o primeiro valor: ");
    scanf("%f", &a);
    
    printf("Informe o segundo valor: ");
    scanf("%f", &b);
    
    printf("Informe o terceiro valor: ");
    scanf("%f", &c);
    
    if (a > b) {
        
        if (a > c) {
            
            if (b > c) {
                printf("%.2f, %.2f, %.2f", c, b, a);
            }
            else {
                printf("%.2f, %.2f, %.2f", b, c, a);
            }
        }
        
        else {
            printf("%.2f, %.2f, %.2f", b, a, c);
        }
    }
    
    else {
        
        if (b > c) {
            
            if (a > c) {
                printf("%.2f, %.2f, %.2f", c, a, b);
            }
            else {
                printf("%.2f, %.2f, %.2f", a, c, b);
            }
        }
        
        else {
            printf("%.2f, %.2f, %.2f", a, b, c);
        }
    }

    return 0;
}
