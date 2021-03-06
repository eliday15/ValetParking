#include "vehiculos.c"

/*
*@fn Función que se encarga de decirte los choferes registrados
*@param arreglo de choferes y el contador
*@var variable contador i
*/
void reporteChoferes(Chofer choferes[3], int contadorC) {

  int i;
  if(contadorC!=0){
    for (i = 0; i < contadorC; i++)
    {
      printf("\n");
      printf("Numero de identificacion: %d\n", choferes[i].numeroId);
      printf("Nombre: %s\n", choferes[i].nombre);
      printf("Apellido Paterno: %s\n", choferes[i].apellidoP);
      printf("Apellido Materno: %s\n", choferes[i].apellidoM);
      printf("Estatus: %d\n", choferes[i].estatus);
    }
  }
  else
    printf("No hay choferes registrados\n");
  return;
}
/*
*@fn Función para agregar nuevos choferes
*@param arreglo de choferes y contador
*@var archivo
*/
void agregarChoferes(Chofer choferes[3], int *contadorC)
{
  printf("Para añadir los datos del chofer %d porfavor ingresa los siguientes datos.\n", *contadorC + 1);

  choferes[*contadorC].numeroId = *contadorC + 1;
  printf("Nombre:\n");
  scanf(" %[^\n]",choferes[*contadorC].nombre);
  printf("Apellido Paterno:\n");
  scanf(" %[^\n]",choferes[*contadorC].apellidoP);
  printf("Apellido Materno:\n");
  scanf(" %[^\n]", choferes[*contadorC].apellidoM);
  printf("Estatus:\n1. Activo\n2. Descanso\n3. Baja\n4. Incapacidad\n");
  scanf("%d",&choferes[*contadorC].estatus);

  printf("\n");
  printf("Numero de identificacion: %d\n", choferes[*contadorC].numeroId);
  printf("Nombre: %s\n", choferes[*contadorC].nombre);
  printf("Apellido Paterno: %s\n", choferes[*contadorC].apellidoP);
  printf("Apellido Materno: %s\n", choferes[*contadorC].apellidoM);
  printf("Estatus: %d\n", choferes[*contadorC].estatus);


  (*contadorC)++;

  return;
}

/*
*@fn Función para modificar datos del chofer
*@param arreglo de choferes y el contador
*@var variable para elegir opción y un contador
*/
void modificarChoferes(Chofer choferes[3], int contadorC)
{
  int opcion;
  printf("Porfavor ingresa el numero de chofer que se desea modificar\n");
  scanf("%d", &opcion);
  opcion--;

  if (opcion < contadorC && opcion >= 0) {
    choferes[opcion].numeroId = opcion + 1;
    printf("Nombre:\n");
    scanf(" %[^\n]",choferes[opcion].nombre);
    printf("Apellido Paterno:\n");
    scanf(" %[^\n]",choferes[opcion].apellidoP);
    printf("Apellido Materno:\n");
    scanf(" %[^\n]", choferes[opcion].apellidoM);
    printf("Estatus:\n1. Activo\n2. Descanso\n3. Baja\n4. Incapacidad\n");
    scanf("%d",&choferes[opcion].estatus);

    printf("\n");
    printf("Numero de identificacion: %d\n", choferes[opcion].numeroId);
    printf("Nombre: %s\n", choferes[opcion].nombre);
    printf("Apellido Paterno: %s\n", choferes[opcion].apellidoP);
    printf("Apellido Materno: %s\n", choferes[opcion].apellidoM);
    printf("Estatus: %d\n", choferes[opcion].estatus);

    return;
  }
  else
  {
    printf("Porfavor escoja una opción valida\n");
    modificarChoferes(choferes, contadorC);
  }

}
