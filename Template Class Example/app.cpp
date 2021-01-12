#include <iostream>
using namespace std;


template<class T>
T sum (T arr[], int size){
    T total =  0; 
	for (int index = 0; index < size ; index ++)
		total = total + arr[index];
    return total;
}



int main () {

  int value[5];
  double v2 [7];

  for (int i = 0; i< 5;  i++)
	  value[i] = -6;

   for (int i = 0; i< 7;  i++)
	  v2[i] = -6;

  cout << sum(value,5) << endl;
  cout << sum(v2,7) << endl;
 

}