/*
2.5.
Escreva um algoritmo para ler as notas das duas avaliações de um aluno no semestre, calcular
e escrever a média semestral e a seguinte mensagem: ‘PARABÉNS! Você foi aprovado’ somente
se o aluno foi aprovado
*/

#include <stdio.h>
int main ()
{

	float nota1, nota2, media;
	
	printf("Informe a nota 1: ");
	scanf("%f", &nota1);
	
	printf("Informe a nota 2: ");
	scanf("%f", &nota2);
		
		
	media = (nota1 + nota2) / 2;
	
	printf("Media semestral: %.2f\n", media);
	
		if(media >= 7) {
			printf("PARABENS! Voce foi aprovado!");
		}

  return 0;
}
