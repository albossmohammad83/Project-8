#include <iostream>
using namespace std;

template <class T>
class IntList {
public:
	 // creates empty IntList with initial capacity of 50
	IntList();
	
	// creates empty IntList with initial capacity of 'size'
	IntList(int size);

	// insert 'value' into the list
	// if the list is full, capacity doubles
	void insert(T value);

	// deletes first occurrance of 'value' from the list
	// precondition:  at least one occurrance of value is in the list
	void deleteItem(T value);


	// determines if 'value' is in the list
	bool isThere(T value) const;

	// for output of IntList object to an ostream
	void display(ostream& out);

	private:
	T *storage;          //storage for int values
	int howmany;           //number of int values currently stored
	int capacity;          //current capacity of list

};

template <class T>
IntList<T>::IntList(){
		storage = new T [50];
	    howmany = 0;
		capacity = 50;
	}

template <class T>
	IntList<T>::IntList(int size){
		storage = new T [size];
	    howmany = 0;
		capacity = size;
	}

	template <class T>
	void  IntList<T>::insert(T value){
		if (howmany == capacity){               // it's full
            T *temp = new T[capacity * 2];  //create larger array
			for (int index = 0; index < howmany; index++)
				temp[index] = storage[index];   //copy date from old array
			delete [] storage;                  //deallocate old array
			storage = temp;                     //storage is now new array
			capacity = capacity * 2;            //updajte capacity
		}
		storage[howmany++] = value;
	}
	
	template <class T>
	void  IntList<T>::deleteItem(T value) {
	
         int index = 0;
		 while (storage[index] != value)
			  index++;

		 for (int pos = index+1;  pos <= howmany-1; pos ++)
			 storage[pos-1] = storage[pos];

		  howmany--;
	}

	template <class T>
	bool  IntList<T>::isThere(T value) const{
	    int index = 0;

		while (index < howmany && storage[index] != value)
			  index++;

		return (index < howmany);
	}


	template <class T>
	void IntList<T>::display(ostream& out){
        out << "[";
		for (int i = 0; i<howmany; i++)
			out << " " << storage[i];
		out << " ]" << "      Capacity:" << capacity;
	}

	
