#include <stdio.h>

int main(int argc, char *argv[]) {

  /* argv[0] almacena el nombre del mismo programa y argv[1] es un puntero al *
   * primer argumento provisto por la línea de comandos, siendo *argv[n] el   *
   * último argumento. Si no se provee de argumentos, argc será 1.            */

  printf("Nombre del programa %s\n", argv[0]);

  if(argc == 2){
    printf("El argumento provisto es %s\n", argv[1]);
  }
  else if(argc > 2){
    printf("Demasiados argumentos provistos!\n");
  }
  else{
    printf("Un argumento esperado\n");
  }

  return(0);
}
