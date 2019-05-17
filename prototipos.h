#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


typedef  struct Chofer {
  int numeroId;
  char Nombre[20];
  char ApellidoP[20];
  char ApellidoM[20];
  int estatus;
}Chofer;

typedef struct Auto {
  char numeroPlaca[8];
  char marca[15];
  char modelo[15];
  char color[10];

}Auto;

void AdministrarChoferes(Chofer choferes[3], int *contadorC);
void administrarVehiculos(Auto autos[10], int *contadorA);
void administrarEstacionamiento(Chofer choferes[3], Auto autos[10], int pisos[3][3]);

void reporteChoferes(Chofer choferes[3], int contadorC);
void agregarChoferes(Chofer choferes[3], int *contadorC);
void modificarChoferes(Chofer choferes[3], int contadorC);


void reporteVehiculos(Auto autos[10], int contadorA);
void agregarVehiculos(Auto autos[10], int *contadorA);
void modificarVehiculos(Auto autos[10], int contadorA);

void controlEstacionamiento(Chofer choferes[3], Auto autos [10], int pisos[3][3], int *i, int *j);
void ingresarVehiculo(Chofer choferes[3], Auto autos [10], int pisos[3][3], int *i, int *j);
void salidaVehiculo(Chofer choferes[3], Auto autos [10], int pisos[3][3], int *i, int *j);
void reporteEspacios(Auto autos[10], int pisos[3][3], int i, int j);

void reporteFinanciero(int pisos[3][3]);
void reporteProductividad(int pisos[3][3]);
