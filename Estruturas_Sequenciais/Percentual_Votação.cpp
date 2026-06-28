/*1.7 Escreva um algoritmo para ler o número de eleitores de um município, o número de votos
brancos, nulos e válidos. Calcular e escrever o percentual que cada um representa em relação
ao total de eleitores.
*/

#include <stdio.h>

int main ()
{

	float eleitores, brancos, nulos, validos, calcb, calcn, calcv;

	printf("Informe o numero de eleitores: ");
	scanf("%f", &eleitores);
	printf("Informe o numero de votos brancos: ");
	scanf("%g", &brancos);	
	printf("Informe o numero de votos nulos: ");
	scanf("%f", &nulos);
	printf("Informe o numero de votos validos: ");
	scanf("%f", &validos);

	calcb = (brancos / eleitores) * 100;
	calcn = nulos / eleitores * 100;	
	calcv = validos / eleitores * 100;

	
	
	printf("O percentual de votos brancos: %.2f\n", calcb);
	printf("O percentual de votos nulos: %.2f\n", calcn);
	printf("O percentual de votos validos: %.2f\n", calcv);	

  return 0;
}
