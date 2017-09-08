#include "funciones.h"
#include <limits.h>

/** \brief Recibe un array char, un numero flotante
 *
 * \param recibe un numero ingresado y lo valida
 * \return Numero flotante ingresado
 *
 */

float ingresarNumero(char txt[], float min, float max)
{
    float numero;

    printf("%s", txt);
    scanf("%f", &numero);

    numero = validarNumero(numero, min, max);

    return numero;
}

/** \brief Recibe un numero flotante a validar
 *
 * \param Numero a validar
 * \return Retorna el numero si es valido
 *
 */
float validarNumero( float numero, float min, float max)
{


    while(numero<min || numero>max)
    {
        printf("\nReingrese un numero : ",min , max);
        scanf("%f", &numero);
    }

        return numero;
    }

/** \brief Recibe dos numeros flotantes, realiza la suma y devuelve el resultado
 *
 * \param Primer numero flotante a sumar
 * \param Segundo numero flotante a sumar
 * \return Retorna el resultado de la suma de los numeros ingresados
 *
 */
    float sumarNumeros(float n1, float n2)
{
    float suma;

    suma = n1 + n2;

    return suma;
}
/** \brief Recibe dos numeros flotantes, realiza la resta y devuelve el resultado
 *
 * \param Primer numero flotante a restar
 * \param Segundo numero flotante a restar
 * \return Retorna el resultado de la resta de los numeros ingresados
 *
 */
float restarNumeros(float n1, float n2)
{
    float resta;

    resta = n1 - n2;

    return resta;
}
/** \brief Recibe dos numeros flotantes, realiza la multiplicacion y devuelve el resultado
 *
 * \param Primer numero flotante a multiplicar
 * \param Segundo numero flotante a multiplicar
 * \return Retorna el resultado de la multiplicacion
 *
 */
float multiNumeros(float n1, float n2)
{
    float multip;

    multip = n1 * n2;

    return multip;
}
/** \brief Recibe dos numeros flotantes, realiza la division y devuelve el resultado
 *
 * \param Numero flotante a dividir(dividendo)
 * \param Numero flotante para realizar la division(divisor)
 * \return Retorna el resultado de la division
 *
 */
float dividirNumeros(float n1, float n2)
{

    float divi;

    divi = n1 / n2;

    return divi;
}
/** \brief Recibe un numero, saca el factorial y devuelve el resultado
 *
 * \param  Guarda el numero para realizar el factorial
 * \return Retorna el resultado de la operacion
 *
 */
int factorial(int numero)
{

    int i, resultado = 1;

    for(i = numero; i >= 1; i--)
        {
            resultado = resultado * i;
        }

    return resultado;

}

