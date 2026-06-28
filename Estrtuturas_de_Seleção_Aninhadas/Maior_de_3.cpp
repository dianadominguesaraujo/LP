/*
3.6 Escreva um algoritmo para ler 3 valores e escrever o maior deles. Considere que o usuário
não informará valores iguai
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
            printf("%.2f", a);
        }
        else {
            printf("%.2f", c);
        }
    }
    
    else {
        if (b > c) {
            printf("%.2f", b);
        }
        else {
            printf("%.2f", c);
        }
    }
  
return 0;
}
