CC = gcc
CFLAGS = -Wall -g
OBJS = main.o datos.o calculos.o
ASM = main.s datos.s calculos.s
DATA_FILE = user.txt

all: programa_tarea1

programa_tarea1: $(OBJS)
	$(CC) -o programa_tarea1 $(OBJS) -lm

main.o: main.c utils.h
	$(CC) $(CFLAGS) -c main.c

datos.o: datos.c utils.h
	$(CC) $(CFLAGS) -c datos.c

calculos.o: calculos.c utils.h
	$(CC) $(CFLAGS) -c calculos.c

# Generar archivos de ensamblador
%.s: %.c
	$(CC) -S $(CFLAGS) $< -o $@

clean:
	rm -f *.o *.s programa_tarea1
