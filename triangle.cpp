#include "figure2d.h"
#include "triangle.h"
#include <string>
#include <sstream>
#include <cmath>
#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::stringstream;

Triangle::Triangle(double a, double b, double c):a(a), b(b), c(c){
}
Triangle::~Triangle(){
	cout << "Destructor de Triangle" << endl;
}
string Triangle::toString()const{
	stringstream ss;
	ss << "Triangle";
	return ss.str();
}
double Triangle::area()const{
	double s = (a + b + c) / 2.0;
	return sqrt(s * (s - a) * (s - b) * (s - c));
}
double Triangle::perimeter()const{
	return a + b + c;
}
