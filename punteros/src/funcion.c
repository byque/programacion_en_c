#include <stdio.h>
#include <cabecera.h>

void miImpresion(void) {

  int *ptr = NULL;  // Buena práctica
  printf("El valor del puntero NULL es: %X\n", ptr);
  // Revisar un puntero nulo
  // if(!ptr)  // Válido si ptr es nulo

  int var1 = 5;

  printf("Dirección de la variable 1: %X\n", &var1);

  int *pe;     // Declaración de un puntero para enteros
  pe = &var1;  // Almacenar la dirección de var en el puntero

  printf("Dirección almacenada en el puntero: %X\n", pe);
  printf("Valor de la variable *pe: %d\n", *pe);

  /* ------------------------- Puntero a un arreglo ------------------------- */
  double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};

  printf("Dirección de la variable 2: %X\n", &balance);

  double *p;
  p = balance;

  // Imprimir cada valor de los elementos del arreglo
  printf("Valores del arreglo usando puntero\n");

  int i;
  for(i = 0; i < 5; i++){
    printf("*(p+%d): %f\n", i, *(p+i));
  }

  printf("Valores del arreglo usando balance como dirección\n");
  for(i = 0; i < 5; i++){
    printf("*(balance+%d): %f\n", i, *(balance+i));
  }

  printf("Valores del arreglo usando la forma convencional\n");
  for(i = 0; i < 5; i++){
    printf("balance[%d]: %f\n", i, balance[i]);
  }

  return;
}
