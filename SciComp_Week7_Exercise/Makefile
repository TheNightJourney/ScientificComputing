
all: main.exe

main.exe: mylib.o
	gcc -o main.exe main.c mylib.o 

mylib.o: mylib/mylib.c
	gcc -o mylib.o -c mylib/mylib.c

clear:
	rm  *.exe
	rm  *.o

