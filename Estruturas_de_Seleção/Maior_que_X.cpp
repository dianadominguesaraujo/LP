/*
7. Escreva um algoritmo para ler um valor e escrever a mensagem ‘É maior que 100 ‘ se o valor
lido for maior que 100, caso contrário escrever ‘NÃO é maior que 100’.
*/

#include <stdio.h>

int main ()
{

	float num;
	
	printf("Informe um numero: ");
	scanf("%f", &num);
	
	
	
		if(num >100) {
			printf("Eh maior que 100!");
		}
		
		else {
			printf("Nao eh maior que 100");
		}
		
		return 0;
}
