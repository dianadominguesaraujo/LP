/*
Elabore um algoritmo que, dada a idade de um nadador, classifique-o em uma das
seguintes categorias:
• Infantil A: 5 a 7 anos
• Infantil B: 8 a 10 anos
• Juvenil A: 11 a 13 anos
• Juvenil B: 14 a 18 anos
• Sênior: maiores de 18 anos
*/

#include <stdio.h>

int main ()
{

    int idade;
    
    printf("Informe a idade do nadador: \n");
    scanf("%d", &idade);
    
    
  	if (idade < 5) {
  		printf("Idade minima nao atingida para ser nadador");
	  }
	  
	else { 
	
 	   	if(idade >= 5 & idade <= 7){
		printf("Nadador de categoria Infantil A");
	  }
	
    	else {
    		
    		if (idade >= 8 & idade <= 10){
			printf("Nadador de categoria Infantil B");

	       	}
	        else {
	        	
		        if (idade >= 11 & idade <= 13){
				printf("Nadador de categoria Juvenil A");
	
		       	}
		       	
		       	else {
		       		
		       		if(idade >= 14 & idade <= 17){
				printf("Nadador de categoria Juvenil B");
				   	
					}	
					
					else {
						
					printf("Nadador de categoria Senior");
					}
		       	}
			}
		}
			
	}

  return 0;
  
}
    
