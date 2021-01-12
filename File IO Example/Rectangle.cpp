#include "Rectangle.h"


Rectangle::Rectangle(){
	height = 1;
	width = 1;
}
Rectangle::Rectangle(int ht, int wt){
	height = ht;
	width = wt;
}

istream& operator>>(istream& in,  Rectangle& myrec){
    in >> myrec.height;
    in >> myrec.width;
	return in;
}

ostream& operator<<(ostream& out, const Rectangle& myrec){
	out << myrec.height;
	out << myrec.width;
	return out;

}
	