#include "square.h"
#include "rectangle.h"
#include <string>
#include <sstream>
#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::stringstream;

Square::Square(double side): Rectangle(side, side){
	
}
Square::~Square(){
	cout << "Destructor de Square" << endl;
}
string Square::toString()const{
	stringstream ss;
	ss << "Square";
	return ss.str();
}
