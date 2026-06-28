/*
1.10 Uma loja vende bicicletas com um acréscimo de 50% sobre o seu preço de custo. Ela paga
a cada vendedor 2 salários mínimos mensais, mais uma comissão de 15 % sobre o preço de custo
de cada bicicleta vendida, dividida igualmente entre eles. Escreva um algoritmo que leia o
número de empregados da loja, o valor do salário mínimo, o preço de custo de cada bicicleta, o
número de bicicletas vendidas, calcule e escreva: O salário final de cada empregado e o lucro
(líquido) da loja.
*/

#include <stdio.h>

int main ()
{

	float sal_minimo, custo_bicicletas, comissao, sal_final, vendas_loja, lucro_loja;
	int empregados, quant_bicicletas;
	
	printf("Informe o numero de empregados da loja: ");
	scanf("%d", &empregados);

	printf("Informe o valor do salario minimo: ");
	scanf("%f", &sal_minimo);

	printf("Informe o preco de custo de cada bibicleta: ");
	scanf("%f", &custo_bicicletas);
		
	printf("Informe a quantidade de bicicletas vendidas: ");
	scanf("%d", &quant_bicicletas);
		
	comissao = ((0.15 * custo_bicicletas) / empregados ) * quant_bicicletas;
	sal_final = comissao + (sal_minimo * 2);
	vendas_loja = quant_bicicletas * (custo_bicicletas / 2);
	lucro_loja = vendas_loja - (sal_final * empregados);
	
	
	printf("O salario final de cada empregado eh de: R$ %.2f\n", sal_final);
	printf("O lucro da loja eh: R$ %.2f\n", lucro_loja);
	
  return 0;
}
