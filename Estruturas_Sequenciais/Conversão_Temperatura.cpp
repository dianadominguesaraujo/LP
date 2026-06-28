/* 1.4 Escreva um algoritmo para ler uma temperatura em graus Fahrenheit, calcular e escrever o
valor correspondente em graus Celsius.
*/


#include <stdio.h>
int main ()
{

	float f, calc;
	
	printf("Informe uma temperatura em fahrenheit:");
	scanf("%f", &f);
	
	
	calc = (f - 32) / 1.8;

	
	printf("A temperatura convertida em graus Celsius eh: %.2f\n", calc);

  return 0;
}
