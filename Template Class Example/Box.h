#include <iostream>
using namespace std;


class Box {
private:
	int side;

public:
	Box(){};
	Box(int s) ;
    bool operator>(const Box& xx);
	friend ostream& operator<<(ostream& out, const Box& xx);


};