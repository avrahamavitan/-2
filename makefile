


all:connections
connections: main.o my_mat.o
	gcc -Wall -g -o connections main.o my_mat.o -lm

main.o:my_mat.h
my_mat.o:my_mat.h
clean:
	rm -f *.a *.o *.so main