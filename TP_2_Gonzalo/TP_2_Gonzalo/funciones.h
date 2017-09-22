#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#define TOTALPERSONAS 20

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}EPersona;



/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int pedirEspacioLibre(EPersona lista[]);


/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */

int buscarPorDni(EPersona lista[], int dni);

/**
 *
 * \param
 * \param  los datos de la persona cargada
 * \return el indice donde se encuentra el elemento cargado
 *
 */

void altaPersona(EPersona lista[]);
/**
 *
 * \param
 * \param DNI de la persona a la cual eliminar
 * \return el indice donde se encontraba la persona eliminada
 *
 */

void bajaPersona(EPersona lista[]);
/**
 *
 * \param
 * \param Nombre de las personas anteriormente cargadas
 * \return Los nombres de las personas cargadas ordenadas alfabeticamente
 *
 */

void ordenadaNombre(EPersona lista[]);
/**
 *
 * \param
 * \param Edades de las personas
 * \return Muestra un grafico con '*' de las edades cargadas
 *
 */

void graficoEdades(EPersona lista[]);
/**
 *
 * \param
 * \param Todos los elementos de la estructura "EPersona"
 * \return Todos los valores de los elementos de la estructura "EPersona" inicializados en 0
 *
 */

void iniciandoArray(EPersona lista[]);


#endif // FUNCIONES_H_INCLUDED
