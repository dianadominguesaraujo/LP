/*
3.12) Escreva um algoritmo que dado um número de 1 a 7 deverá
ser informado o dia da semana.
1 - Domingo
2 - Segunda-feira
3 - Terça-feira
4 - Quarta-feira
5 - Quinta-feira
6 - Sexta-feira
7 - Sábado
*/

#include <stdio.h>

int main ()
{

    int dia;
    
    printf("Informe um numero inteiro referente ao dia: \n");
    scanf("%d", &dia);
    
    
  	if (dia < 1 || dia > 7) {
  		printf("Dia invalido!");
	  }
	  
	else {	 
	
 	   	if(dia == 1){
		printf("Domingo");
	  }
	
    	else {
    		
    		if (dia == 2){
			printf("Segunda-feira");

	       	}
	        else {
	        	
		        if (dia == 3){
				printf("Terca-feira");
	
		       	}
		       	
		       	else {
		       		
		       		if (dia == 4){
					printf("Quarta-feira");
				   	
					}	
					
					else {
						
						if (dia == 5){
						printf("Quinta-feira");
						
						}
						
						else {
							if (dia == 6){
							printf("Sexta-feira");
							
						}
							else {
								
								printf("Sabado");
								
								}
							}
						
						}
		       		}
				}
			}
		return 0;
		}
	}

    
