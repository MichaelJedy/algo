sort: libsort.o main.o
	gcc libsort.o main.o -o main

libsort.o: libsort.c
	gcc -c libsort.c -o libsort.o

main.o: main.c
	gcc -c main.c -o main.o