#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/// ------------------------------------------------------------------------------------
/// ESTRUCTURAS
/// ------------------------------------------------------------------------------------
typedef struct
{
    char nombrePlaneta [20];
    char estrella [20];
    int cantidadSatelites;
    float masa; // en relacion a la tierra, ej:neptuno es 17,14 tierras
    int tempMax;
    int tempMin;
}planeta;

typedef struct
{
    char nombreGalaxia[20];
    char tipoGalaxia[20]; // eliptica,lenticular,espiral,irregular, etc
    char descubiertoPor[20];
    planeta listaPlanetas[20];
    int valPlanetas;
}galaxia;


/// ------------------------------------------------------------------------------------
/// PROTOTIPADO
/// ------------------------------------------------------------------------------------


int main()
{

    char archivo[]='galaxia.bin';



    printf("Hello world!\n");
    return 0;
}

/// ------------------------------------------------------------------------------------
/// FUNCIONES
/// ------------------------------------------------------------------------------------

