#include "Box.h"

Box::Box(int s) {
	 side = s;
}

bool Box::operator>(const Box& xx){
   return ( side > xx.side);
}


ostream& operator<<(ostream& out, const Box& xx){
     out << "Side is " << xx.side;
	 return out;
}