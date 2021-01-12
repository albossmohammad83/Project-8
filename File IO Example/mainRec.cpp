#include <fstream>
#include <string>
#include <iostream>
using namespace std;
#include "Rectangle.h"

int main () {
    ifstream in;
	ofstream out;
	string fileName;

	cout << "what is the name of the input file ? ";
	cin >> fileName;
                     //open files
	in.open(fileName.c_str());
	out.open("myfile4.txt");

	                 // create Rectangles
	Rectangle rec1;
	Rectangle rec2;
	Rectangle rec3;
                 
	    // read information in from file
	    // input file contains height and width for 3 rectangles
	in >> rec1;
	in >> rec2;
	in >> rec3;

	       // output rectangle info to screen
	cout << rec1 << " " << rec2 << " " << rec3 << endl;

	      // output rectangle info to output file
	out << rec1 << endl;
	out << rec2 << endl;
	out << rec3 << endl;

	in.close();
	out.close();


}