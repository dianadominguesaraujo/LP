/*1.6 Escreva um algoritmo para ler as dimensões de uma cozinha retangular (comprimento,
largura e altura), calcular e escrever a quantidade de caixas de azulejos para se colocar em todas
as suas paredes (considere que não será descontado a área ocupada por portas e janelas). Cada
caixa de azulejos possui 1,5 m2.
*/


#include <stdio.h>

int main ()
{

	float comp, larg, alt, areacomp, arealarg, areatotal, result;
	
	printf("Informe o comprimento: ");
	scanf("%f", &comp);
	printf("Informe a largura: ");
	scanf("%f", &larg);	
	printf("Informe a altura: ");
	scanf("%f", &alt);


	areacomp = 2 * (comp * alt);
	arealarg = 2 * (larg * alt);
	areatotal = areacomp + arealarg;
	
	result = areatotal / 1.5;
	
	
	printf("Numero de caixas de azulejo que serao necessarias: %.2f\n", result);

  return 0;
}
