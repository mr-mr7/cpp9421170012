#include <iostream>
using namespace std ;
class resistance {
	private :
		double R ;
	public :
		double I , V , P ;
		resistance (double r = 0) {
			this->R = r ;
		}
		void flow (double V) ;
		double voltage (double I) ;
		void loss () ;
};
void resistance::flow (double V) {
	I = V / R ;
}
double ::resistance::voltage (double I) {
	V = I * R ;
	return V ;
}
void resistance::loss (double I) {
	P = voltage(I) * R ;
}
