



#include <iostream>
using namespace std;


template <class T>
class Triplet{

private:
	T val1;
	T val2;
	T val3;

public:
	Triplet(T v1, T v2, T v3);

	T larger();

	void xxx();

	bool operator== (const Triplet<T>& obj) const;

	friend ostream& operator<<  <T>(ostream& out, const Triplet<T>& trip);
	
};

template <class T>
Triplet<T>::Triplet(T v1, T v2, T v3){
		  val1 = v1;
		  val2 = v2;
		  val3 = v3;
}


template <class T>
T Triplet<T>::larger(){
		T lg = val2;
		if (val1 > val2)
			lg = val1;
	    if(val3 > lg)
			lg = val3;

		return lg;
	
}

template <class T>
void Triplet<T>::xxx() {
  asdf;           // note that the project build ... this  function is not called so it is not compiled!!!

}


template <class T>
bool Triplet<T>:: operator== (const Triplet<T>& obj) const{
  return (val1 == obj.val1 && val2 == obj.val2 && val3 == obj.val3);
}


template<class X>
ostream& operator<< (ostream& out, const Triplet<X>& trip){
   out << trip.val1 << " " << trip.val2 << " " << trip.val3 ;
   return out;
}


