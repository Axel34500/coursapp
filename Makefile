
all: test
	

main.o: main.c
	gcc -c main.c

point.o: point.c
	gcc -c point.c

test: main.o point.o
	gcc -o test main.o point.o

clean: 
	rm test
	rm *.o

