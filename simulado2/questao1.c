#include<stdio.h>

int main()
{
    int n, k, fat = 1;
    
    printf("n = ");
    scanf("%d", &n);
    
    for (k=1; k<=n; k++)
        fat = fat*k;
    
    printf("\n%d", fat);
}
