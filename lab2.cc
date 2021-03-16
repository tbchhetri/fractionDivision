#include <iostream>
#include "fraction.h"

using namespace std;

int main(){
   int32_t a,b,c,e;

  cout << " f1 " << endl;
  cin >> a >> b;

  cout << " f2 " << endl;
  cin >> c >> e;

  Fraction f1(a,b);
  Fraction f2(c,e);

cout << "Add      " << f1.operator+(f2) << endl;
cout << "Sub      " << f1.operator-(f2) << endl;
cout << "Multiply " << f1.operator*(f2) << endl;
cout << "Divide   " << f1.operator/(f2) << endl;


cout << "Equal                    " << f1.operator==(f2) << endl;
cout << "greater than             " << f1.operator<(f2) << endl;
cout << "Less than                " << f1.operator>(f2) << endl;
cout << "Greater than or equal to " << f1.operator<=(f2) << endl;
cout << "Less than or equal to    " << f1.operator>=(f2) << endl;
cout << "Not Equal                " << f1.operator!=(f2) << endl;

cout << "f2=f1    " << f1.operator=(f2) << endl;

 return 0;
 }
