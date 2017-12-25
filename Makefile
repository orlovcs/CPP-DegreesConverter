CC=g++
CFLAGS= -c -std=c++14
degconvrt:  main.o
	$(CC) main.o -o degconvrt
main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp
