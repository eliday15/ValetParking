#include "choferes.c"
void administrarChoferes(Chofer choferes[3], int *contadorC)
{
  int opcionChoferes;

  printf("Porfavor selecciona, la opcion deseada\n");
  printf("1. Reporte de choferes\n2. Agregar datos de chofer\n3. Modificar datos de los choferes\n4. Regresar al menu principal\n");
  scanf("%i", &opcionChoferes);

  switch (opcionChoferes) {
    case 1:
    {
      reporteVehiculos(choferes, *contadorC);
      break;
    }
    case 2:
    {
      agregarVehiculos(choferes, contadorC);
      printf("%d\n", *contadorC);
      break;
    }
    case 3:
    {
      modificarVehiculos(choferes, contadorC);
      break;
    }
    case 4:
    {
      return;
    }
  }

  return;
}

void administrarVehiculos(Auto autos[10], int *contadorA)
{
  printf("Hola\n");
  return;
}
void administrarEstacionamiento(Chofer choferes[3], Auto autos[10], int pisos[3][3])
{
  printf("Hola\n");
  return;
}
