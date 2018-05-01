#include <iostream>
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
int main () {
	point a (5,2) ;
	a.printP () ;
	a.move (10,11) ;
	a.printP () ;
}
