#include "ellipse.h"
#include "figure2d.h"
#include <string>
#include <sstream>
#include <cmath>
using std::string;
using std::stringstream;

Ellipse::Ellipse(double r1, double r2):r1(r1), r2(r2){}
Ellipse::~Ellipse(){}
string Ellipse::toString()const{
	stringstream ss;
	ss << "Ellipse";
	returns ss.str();
}
double Ellipse::area()const{
	return 3.14159265359 * r1 * r2;
}
double Ellipse::perimeter()const{
	double h = pow(a - b, 2) / pow(a + b, 2);
	return 3.14159265359 * (a + b) * (1 + ( 3*h / (10 + sqrt(4-3*h))));
}
