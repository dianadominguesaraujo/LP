/*
3.2 Escreva um algoritmo para ler a quantidade de gols marcados pelo Pelotas e a quantidade
de gols marcados pelo Brasil em um clássico BRA-PEL. Escrever o nome do vencedor. Caso não
haja vencedor deverá ser impressa a palavra EMPATE.
*/

#include <stdio.h>

int main ( )

{
	
 int pel, bra, calc;
	 
	 printf("Informe o numero de gols do Pelotas: ");
	 scanf("%d", &pel);
 
	 printf("Informe o numero de gols do Brasil: ");
	 scanf("%d", &bra);
	 
	
	if (bra > pel)
		printf ("Vencedor: Brasil");
		
	if (bra < pel)
		printf ("Vencedor: Pelotas");
	
	if (bra == pel)
		printf ("EMPATE!");
	
	
	return 0;
  
} 
 
 
