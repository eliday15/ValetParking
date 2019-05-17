#include "aEstacionamiento.c"

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

  (*contadorA)++;

  return;
}

void modificarVehiculos(Auto autos[10], int contadorA)
{
    int i;
    char placa[8];
    printf("Porfavor introduce el numero de placa para modificar los datos del vehiculos\n");
    scanf("%s", placa);

    for (i = 0; i < contadorA + 1; i++) {
      if (strcmp(placa, autos[i].numeroPlaca) == 0) {
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
      }
    }
    return;
}
