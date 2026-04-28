#include<stdio.h>
#include<stdlib.h>

int main()
{
    int A[3][4], B[3][4], C[3][4];
    int k, p;
    
    for (k=0; k<=2; k++)
        for (p=0; p<=3; p++)
        {
            A[k][p] = rand() % 10;
            B[k][p] = rand() % 10;
            C[k][p] = A[k][p] + B[k][p];
        }
    
    printf("A = \n");
    for (k=0; k<=2; k++)
    {
        for (p=0; p<=3; p++)
            printf("%d ", A[k][p]);
        printf("\n");
    }
    
    printf("\n\nB = \n");
    for (k=0; k<=2; k++)
    {
        for (p=0; p<=3; p++)
            printf("%d ", B[k][p]);
        printf("\n");
    }
    
    printf("\n\nC = \n");
    for (k=0; k<=2; k++)
    {
        for (p=0; p<=3; p++)
            printf("%d ", C[k][p]);
        printf("\n");
    }
}
