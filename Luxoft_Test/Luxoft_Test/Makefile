all: Luxoft_Test

Luxoft_Test: Application.o Processor.o File.o Factory.o
	g++ Application.o Processor.o File.o Factory.o -o Luxoft_Test
	
Application.o:
	g++ -c Application.cpp
	
Processor.o:
	g++ -c Processor.cpp
	
File.o:
	g++ -c File.cpp
	
Factory.o:
	g++ -c Factory.cpp
	
clean:
	rm -rf *.o Luxoft_Test