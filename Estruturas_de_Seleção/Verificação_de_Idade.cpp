/*
11. Escreva um algoritmo para ler o ano de nascimento de uma pessoa e escrever uma
mensagem que diga se ela poderá ou não votar este ano (não é necessário considerar o mês em
que ela nasceu).
*/

#include <stdio.h>

int main ()
{

    int nascimento, idade;
    
    printf("Informe o seu ano de nascimento: ");
    scanf("%d", &nascimento);
    
    idade = 2026 - nascimento;
    
    if(idade >= 16) {
        printf("Voce podera votar esse ano");
    }
    
    else {
        printf("Voce nao podera votar esse ano");
    }

    return 0;
}
