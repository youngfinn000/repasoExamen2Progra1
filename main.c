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
int cargarArregloGalaxia(galaxia A[],int dimension);

void mostrarArregloGalaxiaCondicion (galaxia A[],int validos, char tipodegalaxia[]);
void mostrarGalaxia(galaxia A);
void mostrarPlaneta(planeta A);
void mostrarArregloPlanetas(planeta A[],int validos);

int main()
{

    char archivo[] ="galaxia.bin";



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
    A.valPlanetas+=cargaListaPlanetas(A.listaPlanetas,20);

    printf("\n-------------------------\n");

    return A;
}

int cargarArregloGalaxia(galaxia A[],int dimension)
{
    int validos=0;
    char continuar='s';

    while (continuar=='s' && validos<dimension)
    {
        A[validos]=cargaGalaxia();
        validos++;

    }
    return validos;
}

/// mostrar

void mostrarArregloGalaxiaCondicion (galaxia A[],int validos, char tipodegalaxia[])
{
    int i=0;
    printf("\nGALAXIAS  \n");
    printf("\n ---------- \n");
    for(i=0; i<validos; i++)
    {
        if(strcmp (A->nombreGalaxia,tipodegalaxia==0))
        {
                   mostrarGalaxia(A[i]);
        }
    }
    printf("\n------------------------\n");
}

void mostrarGalaxia(galaxia A)
{


    printf("\n-------------------------\n");
    printf("\nnombre:%s\n",A.nombreGalaxia);
    printf("\ntipo de galaxia:%s\n",A.tipoGalaxia);
    printf("\npor quien fue descubierto:\n",A.descubiertoPor);

    mostrarArregloPlanetas(A.listaPlanetas,A.valPlanetas);
    printf("\nplanetas cargados:%d\n",A.valPlanetas);

    printf("\n-------------------------\n");
}

void mostrarPlaneta(planeta A)
{
    printf("\n----------PLANETA--------\n");
    printf("\n-------------------------\n");
    printf("\nnombre:%s\n",A.nombrePlaneta);
    printf("\nestrella:%s\n",A.estrella);
    printf("\ncantidad de satelites:%d\n",A.cantidadSatelites);
    printf("\nmasa:%f\n",A.masa);
    printf("\ntemperatura maxima:%d\n",A.tempMax);
    printf("\ntemperatura minima:%d\n",A.tempMin);
    printf("\n-------------------------\n");
}

void mostrarArregloPlanetas(planeta A[],int validos)
{
    int i=0;
    printf("\n----------LISTA PLANETAS--------\n");
    for(i=0; i<validos; i++)
    {
        mostrarPlaneta(A[i]);
    }
    printf("\n----------FIN LISTA PLANETAS--------\n");
}

/// funcion recursiva





