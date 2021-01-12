#include "IntList.h"

int main () {
   IntList<int> mylist(2);    // create w/ capacity of 2
   IntList<char> yourlist;

   mylist.insert(6);
   mylist.insert(66);
   mylist.insert(65);
   mylist.display(cout);
   cout << endl << endl;

   cout << "Searching" << endl;
   if (mylist.isThere(6) )
	   cout << "found the 6 -- good " <<endl;
   else
	   cout << "problem -- 6 not found " << endl;

   if (mylist.isThere(15) )
	   cout << "found the 15 -- NOT good " <<endl;
   else
	   cout << "15  not found -- GOOd it's not there! " << endl;

   mylist.deleteItem(66);
   cout << "\n\n  List after deleting 66 \n" << endl;
   mylist.display(cout);
 

   mylist.deleteItem(65);
   cout << "\n\n  List after deleting 65 \n" << endl;
   mylist.display(cout);


   mylist.deleteItem(6);
   cout << "\n\n List after deleting 6 " << endl;
   mylist.display(cout);
   cout << endl;

  cout << "now with chars " << endl << endl << endl;
   yourlist.insert('a');
   yourlist.insert('F');
   yourlist.insert('M');
   yourlist.display(cout);
   cout << endl << endl;

   cout << "Searching" << endl;
   if (yourlist.isThere('F') )
	   cout << "found the F -- good " <<endl;
   else
	   cout << "problem -- F not found " << endl;

   if (yourlist.isThere('Z') )
	   cout << "found the Z -- NOT good " <<endl;
   else
	   cout << "Z  not found -- GOOd it's not there! " << endl;

   yourlist.deleteItem('a');
   cout << "\n\n  List after deleting 66 \n" << endl;
   yourlist.display(cout);
 

   yourlist.deleteItem('F');
   cout << "\n\n  List after deleting 65 \n" << endl;
   yourlist.display(cout);


   yourlist.deleteItem('M');
   cout << "\n\n List after deleting 6 " << endl;
   yourlist.display(cout);
   cout << endl;



}