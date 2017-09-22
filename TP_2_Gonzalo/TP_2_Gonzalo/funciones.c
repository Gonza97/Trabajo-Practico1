#include "funciones.h"
#include <stdio.h>

void iniciandoArray(EPersona lista[])
{
    int i;
     for (i = 0; i < TOTALPERSONAS; i++)
    {
        lista[i].dni = 0;
        lista[i].estado = 0;
        lista[i].edad = 0;
        lista[i].nombre [50]="";
    }
}

int pedirEspacioLibre(EPersona lista[])
{
    int i;
    for(i = 0; i < TOTALPERSONAS; i++)
    {
        if(lista[i].estado == 0)
        {
            return i;
        }
    }
    return -1;
}

int buscarPorDni(EPersona lista[], int dni)
{
    int i;
    for(i = 0; i<TOTALPERSONAS; i++)
    {
        if(lista[i].estado == 1 && lista[i].dni == dni)
        {
            return i;
        }
    }
    return -1;
}

void altaPersona(EPersona lista[])
{
    int identidad = pedirEspacioLibre(lista);
    if(identidad == -1)
    {
        printf("Disculpe ya no hay mas espacio, intentelo mas tarde\n");
        return;
    }

    printf("Ingrese un nombre:");
    scanf("%s", &lista[identidad].nombre);
    printf("Ingrese una edad:");
    scanf("%d", &lista[identidad].edad);
    printf("Ingrese dni:");
    scanf("%d", &lista[identidad].dni);

    lista[identidad].estado = 1;
}

void mostrarPersona(EPersona persona)
{
    printf("Nombre: %s\nEdad: %d\nDNI: %d\n", persona.nombre, persona.edad, persona.dni);
}

void eliminarPersona(EPersona lista[], int TOTAL_DE_PERSONAS)
{
        int auxInt;
        int i;
        int flag=0;
        char respuesta;

        printf("INGRESE DNI A ELIMINAR: ");
        scanf("%d", &auxInt);

    for(i=0 ; i<TOTALPERSONAS;i++)
        {
          if(auxInt==lista[i].dni)
           {
               flag=1;
               mostrarPersona(lista[i]);
               printf("¿Seguro que desea eliminar?");
               respuesta=getche();
                if(respuesta=='s')
                {
                    printf("\n");
                    lista[i].estado = 0;
                    printf("¡Eliminacion exitosa!\n");
                }
                else
                {
                    printf("Accion cancelada\n");
                }
           break;
           }
        }
        if(flag==0)
        {
            printf("DNI no existente");
        }

}

void ordenadaNombre(EPersona lista[])
{
    int i;
    int j;
    EPersona aux;


    for(i = 0; i < TOTALPERSONAS - 1; i++)
    {
        for(j = i + 1; j < TOTALPERSONAS; j++)
        {
            if(strcmp(lista[i].nombre, lista[j].nombre) > 0)
            {
                aux = lista[i];
                lista[i] = lista[j];
                lista[j] = aux;
            }
        }
    }

    for(i = 0; i < TOTALPERSONAS; i++)
    {
        if(lista[i].estado)
        {
            mostrarPersona(lista[i]);
        }
    }
}

void graficoEdades(EPersona lista[])
{
    int i;
    int hasta18 = 0;
    int de19a35 = 0;
    int mayorDe35 = 0;
    int flag = 0;
    int mayor;


    for(i = 0; i < TOTALPERSONAS; i++)
    {
        if(lista[i].estado)
        {
            if(lista[i].edad < 18)
            {
                hasta18++;
            }
            else if((lista[i].edad > 18 && lista[i].edad < 35))
            {
                de19a35++;
            }
            else if(lista[i].edad > 35)
            {
                mayorDe35++;
            }
        }
    }
    //

    if(hasta18 >= de19a35 && hasta18 >= mayorDe35)
    {
        mayor = hasta18;
    }
    else
    {
        if(de19a35 >= hasta18 && de19a35 >= mayorDe35)
        {
            mayor = de19a35;
        }
        else
        {
            mayor = mayorDe35;
        }
    }

    for(i = mayor; i > 0; i--)
    {
        if(i < 10)
        {
            printf("%02d|", i);
        }
        else
            printf("%02d|", i);

        if(i <= hasta18)
        {
            printf("*");
        }
        if(i <= de19a35)
        {
            flag = 1;
            printf("\t*");
        }
        if(i <= mayorDe35)
        {
            if(flag == 0)
            {
                printf("\t\t*");
            }

            if(flag == 1)
            {
                printf("\t*");
            }

        }

        printf("\n");
    }
    printf("--+-----------------");

    printf("\n  |<18\t19-35\t>35");

    printf("\n   %d\t%d\t%d\n", hasta18, de19a35, mayorDe35);
}







