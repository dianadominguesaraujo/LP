/*
13. As maçãs custam R$ 1,25 se forem compradas menos do que uma dúzia, e R$ 1,00 ser forem
compradas pelo menos doze. Escreva um algoritmo que leia o número de maçãs compradas,
calcule e escreva o valor total da compra.
*/

#include <stdio.h>

int main ()
{

    int compra;
    float valor;
    
    printf("Informe quantas macas foram compradas: ");
    scanf("%d", &compra);
    
    if(compra < 12) {
        valor = compra * 1.25;
		printf("O valor da compra vai ser: %.2f", valor);
    }
    
    else {
    	valor = compra * 1.00;
        printf("O valor da compra vai ser: %.2f", valor);
    }

    return 0;
}
