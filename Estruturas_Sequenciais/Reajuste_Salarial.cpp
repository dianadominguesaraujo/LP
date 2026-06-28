/*
1.3 Escreva um algoritmo para ler o salário mensal e o percentual de reajuste. Calcular e escrever
o valor do novo salário.
*/

#include <stdio.h>
int main ()
{

	float sal, percent, novosal;
	
	printf("Informe o salario: ");
	scanf("%f", &sal);
	
	printf("Informe o percentual de reajuste salarial: ");
	scanf("%f", &percent);
	
	
	novosal = (sal * percent / 100) + sal;

	
	printf("O salario final reajustado vai ser: %.2f\n", novosal);

  return 0;
}
