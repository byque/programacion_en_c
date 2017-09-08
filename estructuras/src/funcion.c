#include <stdio.h>
#include <string.h>
#include <cabecera.h>

// Estructuras como Argumentos de función
void imprimirLibro(struct Libros libro) {
  printf("Título  : %s\n", libro.titulo);
  printf("Autor   : %s\n", libro.autor);
  printf("Materia : %s\n", libro.materia);
  printf("id      : %d\n\n", libro.id);
}

// Punteros a Estructuras
void imprimirLibroPunteros(struct Libros *libro) {
  printf("Autor  : %s\n", libro->autor);
}

void miImpresion(void) {
  struct Libros Libro1;  // Declarar Libro1 de tipo Libro
  struct Libros Libro2;  // Declarar Libro2 de tipo Libro
  struct Libros Libro3;  // Declarar Libro3 de tipo Libro


  // Especificación del Libro1
  strcpy(Libro1.titulo,  "Programación en C");
  strcpy(Libro1.autor,   "Nuha Ali");
  strcpy(Libro1.materia, "Programación");
  Libro1.id = 6495407;

  // Especificación del Libro2
  strcpy(Libro2.titulo,  "Organización y Diseño de Computadoras");
  strcpy(Libro2.autor,   "Patterson");
  strcpy(Libro2.materia, "Arquitectura de Computadoras");
  Libro2.id = 6495700;

  // Especificación del Libro3
  strcpy(Libro3.titulo,  "Sistemas Digitales");
  strcpy(Libro3.autor,   "Tocci");
  strcpy(Libro3.materia, "Electrónica");
  Libro3.id = 6495978;

  // Imprimir información Libro1
  printf("Libro 1\n");
  printf("Título  : %s\n\n", Libro1.titulo);

  // Imprimir información Libro2
  printf("Libro 2\n");
  imprimirLibro(Libro2);

  // Imprimir información Libro3
  printf("Libro 3\n");
  imprimirLibroPunteros(&Libro3);
}
