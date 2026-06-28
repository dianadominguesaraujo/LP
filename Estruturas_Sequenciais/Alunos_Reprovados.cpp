
/*
1.8 A turma C é composta de 60 alunos, e a turma D de 20 alunos. Escreva um algoritmo que
leia o percentual de alunos reprovados na turma C, o percentual de aprovados na turma D,
calcule e escreva:
a) A quantidade de alunos reprovados na turma C.
b) A quantidade de alunos reprovados na turma D.
c) A percentagem de alunos reprovados em relação ao total de alunos das duas turmas.
*/


#include <stdio.h>

int main ()
{

	float percentc, percentd, calctotal, calcc, calcd;
	
	printf("Informe o percentual de alunos reprovados na turma C: ");
	scanf("%f", &percentc);

	printf("Informe o percentual de alunos reprovados na turma D: ");
	scanf("%f", &percentd);
		
	calcc = percentc * 60 / 100;
	calcd = percentd * 20 / 100;
	
	
	calctotal = (calcc + calcd)  / 80 * 100;

	
	printf("O total de alunos reprovados na turma C eh: %.0f\n", calcc);
	printf("O total de alunos reprovados na turma D eh: %.0f\n", calcd);
	printf("O total de alunos reprovados em relação ao total de alunos do curso eh: %.2f\n", calctotal);	

  return 0;
}
