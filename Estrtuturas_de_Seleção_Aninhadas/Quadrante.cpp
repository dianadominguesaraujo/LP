/*
3.9 Escreva um algoritmo para ler as coordenadas (X, Y) de um ponto no sistema cartesiano e
escrever o quadrante ao qual o ponto pertence. Considere que o usuário não informará
nenhuma coordenada igual a zero.
*/

#include <stdio.h>

int main ()
{

    float x, y;
    
    printf("Informe o valor de X: ");
    scanf("%f", &x);
    
    printf("Informe o valor de y: ");
    scanf("%f", &y);
    
  
    if (x > 0) {
    
		if (y > 0) {
        	
            printf("I");
       }
        else {
        	printf("IV");
		}
	}
	
	else {
		if (y > 0) {
			printf("II");
		}
		
		else
			printf("III");
	}

  return 0;
  
}

    
