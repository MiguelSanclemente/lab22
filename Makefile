CC=g++
Files=*.cpp


compile:
	$(CC) $(Files) -o main

run: 
	./main
all: compile run
