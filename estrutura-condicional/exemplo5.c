#include<stdio.h>

int main()
{
    int ano;

    scanf("%d", &ano);

    if ( ano > 2026 || ano < 1900 )
        printf("Ano inválido");
    else
    {
        int idade = 2026 - ano;

        if (idade >= 18)
            printf("Entrada permitida");
        else
            printf("Entrada proibida");
    }
}
