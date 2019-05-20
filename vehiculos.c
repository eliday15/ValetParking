#include "aEstacionamiento.c"

/*
*@fn Función para reportar los vehiculos ingresados en el sistema
*@param arreglo de autos y contador
*@var variable contador
*/
void reporteVehiculos(Auto autos[10], int contadorA)
{
    int i;


    for (i = 0; i < contadorA; i++)
    {
      printf("\nNumero de placa: %s\n", autos[i].numeroPlaca);
      printf("Marca: %s\n", autos[i].marca);
      printf("Modelo: %s\n", autos[i].modelo);
      printf("Color: %s\n", autos[i].color);
    }

    return;
}

/*
*@fn Función para agregar vehiculos al sistema
*@param arreglo de autos y contador
*/
void agregarVehiculos(Auto autos[10], int *contadorA)
{
  printf("Porfavor llena los datos para agregar el vehiculo\n");

  printf("Numero de placa:\n");
  scanf(" %[^\n]", autos[*contadorA].numeroPlaca);
  printf("Marca:\n");
  scanf(" %[^\n]", autos[*contadorA].marca);
  printf("Modelo:\n");
  scanf(" %[^\n]", autos[*contadorA].modelo);
  printf("Color:\n");
  scanf(" %[^\n]", autos[*contadorA].color);

  printf("\nNumero de placa: %s\n", autos[*contadorA].numeroPlaca);
  printf("Marca: %s\n", autos[*contadorA].marca);
  printf("Modelo: %s\n", autos[*contadorA].modelo);
  printf("Color: %s\n", autos[*contadorA].color);

  FILE *archivoV;
  archivoV = fopen ("vehiculos.txt","at");
  if (archivoV!=NULL)
  {
    fprintf(archivoV,"Numero de placa: %s\n",autos[*contadorA].numeroPlaca);
    fprintf(archivoV, "Marca: %s\n", autos[*contadorA].marca);
    fprintf(archivoV, "Modelo: %s\n", autos[*contadorA].modelo);
    fprintf(archivoV, "Color: %s\n", autos[*contadorA].color);
    fclose (archivoV);
  }

  (*contadorA)++;

  return;
}

/*
*@fn Función para modificar datos de los vehiculos
*@param arreglo de autos y variable contador
*@var variable contador y variable tipo char para recibir los datos de la placa
*/
void modificarVehiculos(Auto autos[10], int contadorA)
{
    int i;
    char placa[8];
    printf("Porfavor introduce el numero de placa para modificar los datos del vehiculos\n");
    scanf("%s", placa);

    for (i = 0; i < contadorA; i++)
    {
    printf("%i\n",i);
      if (strcmp(placa, autos[i].numeroPlaca) == 0)
      {
        printf("Numero de placa:\n");
        scanf(" %[^\n]", autos[i].numeroPlaca);
        printf("Marca:\n");
        scanf(" %[^\n]", autos[i].marca);
        printf("Modelo:\n");
        scanf(" %[^\n]", autos[i].modelo);
        printf("Color:\n");
        scanf(" %[^\n]", autos[i].color);

        printf("\nNumero de placa: %s\n", autos[i].numeroPlaca);
        printf("Marca: %s\n", autos[i].marca);
        printf("Modelo: %s\n", autos[i].modelo);
        printf("Color: %s\n", autos[i].color);

        FILE *archivoV;
        archivoV = fopen ("vehiculos.txt","wt");

        for (i = 0; i < contadorA; i++) {
            printf("%d\n",i);
            fprintf(archivoV,"Numero de placa: %s\n",autos[i].numeroPlaca);
            fprintf(archivoV, "Marca: %s\n", autos[i].marca);
            fprintf(archivoV, "Modelo: %s\n", autos[i].modelo);
            fprintf(archivoV, "Color: %s\n", autos[i].color);
        }
        fclose (archivoV);
      }
    }
    return;
}
