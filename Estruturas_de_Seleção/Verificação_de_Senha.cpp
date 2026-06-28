/*
2.10. Escreva um algoritmo que verifique a validade de uma senha fornecida pelo usuário. A senha
válida é o número 328014. Deve ser impresso as seguintes mensagens:
- ACESSO PERMITIDO (caso a senha seja válida).
- ACESSO NEGADO (caso a senha seja inválida)
*/

#include <stdio.h>

int main ()
{

    int senha;
    
    printf("Informe a senha: ");
    scanf("%d", &senha);
    
    
    if(senha == 328014) {
        printf("ACESSO PERMITIDO");
    }
    
    else {
        printf("ACESSO NEGADO");
    }

    return 0;
}
