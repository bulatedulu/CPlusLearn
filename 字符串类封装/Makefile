main.exe:main.o String.o
	g++ -o main.exe main.o String.o
String.o:String.cpp String.h
	g++ -g -c String.cpp
main.o:main.cpp
	g++ -c main.cpp -o main.o
clean:
	del *.o *.exe *.gch