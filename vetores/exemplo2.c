#include <stdio.h>

int main()
{
    int numeros[7];
    printf("Digite 7 numeros inteiros separados por espaço: ");
    
    //leitura dos dados
    for (int k=0; k<7; k++)
        scanf("%d", &numeros[k]);
    
    //mostrar os dados de trás para frente
    for (int k=6; k>=0; k--)
        printf("%d; ", numeros[k]);
}
