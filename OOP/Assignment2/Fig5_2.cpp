#include <iostream>
using std::cout;
using std::endl;

// class Count definition
class Count {
public:
	// sets the value of private data member x 
	void setX(int value) {
		x = value;
	}

	//prints the value of private data member x
	void print() {
		cout << x << endl;
	}

private:
	int x;
};


int main() {
	Count counter; // create counter object
	Count *counterPtr = &counter; // create pointer to counter
	Count& counterRef = counter; // create reference to counter

	cout << "Set x to 1 and print using the object's name: ";
	counter.setX(1); // set data member x to 1
	counter.print(); // call member function print

	cout << "Set x to 2 and print using a reference to an object: ";
	counterRef.setX(2); // set data member x to 1
	counterRef.print();	// call member function print

	cout << "Set x to 3 and print using a pointer to an object: ";
	counterPtr->setX(3); // set data member x to 1
	counterPtr->print(); // call member function print
	return 0;
}