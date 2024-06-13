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
} planeta;

typedef struct
{
    char nombreGalaxia[20];
    char tipoGalaxia[20]; // eliptica,lenticular,espiral,irregular, etc
    char descubiertoPor[20];
    planeta listaPlanetas[20];
    int valPlanetas;
} galaxia;


/// ------------------------------------------------------------------------------------
/// PROTOTIPADO
/// ------------------------------------------------------------------------------------

planeta cargaPlaneta ();
int cargaListaPlanetas (planeta A[],int dimension);
galaxia cargaGalaxia();

int main()
{

    char archivo[]='galaxia.bin';



    printf("Hello world!\n");
    return 0;
}

/// ------------------------------------------------------------------------------------
/// FUNCIONES
/// ------------------------------------------------------------------------------------

/// CARGA

planeta cargaPlaneta ()
{
    planeta A;

    printf("\nCARGA DE PLANETA\n");
    printf("\n-------------------------\n");
    printf("\ningrese nombre\n");
    fflush(stdin);
    gets(A.nombrePlaneta);

    printf("\ningrese estrella\n");
    fflush(stdin);
    gets(A.estrella);

    printf("\ningrese cantidad satelites\n");
    scanf("%d",&A.cantidadSatelites);

    printf("\ningrese masa\n");
    scanf("%f",&A.masa);

    printf("\ningrese temperatura maxima\n");
    scanf("%d",&A.tempMax);

    printf("\ningrese temperatura minima\n");
    scanf("%d",&A.tempMin);
    printf("\n-------------------------\n");
    return A;
}

int cargaListaPlanetas (planeta A[],int dimension)
{
    int valPlanetas=0;
    char carga='s';

    while(carga=='s' && valPlanetas<dimension)
    {
        A[valPlanetas]=cargaPlaneta();
        valPlanetas++;
    printf("para gargar mas planetas presionar s\n");
    fflush(stdin);
    scanf("%c",&carga);
    }
    return valPlanetas;
}

galaxia cargaGalaxia()
{
    galaxia A;


    printf("\nCARGA DE GALAXIA\n");
    printf("\n-------------------------\n");
    printf("\ningrese nombre\n");
    fflush(stdin);
    gets(A.nombreGalaxia);

    printf("\ningrese ripo de galaxia\n");
    fflush(stdin);
    gets(A.tipoGalaxia);

    printf("\ningrese por quien fue descubierto\n");
    fflush(stdin);
    gets(A.descubiertoPor);

    printf("\ningrese planetas\n");
    A.valPlanetas+=cargaListaPlanetas(galaxia.listaPlanetas[],20);

    printf("\n-------------------------\n");

    return A;
}









