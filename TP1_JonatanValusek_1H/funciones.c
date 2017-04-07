#include "funciones.h"
#include <limits.h>

float ingresarNumero(char txt[], float min, float max)
{
    float numero;

    printf("%s", txt);
    scanf("%f", &numero);

    numero = validarNumero(numero, min, max);

    return numero;
}

void mensaje(char txt[])
{
    printf("%s\n", txt);

}

float validarNumero( float numero, float min, float max)
{


    while(numero<min || numero>max)
    {
        printf("\nReingrese un numero : ",min , max);
        scanf("%f", &numero);
    }

        return numero;
    }

    float sumarNumeros(float n1, float n2)
{
    float suma;

    suma = n1 + n2;

    return suma;
}

float restarNumeros(float n1, float n2)
{
    float resta;

    resta = n1 - n2;

    return resta;
}

float multiNumeros(float n1, float n2)
{
    float multip;

    multip = n1 * n2;

    return multip;
}

float dividirNumeros(float n1, float n2)
{

    float divi;

    divi = n1 / n2;

    return divi;
}

int factorial(int numero)
{

    int i, resultado = 1;

    for(i = numero; i >= 1; i--)
        {
            resultado = resultado * i;
        }

    return resultado;

}

