main.exe:main.o MyArray.o
	g++ -o main.exe main.o MyArray.o
MyArray.o:MyArray.cpp MyArray.h
	g++ -g -c MyArray.cpp
main.o:main.cpp MyArray.o
	g++ -c main.cpp MyArray.o -o main.o
clean:
	del *.o *.exe *.gch