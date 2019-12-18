all: isort 

isort: insertionSort/main.o insertionSort/isort.o
	gcc insertionSort/main.o insertionSort/isort.o -o isort

insertionSort/main.o: insertionSort/main.c insertionSort/isort.h
	gcc -Wall -c insertionSort/main.c
	mv main.o insertionSort/

insertionSort/isort.o: insertionSort/isort.c
	gcc -Wall -c insertionSort/isort.c
	mv isort.o insertionSort/




.PHONY: all clean

clean:
		rm -f insertionSort/*.o  isort 
