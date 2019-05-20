#include "prototipos.h"

void  escribirChoferes(Chofer choferes[3], int contadorC)
{
  int i;

  FILE *archivo;

  archivo = fopen("choferes.txt","wt");

  for (i = 0; i < contadorC; i++)
  {
    fprintf(archivo, "Numero de identificacion: %d\n", choferes[i].numeroId);
    fprintf(archivo, "Nombre: %s\n", choferes[i].nombre);
    fprintf(archivo, "Apellido Paterno: %s\n", choferes[i].apellidoP);
    fprintf(archivo, "Apellido Materno: %s\n", choferes[i].apellidoM);
    fprintf(archivo, "Estatus: %d\n", choferes[i].estatus);
  }
  fclose(archivo);
}

void escribirVehiculos(Auto autos[10], int contadorA)
{
  int i;
  FILE *archivoV;
  archivoV = fopen ("vehiculos.txt","wt");

  for (i = 0; i < contadorA; i++) {
      fprintf(archivoV,"Numero de placa: %s\n",autos[i].numeroPlaca);
      fprintf(archivoV, "Marca: %s\n", autos[i].marca);
      fprintf(archivoV, "Modelo: %s\n", autos[i].modelo);
      fprintf(archivoV, "Color: %s\n", autos[i].color);
  }
  fclose (archivoV);
}

void leerChoferes(Chofer choferes[3], int *contadorC)
{
  int i=0;
  FILE *archivo;
  archivo = fopen("choferes.txt", "rt");

  while(fscanf(archivo,"Numero de identificacion: %i\n",&choferes[i].numeroId)==1){
    fscanf(archivo, "Nombre: %s\n", choferes[i].nombre);
    fscanf(archivo, "Apellido Paterno: %s\n", choferes[i].apellidoP);
    fscanf(archivo, "Apellido Materno: %s\n", choferes[i].apellidoM);
    fscanf(archivo, "Estatus: %d\n", &choferes[i].estatus);
    i++;
  }
  *contadorC=i;
  fclose(archivo);
}
void leerVehiculos(Auto autos[10], int *contadorA)
{
  int i = 0;
  FILE *archivoV;
  archivoV = fopen("vehiculos.txt", "rt");

  while(fscanf(archivoV,"Numero de placa: %s\n",autos[i].numeroPlaca) == 1)
  {
      fscanf(archivoV, "Marca: %s\n", autos[i].marca);
      fscanf(archivoV, "Modelo: %s\n", autos[i].modelo);
      fscanf(archivoV, "Color: %s\n", autos[i].color);
      i++;
  }
  *contadorA = i;
  fclose(archivoV);
}
