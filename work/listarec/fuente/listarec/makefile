# %W%
COMPILADOR=gcc
FUENTE = procesaarchivo.c stub.c tipo_archivo.c
OBJS=$(FUENTE:.c=.o)
PROG= $(RUTA_BIN)listarrec

CC: $(OBJS)
	$(COMPILADOR) $(OBJS) -lm -o $(PROG)
	@- echo "Compilación terminada"

LIMPIA:
	@- rm -f $(OBJS)
	@- echo "Borrado de objetos terminado"

BORRA:
	@- rm -f $(OBJS) $(PROG)
	@- echo "Borrado de archivos terminado"

.c.o:
	$(COMPILADOR) -c -I$(RUTA_INCL) $*.c -o $*.o

$(OBJS): $(RUTA_INCL)listarrec.h $(RUTA_INCL)tipo_archivo.h