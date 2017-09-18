CC     = gcc
IDIR   =
CFLAGS = 

ODIR   = obj

LIBS   =

_DEPS  =
DEPS   = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ   = main.o
OBJ    = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

binario: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
