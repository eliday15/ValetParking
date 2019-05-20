#include "funciones.c"

/*
*@brief Simulador de valet parking
*@details Programa que administra un valet parking
*@file main.c
*
*@author Programador(es):
*   Elias Dayan
*@date Fecha de creación:
*   16 de mayo del 2019
*
*@author Último en modificar:
*   Elias Dayan
*@date Última modificación
*   19 de mayo del 2019
*
*/

/*
*@fn funcion principal de main
*/
int main(int argc, char const *argv[])
{
  Chofer choferes[3];
  Auto autos[10];
  int pisos[3][3];
  int contadorC = 0;
  int contadorA = 0;
  int opcion;
  mostrarInstrucciones("Elias Dayan", "Programa que simula el control de un valet parking");

  do {
    printf("Porfavor selecciona la opcion deseada\n");
    printf("1. Administrar choferes\n2. Administrar vehiculos\n3. Administar estacionamiento\n4. Salir\n");
    scanf("%i",&opcion);
    switch (opcion) {
      case 1:
        administrarChoferes(choferes, &contadorC);
        printf("%d\n",contadorC);
        break;
      case 2:
        administrarVehiculos(autos, &contadorA);
        break;
      case 3:
        administrarEstacionamiento(choferes, autos, pisos);
        break;
      case 4:
      return 0;
      default:
         printf("Escoge una opcion valida\n");
    }

  } while(opcion != 4);
}
