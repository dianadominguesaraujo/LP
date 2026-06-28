/*
3.5 Escreva um algoritmo para ler 2 valores e uma das seguintes operações a serem executadas
(codificada da seguinte forma: 1.Adição, 2.Subtração, 3.Divisão, 4.Multiplicação). Calcular e
escrever o resultado dessa operação sobre os dois valores lidos.
*/

#include <stdio.h>

int main ()
{

    int op;
    float num1, num2, calc;
    
    printf("Informe o primeiro valor: ");
    scanf("%f", &num1);
    
    printf("Informe o segundo valor: ");
    scanf("%f", &num2);
    
    printf("Informe o codigo da operação que deseja realizar (1.Adicao, 2.Subtracao, 3.Divisao, 4.Multiplicacao): ");
    scanf("%d", &op);
    
    if (op == 1) {
		calc = num1 + num2;
    	printf("%.2f", calc);
		}
    	
    else
    	if (op == 2) {
    	calc = num1 - num2;
    	printf("%.2f", calc);
		}
		
		else
			if (op == 3) {
    		calc = num1 / num2;
    		printf("%.5f", calc);
			}
			
			else 
				if(op == 4) {
				calc = num1 * num2;
				printf("%.2f", calc);
				}
			
			return 0;
}



