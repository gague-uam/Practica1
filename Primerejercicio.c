#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int num, cuadrado;
    printf("Escriba un numero: ");
    scanf("%i", &num);
    cuadrado = pow(num, 2);
    printf("El cuadrado de %i es %i", num, cuadrado);

    return 0;
}
