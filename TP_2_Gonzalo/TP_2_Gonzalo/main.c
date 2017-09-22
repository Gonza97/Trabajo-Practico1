#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    system("color 1B");
    char seguir='s';
    int opcion=0;

    EPersona lista[TOTALPERSONAS];

    iniciandoArray(lista);

    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                    altaPersona(lista);
                break;
            case 2:
                    eliminarPersona(lista);
                break;
            case 3:
                    ordenadaNombre(lista);
                break;
            case 4:
                    graficoEdades(lista);
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
