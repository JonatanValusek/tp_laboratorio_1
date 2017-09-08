#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float numero1=0,numero2=0;
    float operando1=0;
    float operando2=0;
    float max = INT_MAX;
    float min = INT_MIN;

    do
    {

        printf("\n1- Ingresar 1er operando (A=%.3f)\n",operando1);
        printf("2- Ingresar 2do operando (B=%.3f)\n",operando2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)

        {
            case 1:

            numero1=ingresarNumero("\nIngrese un numero: ", min, max);

            if (numero1!=0)operando1=numero1;

                system("cls");

                break;
            case 2:


                numero2=ingresarNumero("\nIngrese un numero: ", min, max);

                if (numero1!=0)operando2=numero2;


                system("cls");


                break;
            case 3:

                printf("La suma de A y B es :%.2f\n\n",sumarNumeros(numero1,numero2));
                system("pause");
                system("cls");

                break;

            case 4:
                printf("La resta entre A y B es :%.2f\n\n",restarNumeros(numero1,numero2));
                system("pause");
                system("cls");
                break;

            case 5:

                if(numero2==0)
                {
                    printf("Debe ingresar el segundo operando para realizar la operacion\n\n");
                }
                else
                {
                    printf("La division entre A y B es :%.2f\n\n",dividirNumeros(numero1,numero2));
                }

                system("pause");
                system("cls");
                break;

            case 6:
                printf("La multiplicacion entre A y B es :%.2f\n\n",multiNumeros(numero1,numero2));
                system("pause");
                system("cls");
                break;
            case 7:
                printf("El factorial de A es :%lld\n\n",factorial(numero1));
                system("pause");
                system("cls");
                break;
            case 8:
                printf("La suma de A y B es :%.2f",sumarNumeros(numero1,numero2));
                printf("\nLa resta entre A y B es :%.2f",restarNumeros(numero1,numero2));
                if(numero2==0)
                {
                    printf("\nDebe ingresar el segundo operando para realizar la operacion\n\n");
                }
                else
                {
                    printf("La division entre A y B es :%.2f\n\n",dividirNumeros(numero1,numero2));
                }
                printf("\nLa multiplicacion entre A y B es :%.2f",multiNumeros(numero1,numero2));
                printf("\nEl factorial de A es :%lld\n\n",factorial(numero1));
                system("pause");
                system("cls");
                break;
            case 9:
                seguir = 'n';
                system("pause");
                system("cls");
                break;
        }
    }while(seguir=='s');
    return 0;
}
