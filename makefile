all:	systems07.o
	gcc -o program systems07.o

systems07.o:	systems07.c
	gcc -c systems07.c
