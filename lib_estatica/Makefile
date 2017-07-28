ej_lib: ej_lib.c ej_lib.h
	gcc -c ej_lib.c -o ej_lib.o
	ar rcs libej_lib.a ej_lib.o
	gcc -static main.c -L. -lej_lib -o link_estatico

.PHONY: clean

clean:
	rm -f *.o *~ core $(INCDIR)/*~
