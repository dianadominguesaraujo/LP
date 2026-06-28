/*1.2 Escreva um algoritmo que lê a quantidade de horas trabalhadas em um mês, o valor que
recebe por hora, o número de filhos com idade menor que 14 anos e calcule e imprima o salário
desse funcionário. Suponha que para cada filho menor de 14 anos haja um adicional de 2% no
salário.
*/


#include <stdio.h>

int main ()
{
	int f;
	float ht, vh, calcs, calcp, calcps, calcfim;
	
	printf("Informe o numero de horas trabalhadas: ");
	scanf("%f", &ht);
	
	printf("Informe o valor recebido por hora: ");
	scanf("%f", &vh);
	
	printf("Informe o numero de filhos menores de 14 anos: ");
	scanf("%d", &f);
	
	calcs = ht * vh;
	calcp = 0.02 * f;
	calcps = calcp * calcs;
	calcfim = calcs + calcps;

	
	printf("O salario final do funcionario vai ser: %.2f\n", calcfim);

  return 0;
}
