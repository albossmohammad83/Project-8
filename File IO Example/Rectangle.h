#include <iostream>
using namespace std;

class Rectangle{
public:
	Rectangle();
	Rectangle(int ht, int wid);
	friend istream& operator>>(istream& inobj,Rectangle& myrec);
	friend ostream& operator<<(ostream& outobj, const Rectangle& myrec);
private:
	int height;
	int width;

};	