#include <iostream>
#include <cstdint>

#ifndef _FRACTION_H // if not defined

#define _FRACTION_H

class Fraction {

  public:
	Fraction(int32_t n=0, int32_t d=1); //this is a constructor| if no values to n and 						d these default vals get put in(page4)
	~Fraction(void);//destructor| is called when the obj dies, here it 				does nothing but it must exist

	Fraction operator+(Fraction rhs);
	Fraction operator-(Fraction rhs);
	Fraction operator*(Fraction rhs);
	Fraction operator/(Fraction rhs);
	Fraction operator=(Fraction rhs);
	
	bool operator == (Fraction rhs);
	bool operator != (Fraction rhs);
	bool operator <= (Fraction rhs);
	bool operator >= (Fraction rhs);
	bool operator < (Fraction rhs);
	bool operator > (Fraction rhs);

	int32_t getNum() { return num; }  // getter for numerator
	int32_t getDen() { return den; }

  private:
	int32_t num, den;

};

std::istream &operator>>(std::istream &,Fraction &); //pass by ref, 1. if you wanna change value of 							     a function,2. if you want more return,3. tansfering large data
std::ostream &operator<<(std::ostream &,Fraction);

#endif
