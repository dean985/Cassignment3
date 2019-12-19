all: isort txtfind

txtfind: string_methods.o main2.o
	gcc string_methods.o main2.o -o txtfind

main2.o: main2.c string_methods.h
	gcc -Wall -c main2.c

string_methods.o: string_methods.c
	gcc -Wall -c string_methods.c
	
isort: main1.o isort.o
	gcc main1.o isort.o -o isort

main1.o: main1.c isort.h
	gcc -Wall -c main1.c
	
isort.o: isort.c
	gcc -Wall -c isort.c
	

.PHONY: all clean

clean:
		rm -f *.o 
		rm isort
		rm txtfind   
