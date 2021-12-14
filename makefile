ALL: main 

main: main.o Matrix.o
	g++ -std=c++11 -o main main.o Matrix.o
main.o: main.cpp 
	g++ -std=c++11 -c main.cpp
Matrix.o: Matrix.cpp Matrix.o 
	g++ -std=c++11 -c Matrix.cpp


