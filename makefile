all: isort txtfind

txtfind: txt_find/string_methods.o txt_find/main.o
	gcc txt_find/string_methods.o txt_find/main.o -o txt_find/txtfind

txt_find/main.o: txt_find/main.c txt_find/string_methods.h
	gcc -Wall -c txt_find/main.c
	mv main.o txt_find/

txt_find/string_methods.o: txt_find/string_methods.c
	gcc -Wall -c txt_find/string_methods.c
	mv string_methods.o txt_find/


isort: insertionSort/main.o insertionSort/isort.o
	gcc insertionSort/main.o insertionSort/isort.o -o insertionSort/isort

insertionSort/main.o: insertionSort/main.c insertionSort/isort.h
	gcc -Wall -c insertionSort/main.c
	mv main.o insertionSort/

insertionSort/isort.o: insertionSort/isort.c
	gcc -Wall -c insertionSort/isort.c
	mv isort.o insertionSort/




.PHONY: all clean

clean:
		rm -f insertionSort/*.o  
		rm -f  txtfind/*.o  
