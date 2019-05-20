#include "choferes.c"

/*
*@fn Función que muestra las instrucciones del programa
*@param 2 variables de tipo char
*/
void mostrarInstrucciones (char autor[], char instrucciones[])
{
printf("Aplicación desarrollada por:\n");
printf("\t%s\n\n", autor);
printf("Descripción del programa:\n");
printf("\t%s\n\n", instrucciones);
printf("Presione ENTER para continuar...");
getchar();
system("clear");
}

/*
*@fn Menu de choferes
*@param arreglo de choferes y contador
*@var variable para elegir opcion
*/  
void administrarChoferes(Chofer choferes[3], int *contadorC)
{
  int opcionChoferes;

  do {
    printf("Porfavor selecciona, la opcion deseada\n");
    printf("1. Reporte de choferes\n2. Agregar datos de chofer\n3. Modificar datos de los choferes\n4. Regresar al menu principal\n");
    scanf("%i", &opcionChoferes);

    switch (opcionChoferes) {
      case 1:
        reporteChoferes(choferes, *contadorC);
        break;
      case 2:
        agregarChoferes(choferes, contadorC);
        break;
      case 3:
        modificarChoferes(choferes, *contadorC);
        break;
      case 4:
        return;
      default:
         printf("Escoge una opcion valida\n");
    }
  } while(opcionChoferes != 4);
  return;
}
/*
*@fn Menu de vehiculos
*@param arreglo de autos y contador
*@var vaiable para elegir opcion
*/
void administrarVehiculos(Auto autos[10], int *contadorA)
{
  int opcionVehiculos;

  do {
    printf("Porfavor selecciona, la opcion deseada\n");
    printf("1. Reporte de Vehiculos\n2. Agregar Vehiculo\n3. Modificar datos de los vehiculos\n4. Regresar al menu principal\n");
    scanf("%i", &opcionVehiculos);

    switch (opcionVehiculos) {
      case 1:
        reporteVehiculos(autos, *contadorA);
        break;
      case 2:
        agregarVehiculos(autos, contadorA);
        break;
      case 3:
        modificarVehiculos(autos, *contadorA);
        break;
      case 4:
        return;
      default:
       printf("Escoge una opcion valida\n");
    }
  } while(opcionVehiculos != 4);
  return;

}

/*
*@fn Menu del estacionamiento
*@param arreglo de choferes, autos y pisos
*@var variable para elegir opcion y 2 variables contadores
*/
void administrarEstacionamiento(Chofer choferes[3], Auto autos[10], int pisos[3][3])
{
  int opcionEstacionamiento;
  int i = 0;
  int j = 0;

  do {
     printf("Porfavor selecciona, la opcion deseada\n");
	   printf("1. Control de estacionamiento\n2. Reporte financiero\n3. Reporte de productividad\n4. Regresar al menu principal\n");
	   scanf("%i", &opcionEstacionamiento);

     switch (opcionEstacionamiento) {
       case 1:
         controlEstacionamiento(choferes, autos, pisos, &i, &j);
         break;
       case 2:
          reporteFinanciero(pisos);
          break;
       case 3:
         reporteProductividad(pisos);
         break;
       case 4:
         return;
       default:
       printf("Escoge una opcion valida\n");
     }
  } while(opcionEstacionamiento != 4);
  return;
}
/*
*@fn Menu para el control del estacionamiento
*@param arreglo de choferes, autos, pisos y 2 contadores
*@var variable para elegir opcion
*/
void controlEstacionamiento(Chofer choferes[3], Auto autos[10], int pisos[3][3], int *i, int *j)
{
  int opcionControl;

  do {
    printf("Porfavor selecciona, la opcion deseada\n");
    printf("1. Ingreso del vehículo\n2. Salida de vehiculo\n3. Reporte de espacios\n4. Regresar a adminstrar estacionamiento\n");
    scanf("%i", &opcionControl);

    switch (opcionControl) {
      case 1:
        ingresarVehiculo(choferes, autos, pisos,  i, j);
        break;
      case 2:
        salidaVehiculo(choferes, autos, pisos, i, j);
        break;
      case 3:
          reporteEspacios(autos, pisos, *i, *j);
          break;
      case 4:
        return;
      default:
        printf("Escoge una opcion valida\n");
      }
  } while(opcionControl != 4);
}
