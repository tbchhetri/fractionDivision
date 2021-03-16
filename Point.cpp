//
//  Point.cpp
//  Data_Structure
//

#include <numeric>  //for gcd
#include "Point.h"

Point Point::operator+(Point rhs){
    Fraction s,t;
    
    s = x + rhs.x;
    t = y + rhs.y;
    return Point(s,t);
}

Point Point::operator-(Point rhs){
    Fraction s, t;
    s = x - rhs.x;
    t = y - rhs.y;
    return Point(s,t);
}

Fraction Point::operator*(Point rhs){
    return x*rhs.y - y*rhs.x;
}

Point Point::operator*(Fraction rhs){
    Fraction s, t;
    s = x*rhs;
    t = y*rhs;
    return Point (s,t);
}

bool Point::operator==(Point rhs){
    return x == rhs.x && y == rhs.y;
}

bool Point::operator!=(Point rhs){
    return x != rhs.x || y != rhs.y;
}

std::istream &operator>>(std::istream &is, Point &p){
    Fraction x,y;
    char Lp, comma, rP;
    is>>Lp>>x>>comma>>y>>rP;
    p = Point(x,y);
    return is;
}

std::ostream &operator<<(std::ostream &os, Point p){
    os<<p.getX()<<","<<p.getY();
    return os;
}
