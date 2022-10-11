#include <iostream>

using namespace std;
//Whats between referece and pointer?
//Reference - is a variable that is a "reference" to another variable's value
//Pointer - is a variable that stores the memory address as its value. 
namespace references_pointers {
	void run() {
		string food = "pizza";
		string& food_ref = food;
		string* food_ptr = &food;
		cout << "The original value: " << food_ref << endl;
		cout << "The reference value: " << food << endl;
		cout << "The pointer: " << food_ptr << endl;
		*food_ptr = "Haburger";
		cout << "The modified value: " << food << endl;
	}
}

