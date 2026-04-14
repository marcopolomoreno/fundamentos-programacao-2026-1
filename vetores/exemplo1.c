#include <stdio.h>

int main()
{
	int nota[4];
	float media = 0;
	
	for (int k=1; k<=4; k++)
	{
		printf("Digite a nota %d: ", k);
		scanf("%d", &nota[k-1]);
		printf("\n");
	}
	
	for (int k=1; k<=4; k++)
	{
		media = media + nota[k-1]/4.0;
	}
	
	printf("Media obtida: %.1f", media);
}
