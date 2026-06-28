/*1.5 Escreva um algoritmo para ler uma temperatura em graus Celsius, calcular e escrever o valor
correspondente em graus Fahrenheit.
*/


#include <stdio.h>

int main ()
{

	float c, calc;
	
	printf("Informe uma temperatura em Celsius:");
	scanf("%f", &c);
	
	
	calc = (c * 1.8) + 32;

	
	printf("A temperatura convertida em graus fahrenheit eh: %.2f\n", calc);

  return 0;
}
