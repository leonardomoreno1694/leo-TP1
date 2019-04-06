#include <stdio.h>
#include <stdlib.h>
#include "calc.h"


int main()
{
    char continuar='s';
    int opSelec=0,primerNumero=0,segundoNumero=0;


    while(continuar=='s')
    { //menu inicial
        printf("TP1: CALCULADORA \n\n\n");
        printf("1 >>> Ingresar 1er operando (A = %d)\n\n",primerNumero);
        printf("2 >>> Ingresar 2do operando (B = %d)\n\n",segundoNumero);
        printf("3 >>> Calcular todas las operaciones\n\n");
        printf("4 >>> Informar todos los resultados \n\n");
        printf("5 >>> Salir\n");
      //scaneo la opcion seleccionada
               scanf("%d",&opSelec);
      //con switch direcciono la accion seleccionada a la accion requerida
        switch(opSelec)
        {
            case 1: //tomo primer operando
                system("cls");
                printf("Ingresa el valor del primer operando: ");
                scanf("%d",&primerNumero);
                printf("Valor del 1er operando: %d\n\n",primerNumero);
                break;
            case 2: //tomo segundo operando
                system("cls");
                printf("Ingresa el valor del segundo operando: ");
                scanf("%d",&segundoNumero);
                printf("Valor del 2do operando: %d\n\n",segundoNumero);
                break;
            case 3: // imprimo los calculos a realizar
                 system("cls");
                 printf("A - Calcular la suma (%d+%d)\n",primerNumero,segundoNumero);
                 printf("B - Calcular la resta (%d-%d)\n",primerNumero,segundoNumero);
                 printf("C - Calcular la division (%d/%d)\n",primerNumero,segundoNumero);
                 printf("D - Calcular la multiplicacion (%d*%d)\n",primerNumero,segundoNumero);
                 printf("E - Calcular el factorial de (%d) y (%d)\n",primerNumero,segundoNumero);
                break;
            case 4: // muestro los resultados de los calculos realizados
                system("cls");
                printf("A - resultado de la suma es: %d\n\n",suma(primerNumero,segundoNumero));
                printf("B - resultado de la resta es: %d\n\n",resta(primerNumero,segundoNumero));
                printf("C - resultado de la division es: %d\n\n",division(primerNumero,segundoNumero));
                printf("D - resultado de la multiplicacion es: %d\n\n",multiplicacion(primerNumero,segundoNumero));
                printf("E - resultado del factorial A es: %d\n\n",factorialA(primerNumero));
                printf("F - resultado del factorial B es: %d\n\n",factorialB(segundoNumero));
                break;
            case 5: // Finaliza la calculadora si el usuario quiere
                continuar = 'n';
                system("cls");
                printf("CALCULOS FINALIZADOS,HASTA PRONTO!\n\n\n");
                break;
                default:
                 system("cls");
            printf("\n\n\nLA OPCION SELECCIONADA NO EXISTE,INTRODUSCA UNA OPCION CORRECTA\n\n\n");
        }
    }

    return 0;
}
