#include <stdio.h>
#include <stdlib.h>

// suma operador 1 y operador 2
int suma(int op1 ,int op2)
{
    int resp;
    resp = op1+op2;

    return resp;
}
// resta operador 1 y operador 2
int resta(int op1 ,int op2)
{
    int resp;
    resp = op1-op2;

    return resp;
}
// multiplica operador 1 y operador 2
int multiplicacion(int op1 ,int op2)
{
    int resp;
    resp = op1*op2;

    return resp;
}
// divide operador 1 y operador 2 ,y si operador 2 es 0 informa que no se podra realizar el calculo
int division(int op1 ,int op2)
{
    int resp;

    if (op2==0)
    {
        printf("\n\n  ERROR ,NO se podra  dividir por 0");

        resp = 0;
    }
    else
    {
    resp = op1/op2;
    }
    return resp;
}
// Muestra el factorial del operador 1 atraves de un bucle For que dara la cantidad de vueltas indicadas por el usuario sumando i en cada vuelta
int factorialA(int op1)
{
    int resp;
    int i,m=1;

    for (i=1;i<=op1;i++)
    {
        m=m*i;
    }

    resp=m;
    return resp;
}
// Muestra el factorial del operador 2 atraves de un bucle For que dara la cantidad de vueltas indicadas por el usuario sumando i en cada vuelta
int factorialB(int op2)
{
    int resp;
    int i,m=1;

    for (i=1;i<=op2;i++)
    {
        m=m*i;
    }

    resp=m;
    return resp;
}


