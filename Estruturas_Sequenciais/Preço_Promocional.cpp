/*
2.4. Uma empresa de roupas resolveu fazer uma promoção especial e conceder um desconto de
18 % sobre o preço de venda de todo seu estoque. Escreva um algoritmo que leia o preço de
venda antes da promoção e calcule quanto deve ser o preço promocional.
*/

#include <stdio.h>
int main ()
{

	float preco_original, preco_promocional;
	
	printf("Informe o preco original: ");
	scanf("%f", &preco_original);
	
	
	preco_promocional = preco_original - (preco_original * 0.18);

	
	printf("O preco reajustado vai ser: R$ %.2f\n", preco_promocional);

  return 0;
}
