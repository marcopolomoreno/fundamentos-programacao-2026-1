#include <math.h>
#include<stdio.h>
int main()
{
    float massa, altura, imc;

    scanf("%f %f", &massa, &altura);

    imc = massa / pow(altura, 2);

    printf("O seu IMC eh: %1.f. ", imc);

    if (imc < 18.5)
        printf("Abaixo do peso.");

    if (imc >= 18.5 && imc < 24.9)
        printf("Peso ideal.");

    if (imc >= 24.9 && imc < 30)
        printf("Sobrepeso");

    if (imc >= 30 && imc < 40)
        printf("Obesidade");

    if (imc >= 40)
        printf("Obesidade");
}
