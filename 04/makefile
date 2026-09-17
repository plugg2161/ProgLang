all: main.exe
main.exe: message.o hello.o goodbye.o main.o
	g++ message.o hello.o goodbye.o main.o -o main.exe
message.o : message.cpp message.h
	g++ -c -std=c++11 -o message.o message.cpp
hello.o : hello.cpp hello.h
	g++ -c -std=c++11 -o hello.o hello.cpp
goodbye.o : goodbye.cpp goodbye.h
	g++ -c -std=c++11 -o goodbye.o goodbye.cpp
main.o : main.cpp main.h- goodbye.h message.h
	g++ -c -std=c++11 -o main.o main.cpp