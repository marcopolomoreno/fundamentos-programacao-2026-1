#include<stdio.h>

int main()
{
	float nota;
	
	printf("Digite sua nota: ");
	
	scanf("%f", &nota);
	
	if (nota > 10 || nota < 0)
	{
		printf("Nota invalida");
	}
	else
	{
		if (nota >= 7)
			printf("Aprovado");
			
		if (nota >= 5 && nota < 7)
			printf("Recuperacao");
			
		if (nota < 5)
			printf("Reprovado");			
	}
}
