// The Point class
// it inputs and outputs a point as fraction objects

#include <iostream>
#include <cstdint>
#include "fraction.h"

#ifndef _Point_H
#define _Point_H

class Point {
public:
    Point(Fraction X = Fraction(0),Fraction Y = Fraction(0)){
	x=X;
	y=Y;
	}
    ~Point(void){}
    
    Point operator+(Point rhs);
    Point operator-(Point rhs);    //what exactly does rhs do
    Point operator*(Fraction rhs); //how are we taking the cross product
    Fraction operator*(Point rhs);
    
    bool operator==(Point rhs);
    bool operator!=(Point rhs);
    
    Fraction getX() {return x;}
    Fraction getY() {return y;}
    
private:
    Fraction x,y;
};

std::istream &operator>>(std::istream &,Point &); //what is the syntax of this pass by ref, how is it working
std::ostream &operator<<(std::ostream &,Point);

#endif
