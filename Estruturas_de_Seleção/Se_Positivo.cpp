/*
2.8.Escreva um algoritmo para ler um valor e escrever se é positivo ou negativo. Considere o valor
zero como positivo.
*/

#include <stdio.h>

int main ()
{

	float num;
	
	printf("Informe um numero: ");
	scanf("%f", &num);
	
	
		if(num >= 0) {
			printf("Eh positivo");
		}
		
		else {
			printf("Eh negativo");
		}
		
		return 0;
}
