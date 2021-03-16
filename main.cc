#include <iostream>
#include "Point.h"

using namespace std;

int main (){
	int Q;	 
	bool good;
	Point p1, p2;
	Fraction ymax = 0;

	cout << " The number of vertices of the Polygon " << endl; 
	cin >> Q;
	Point Polygon [Q]; 

	cout << " Input the vetices of the Polygon in counterclockwise direction"
		<< endl;
		for ( int i = 0; i < Q; i++){
			cin >> Polygon[i];
		
		if (Polygon[i].getY()>ymax){
		ymax = Polygon[i].getY();
	}	 ymax = ymax+1;
}

	cout << " Input the test point " << endl;
	cin >> p1 ;

	Fraction x = 0;
	do
	{ x = x + 1;
	  p2 =Point(x, ymax);
	  good = true;
	  for (int i = 0; i == (Q - 1); i++){
		if ((Polygon[i] - p1) * (p2 - p1) == 0) { //cross product 0: two line segments've angle 0
			good = false;
		}
	}}while (good = false);
	
	
//intersect
	Point r,s,v;
	Fraction d,t,u;
	int c,count=0;
	bool test,xcredit;

     for ( int i = 0; i < Q; i++){
	
	r = p2 - p1;	
	s = Polygon[(i+1)%Q]-Polygon[i];

	v = Polygon[i]-p1;
	d = r*s;

	if(d == 0)
		test = false;
		
	else 
		{t = ((v*s)/d);
		u = ((v*r)/d);

		if (((t>=0) && (t<=1)) && ((u>=0) && (u<=1)))
			test = true;
		else 
			test=false;
		
		if (((t==0)) && ((u>=0) && (u<=1)))
			xcredit = true;		
		
			
	}
	if (test) 
		count++;
	
	}

  c = count % 2;
	if ( c == 1)
		cout << " Point is inside the polygon " << endl;
	else if ( xcredit)
		cout << " Point is on the edge " << endl;
	else
		cout << " Point is outside the polygon " << endl;
		
return 0;
}




















