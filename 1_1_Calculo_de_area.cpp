
/* 1.1 Escreva um algoritmo que l� tr�s valores (A, B e C) e calcule:
� a �rea de um tri�ngulo que tem A por base e B por altura;
� a �rea do quadrado de lado B;
� a �rea do ret�ngulo de lados A e B;
� a �rea do c�rculo de raio C.

[Entrada] [Sa�da]
3 (A)
4 (B)
5 (C) 6 (�rea do tri�ngulo)
 16 (�rea do quadrado)
 12 (�rea do ret�ngulo)
 78.539816 (�rea do circulo) */


#include <stdio.h>
int main ()
{
	int a, b, c;
	float c1, c2, c3, c4;
	
	printf("Informe um valor inteiro para A: ");
	scanf("%d", &a);
	
	printf("Informe um valor inteiro para B: ");
	scanf("%d", &b);
	
	printf("Informe um valor inteiro para C: ");
	scanf("%d", &c);
	
	c1= (a * b) / 2;
	c2= b * 4;
	c3= a * b;
	c4= (c * c) * 3.14159;
	
	printf("A area do triangulo vai ser de: %.2f\n", c1);
	printf("A area do quadrado vai ser de: %.2f\n", c2);
	printf("A area do retangulo vai ser de: %.2f\n", c3);
	printf("A area do circulo vai ser de: %.2f\n", c4);

	return 0;
}
