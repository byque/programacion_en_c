/*
Ejemplo de archivo de cabecera (header file)
include file .h
*/

#ifndef ESTRUCTURAS_H_
#define ESTRUCTURAS_H_

struct Libros {
  char titulo[50];
  char autor[50];
  char materia[100];
  int  id;
};

void imprimirLibro(struct Libros libro);
void miImpresion(void);

#endif
