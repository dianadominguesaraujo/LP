/*
3.13) Um posto está vendendo combustíveis com a seguinte tabela de descontos:
• Álcool: Até 20 litros, desconto de 3 % por litro.
• Acima de 20 litros, desconto de 5 % por litro.
• Gasolina: até 15 litros, desconto de 3,5 % por litro.
• Acima de 15 litros, desconto de 6 % por litro
Escreva um algoritmo que leia o número de litros vendidos, o tipo de combustível
(codificado da seguinte forma: 1-álcool 2-Gasolina), calcule e imprima
o valor a ser pago pelo cliente, sabendo-se que o preço da gasolina
é de R$ 6,53 o litro e o álcool R$ 5,47.
*/

#include <stdio.h>

int main ()
{

    int tipo;
    float litros, calc;
    
    printf("Informe o numero de litros vendidos: \n");
    scanf("%f", &litros);
    
    printf("Informe o tipo de combustivel (1-Alcool 2-Gasolina): \n");
    scanf("%d", &tipo);
    		
    		
    		
  	if (tipo == 1 || tipo == 2){

    	if(tipo == 1){

     	   	if(litros <= 20){
            calc = (5.47 * litros) - (5.47 * litros * 0.03);
        	}
        	else{
            calc = (5.47 * litros) - (5.47 * litros * 0.05);
        	}
    	}

   		else{

        	if(litros <= 15){
            calc = (6.53 * litros) - (6.53 * litros * 0.035);
        	}
        	else{
            calc = (6.53 * litros) - (6.53 * litros * 0.06);
        	}
    	}

    	printf("O valor final a ser pago pelo cliente eh de: %.2f", calc);
	}
	
	else{
		
    printf("Codigo invalido!");
	}

  return 0;
}
