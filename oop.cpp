#include <iostream>
using namespace std;

namespace oop {
	class Vehicle {
	public:
		string type;
		int costs;
		void printMe() {
			cout << "type: " << type << " costs: " << costs << endl;
		}
	};

	class Car : public oop::Vehicle {//Car class that inherit from Vehicle
	public:          // Access specifier
		string brand;  // Attribute
		string model;  // Attribute
		int year;      // Attribute
		Car(string b, string m, int y, int c) { // Constructor with parameters
			brand = b;
			model = m;
			year = y;
			type = "Land vehicle";
			costs = c;
		}

		void printMe() { //this method overrides that parent method
			cout << "type: " << type << " costs: " << costs << " brand " << brand << " model: " << model << " year: " << year << " type: " << type << endl;
		}
	};

	void run() {
		Car c1("Honda", "Civic", 2004, 125000);
		Car c2("Toyota", "Verso", 2011, 150000);
		c1.printMe();
	}
}
