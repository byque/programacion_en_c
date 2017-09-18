#include <stdio.h>
#include <cabecera.h>

void miImpresion(void) {

  int var1 = 5;
  char var2[10];

  printf("Dirección de la variable 1: %X\n", &var1);
  printf("Dirección de la variable 2: %X\n", &var2);

  int *ptr = NULL;  // Buena práctica
  printf("El valor del puntero NULL es: %X\n", ptr);
  // Revisar un puntero nulo
  // if(!ptr)  // Válido si ptr es nulo

  int *pe;     // Declaración de un puntero para enteros
  pe = &var1;  // Almacenar la dirección de var en el puntero

  printf("Dirección almacenada en el puntero: %X\n", pe);
  printf("Valor de la variable *pe: %d\n", *pe);

  return;
}
