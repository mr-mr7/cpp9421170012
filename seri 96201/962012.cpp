/* area of triangle & enviroment of triangle have problem */

#include <iostream>
#include <cmath>
using namespace std ;
class point {
	public :
		int x , y ;
		point (int x = 0 , int y = 0) {
			this->x = x ; 
			this->y = y ;
		}
		void move (int , int ) ;
		void printP () ;
};
void point:: move (int x , int y ) {
	this->x = x ;
	this->y = y ;
}
void point:: printP () {
	cout << "(  " << x << "  ,  " << y << "  )\n" ;
}
//---------- Start Rectangular ---------
class rectangular {
	public :
		point a , b , c , d ;
		double environment () ;
		double area () ;
		rectangular (point a , point b , point c , point d) {
			this->a = a ;
			this->b = b ;
			this->c = c ;
			this->d = d ;
		}
};
double rectangular:: environment () {
	return 2 * ((b.x - a.x) + (c.y - b.y)) ;
}
double rectangular:: area () {
	return (b.x - a.x) * (c.y - b.y) ;
}
//---------- End Rectangular ---------

//---------- Start Triangle ---------
class Triangle {
	public :
		point a , b , c ;
		double environment () ;
		double area () ;
		Triangle (point a , point b , point c) {
			this->a = a ;
			this->b = b ;
			this->c = c ;
		}
};
double Triangle:: environment () {
	int A , B , C ;
	A = sqrt ((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y)) ;
	B = sqrt ((c.x - a.x) * (c.x - a.x) + (c.y - a.y) * (c.y - a.y)) ;
	C = sqrt ((c.x - b.x) * (c.x - b.x) + (c.y - b.y) * (c.y - b.y)) ;
	return A + B + C ;
}
double Triangle:: area () {
	int A , B , C ;
	double p ;
	A = sqrt ((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y)) ;
	B = sqrt ((c.x - a.x) * (c.x - a.x) + (c.y - a.y) * (c.y - a.y)) ;
	C = sqrt ((c.x - b.x) * (c.x - b.x) + (c.y - b.y) * (c.y - b.y)) ;
	p = A + B + C ;
	return sqrt (p * (p - A) * (p - B) * (p - C)) ;
}
//---------- End Triangle ---------

//---------- Start Circle ---------
class Circle {
	public :
		point a ;
		int r ;
		double environment () ;
		double area () ;
		Circle (point a = 0 , int r = 0) {
			this->a = a ;
			this->r = r ;
		}
};
double Circle:: environment () {
	return 2 * 3.14 * r ;
}
double Circle:: area () {
	return 3.14 * r * r ;
}
//---------- End Circle ---------
