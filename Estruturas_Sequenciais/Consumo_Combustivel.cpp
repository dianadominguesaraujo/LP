/*
1.9 Um motorista de taxi deseja calcular o rendimento de seu carro na praça. Sabendo-se que o
preço do combustível é de R$ 2,50, escreva um algoritmo para ler: a marcação do odômetro (Km) no início do dia,
a marcação (Km) no final do dia, o número de litros de combustível gasto
e o valor total (R$) recebido dos passageiros. Calcular e escrever: a média do consumo em Km/L
e o lucro (líquido) do dia.
*/

#include <stdio.h>

int main ()
{

	float kminicio, kmfim, consumo_litros, valor_receb, calckm, calcvalor;
	
	printf("Informe a marcacao do odometro no inicio do dia: ");
	scanf("%f", &kminicio);

	printf("Informe a marcacao do odometro no inicio do dia: ");
	scanf("%f", &kmfim);

	printf("Informe o numero de litros de combustivel consumido no dia: ");
	scanf("%f", &consumo_litros);
		
	printf("Informe o valor recebido pelos clientes ao longo do dia: ");
	scanf("%f", &valor_receb);
		
		
	calckm = (kmfim - kminicio) / consumo_litros;
	calcvalor = valor_receb - (consumo_litros * 2.50);
	
	
	printf("A quantia media de consumo eh de: %.0fkm/l\n", calckm);
	printf("O lucro do dia eh: R$ %.2f\n", calcvalor);
	
  return 0;
}
