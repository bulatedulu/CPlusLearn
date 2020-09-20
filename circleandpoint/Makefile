CircleAndPoint.exe:Circle.o Point.o main.o
	g++ -o main.exe Circle.o Point.o main.o
Circle.o:Circle.cpp Circle.h Point.h
	g++ -g -c Circle.cpp
Point.o:Point.cpp Point.h
	g++ -g -c Point.cpp
main.o:main.cpp
	g++ -g -c main.cpp
clean:
	del *.o *.exe