
#include "Box.h"
#include "trip.h"

int main () {

   Box aa(5);
   Box bb(77);
   Box dd (15);
   Triplet<Box> zz(aa,bb,dd);
   cout << "largestBoxis" << zz.larger() << endl;
   cout << zz  << endl << endl;
	
    Triplet<char>  yy('A', 'B', 'Z');
    cout << "largest char is " << yy.larger() << endl;
	cout << yy << endl << endl;



   int a = 5;
   int b = 6;
   int d = 9;
   Triplet<int> xx(a,b,d);
   cout << "largest int is " << xx.larger() << endl;
   cout << xx << endl << endl;

   double xa = 5.55;
   double xb = 6.77;
   double xd = 9.77;
   Triplet<double> xxx(xa,xb,xd);
   cout << "largest double is " << xxx.larger() << endl;
   cout << xxx << endl << endl;

   Triplet<double> xxxx(xb,xa,xd);
   cout << "largest double is" << xxxx.larger() << endl;
   if (xxx == xxxx)
	   cout << " the two double triplets are equal "  << endl;
   else
	   cout << "the two double triplets are not equal " << endl;



}