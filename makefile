


all:main
connections:main
main: main.o my_mat.o
	gcc -Wall -g -o main main.o my_mat.o -lm

main.o:my_mat.h
my_mat.o:my_mat.h
clean:
	rm -f *.a *.o *.so main