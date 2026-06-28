/*
3.1 Escreva um algoritmo para ler as notas da 1ª e 2ª avaliações de um aluno, calcular a média e
escrever se este aluno foi APROVADO, REPROVADO ou se está em EXAME. Escrever também a
média calculada.
OBS: Nota mínima para aprovação: 6,0
Nota mínima para ter direito ao exame: 3,0
*/

#include <stdio.h>

int main ( )

{ 

 	float nota1, nota2, media;
 
    printf("Informe a nota da primeira prova: ");
    scanf("%f", &nota1);
 
    printf("Informe a nota da segunda prova: ");
    scanf("%f", &nota2);
	 
	media = (nota1 + nota2) / 2;
	
	printf("A media final foi: %.2f\n", media);
	
	if (media >= 6)
		printf ("APROVADO!");
		
	else {
	if (media >= 3)
		printf ("EM EXAME");
		
	else
	printf ("REPROVADO!");

  return 0;
    
	}
	
	
} 
 
 
