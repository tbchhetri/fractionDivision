Point: Point.o main.o Fraction.o
	g++ -o Point main.o Fraction.o Point.o

main.o: main.cc Point.h fraction.h
	g++ -c main.cc

Point.o: Point.cc Point.h fraction.h
	g++ -c Point.cc

Fraction.o: Fraction.cc Point.h fraction.h
	g++ -c Fraction.cc
