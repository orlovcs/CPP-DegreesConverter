CC=g++
CFLAGS= -c -std=c++14

degconnvert:  main.o
$(CC) main.o -o degconnvert
main.o: main.cpp
$(CC) $(CFLAGS) main.cpp
