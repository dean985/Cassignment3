all: isort txtfind

txtfind: ex3/string_methods.o ex3/main2.o
	gcc ex3/string_methods.o ex3/main2.o -o txtfind

main2.o: ex3/main2.c ex3/string_methods.h
	gcc -Wall -c ex3/main2.c

string_methods.o: ex3/string_methods.c
	gcc -Wall -c ex3/string_methods.c
	
isort: ex3/main1.o ex3/isort.o
	gcc ex3/main1.o ex3/isort.o -o isort

main1.o: main1.c isort.h
	gcc -Wall -c ex3/main1.c
	
isort.o: isort.c
	gcc -Wall -c ex3/isort.c
	

.PHONY: all clean

clean:
		rm -f ex3/*.o 
		rm isort
		rm txtfind   
