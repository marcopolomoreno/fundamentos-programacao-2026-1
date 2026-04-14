#include<stdio.h>

int main()
{
    /*
    primeiro a gente captura a palavra e joga no vetor.
    testa se cada item do vetor é igual a uma vogal e conte as vogais.
     */
    
    int cont = 0;
    char letras[50];
    
    printf("digite uma palavra, finalize com um ponto e dê enter: ");
    
    //insere valores na variavel letras
    for(int k = 0; k<50; k++)
    {
        scanf("%c", &letras[k]);
        if(letras[k] == '.')
            break;
    }
    
    //conta as vogais
    for(int k = 0; k<50; k++)
    {
        if(letras[k] == '.')
            break;
        
        if(letras[k]=='a' || letras[k]=='e' || letras[k]=='i' ||letras[k]=='o' || letras[k]=='u')
            cont++;
    }
    printf("existem %d vogais", cont);
}
