#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"



int main()
{
    system("color 0A");

    float Num1, Num2;
    float Resultado;
    long long int ResultadoFactorial;

    char seguir='s';
    int opcion=0;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=%.1f)\n",Num1);
        printf("2- Ingresar 2do operando (B=%.1f)\n",Num2);
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
                system("cls");

                Num1 = PedirNumero();//Llamada a la funcion 1
                break;
            case 2:
                system("cls");

                Num2 = PedirNumero();
                break;
            case 3:
                system("cls");

                Resultado = Sumar(Num1, Num2);
                printf("Resultado: %.1f\n", Resultado);
                break;
            case 4:
                 system("cls");

                Resultado = Resta(Num1, Num2);
                printf("Resultado: %.1f\n", Resultado);
                break;
            case 5:
                system("cls");

                Resultado = Division(Num1, Num2);
                printf("Resultado: %.1f\n", Resultado);
                break;
            case 6:
                system("cls");

                Resultado = Multiplicacion(Num1, Num2);
                printf("Resultado: %.1f\n", Resultado);
                break;
            case 7:
                system("cls");

                ResultadoFactorial = Factorial(Num1);
                printf("Resultado: %lli\n", ResultadoFactorial);

                break;
            case 8:
                system("cls");

                Resultado = Sumar(Num1, Num2);
                printf("Resultado de la suma: %.1f\n", Resultado);



                Resultado = Resta(Num1, Num2);
                printf("Resultado de la resta: %.1f\n", Resultado);



                Resultado = Division(Num1, Num2);
                printf("Resultado de la division: %.1f\n", Resultado);



                Resultado = Multiplicacion(Num1, Num2);
                printf("Resultado de la multiplicacion: %.1f\n", Resultado);



                ResultadoFactorial = Factorial(Num1);
                printf("Resultado del factorial: %lli\n", ResultadoFactorial);
                break;
            case 9:
                seguir = 'n';
                break;
        }



    }
    return 0;
}
