#include "square.h"
#include "rectangle.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Square::Square(double side): Rectangle(side, side){
	
}
Square::~Square(){
}
string Square::toString()const{
	stringstream ss;
	ss << "Square";
	return ss.str();
}
