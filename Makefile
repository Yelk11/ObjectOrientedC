CC=gcc
CFLAGS=-I.
DEPS = New.h Object.h Set.h
OBJ = Bag.o main.o Set.o  

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

hellomake: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)