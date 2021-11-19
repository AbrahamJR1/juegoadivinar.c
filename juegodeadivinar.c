/******************************************************************************
juego de adivinar
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int primerlugar();
int segundoLugar();
int tercerLugar();
int cuartoLugar();
int quintoLugar();

int main()
{
    char lugares[][30] = {"BIBLIOTECA","JARDIN","CAFETERIA","CANCHAS","CAJAS" };
    char nombre[20]; 

    int intentos_1,intentos_2,intentos_3,intentos_4,intentos_5;
    
    
    printf("Ingrese su nombre: \n");
    printf("\n----------------------------- \n");
    scanf("%s",nombre);
    printf("Bienvenido %s",nombre);
    printf("\n----------------------------- \n");
    
    intentos_1 = primerlugar();  
    intentos_2 = segundoLugar();
    intentos_3 = tercerLugar(); 
    intentos_4 = cuartoLugar(); 
    intentos_5 = quintoLugar();
    

    printf("\n----------------------------- \n");
    printf("\nEvaluación\n");
    printf("\n----------------------------- \n");
    printf("\nRespondiste...\n\nPregunta 1 en %i intentos\nPregunta 2 en %i intentos\nPregunta 3 en %i intentos\nPregunta 4 en %i intentos\nPregunta 5 en %i intentos\n",intentos_1,intentos_2,intentos_3,intentos_4,intentos_5);

    return 0;
}

int primerlugar() {

  int sel, intentos_1;

  intentos_1 = 0;

  printf("\nEl primer Lugar es: Biblioteca, eliga la opcion que quiera. Aquí comienza el juego ");
  printf("\n1- Periodicos \n2- Revistas \n3- Libros\n\n");
  printf("Opción: ");scanf("%i",&sel);

  if (sel == 3 ){
    printf("Opcion correcta!\n");
    intentos_1 = 1;
    printf("\nHas encontrado un  nuevo acertijo!\n");
  }

  while (sel!=3) {
    intentos_1 += 1;
    printf("Aqui no es.. Intenta de nuevo!\n");
    printf("\nOpción: ");scanf("%i",&sel);

    if (sel == 3 ){
    printf("\nOpcion correcta!\n");
    intentos_1 += 1;
    printf("\nHas encontrado un nuevo acertijo!\n");
    } 
  }

  return intentos_1;
  
}

int segundoLugar() {
  int sel, intentos_2;

  intentos_2 = 0;

  printf("\nEn este lugar todos apollan a su equipo favorito y gritan mucho!");
  printf("\n1- Biblioteca \n2- Jardin \n3- Cafeteria  \n4- Canchas \n5- Cajas \n6- Pista \n0- Salir\n\n");
  printf("Opción: ");scanf("%i",&sel);

  if (sel == 4 ){
    printf("Opcion correcta!\n");
    intentos_2 = 1;
    printf("\nHas encontrado un nuevo acertijo!\n");
  }

  else if (sel == 6){
    intentos_2 += 1;
    printf("La palabra empieza con 'C' y termina con 's'\n");
  }

  else if (sel == 0) {
    printf("Te rendiste!! :(\n");
  }

  while (sel!=4) {
    printf("Intenta de nuevo!\n");
    intentos_2 += 1;
    printf("\nOpción: ");scanf("%i",&sel);

    if (sel == 4 ){
        printf("Opcion correcta!\n");
        intentos_2 += 1;
        printf("\nHas encontrado un nuevo acertijo!\n");
      }

    else if (sel == 6){
        intentos_2 += 1;
        printf("La palabra empieza con 'C' y termina con 's'\n");
      }

    else if (sel == 0) {
        printf("Te rendiste!! :(\n");
        break;
      }
  }

  return intentos_2;
  
}

int tercerLugar() {
  int sel, intentos_3;

  intentos_3 = 0;

  printf("\nEn este lugar muchos van cuando tienen hambre!");
  printf("\n1- Biblioteca \n2- Jardin \n3- Cafetería  \n4- Canchas \n5- Cajas \n6- Pista \n0- Salir\n\n");
  printf("Opción: ");scanf("%i",&sel);

  if (sel == 3 ){
    printf("Opcion correcta!\n");
    intentos_3 = 1;
    printf("\nHas encontrado un nuevo acertijo!\n");
  }

  else if (sel == 6){
    intentos_3 += 1;
    printf("La palabra empieza con 'C' y termina con 'a'\n");
  }

  else if (sel == 0) {
    printf("Te rendiste!! :(\n");
  }

  while (sel!=3) {
    printf("Intenta de nuevo!\n");
    intentos_3 += 1;
    printf("\nOpción: ");scanf("%i",&sel);

    if (sel == 3){
        printf("Opcion correcta!\n");
        intentos_3 += 1;
        printf("\nHas encontrado un nuevo acertijo!\n");
      }

    else if (sel == 6){
        intentos_3 += 1;
        printf("La palabra empieza con 'C' y termina con 'a'\n");
      }

    else if (sel == 0) {
        printf("Te rendiste!! :(\n");
        break;
      }
  }

  return intentos_3;
  
}

int cuartoLugar() {
  int sel, intentos_4;
  intentos_4 = 0;

  printf("\nEn este sitio todos van a pagar sus asuntos escolares!");
  printf("\n1- Biblioteca \n2- Jardin \n3- Cafetería  \n4- Canchas \n5- Cajas \n6- Pista \n0- Salir\n\n");
  printf("Opción: ");scanf("%i",&sel);

  if (sel == 5 ){
    printf("Opcion correcta!\n");
    intentos_4 = 1;
    printf("\nHas encontrado un nuevo acertijo!\n");
  }

  else if (sel == 6){
    intentos_4 += 1;
    printf("La palabra empieza con 'C' y termina con 's'\n");
  }

  else if (sel == 0) {
    printf("Te rendiste!! :(\n");
  }

  while (sel!=5) {
    printf("Intenta de nuevo!\n");
    intentos_4 += 1;
    printf("\nOpción: ");scanf("%i",&sel);

    if (sel == 5){
        printf("Opcion correcta!\n");
        intentos_4 += 1;
        printf("\nHas encontrado un nuevo acertijo!\n");
      }

    else if (sel == 6){
        intentos_4 += 1;
        printf("La palabra empieza con 'C' y termina con 's'\n");
      }

    else if (sel == 0) {
        printf("Te rendiste!! :(\n");
        break;
      }
  }
  
  return intentos_4;
}

int quintoLugar() {
  int sel, intentos_5;

  intentos_5 = 0;

  printf("\nEs un lugar muy grande y verde con muchas plantas!");
  printf("\n1- Biblioteca \n2- Jardin \n3- Cafetería  \n4- Canchas \n5- Cajas \n6- Pista \n0- Salir\n\n");
  printf("Opción: ");scanf("%i",&sel);

  if (sel == 2 ){
    intentos_5 = 1;
    printf("Opcion correcta! Has terminado el juego! \n");
  }

  else if (sel == 6){
    intentos_5 += 1;
    printf("La palabra empieza con 'J' y termina con 'n'\n");
  }

  else if (sel == 0) {
    printf("Te rendiste!! :(\n");
  }

  while (sel!=2) {
    printf("Intenta de nuevo!\n");
    intentos_5 += 1;
    printf("\nOpción: ");scanf("%i",&sel);

    if (sel == 2){
        intentos_5 += 1;
        printf("Opcion correcta! Has terminado el juego! \n");
      }

    else if (sel == 6){
        intentos_5 += 1;
        printf("La palabra empieza con 'J' y termina con 'n'\n");
      }

    else if (sel == 0) {
        printf("Te rendiste!! :(\n");
        break;
      }
  }
  return intentos_5;

}




