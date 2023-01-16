CC=gcc
CFLAGS=-I.
DEPS = funcKreis.h
OBJ = kreis.o kreisFunc.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

kreis: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f *.o *~ core 

