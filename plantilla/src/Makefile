CC     = gcc
IDIR   = ../include
CFLAGS = -I $(IDIR)

ODIR   = obj

LIBS   = -lm

_DEPS  = cabecera.h
DEPS   = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ   = main.o funcion.o
OBJ    = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

binario: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
