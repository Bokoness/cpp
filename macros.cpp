#include <iostream>
using namespace std;

#define PI 3.14 //this is macro const
#define CIRC(d) (PI*d) // this is a macro function

namespace macros {

	void run() {
		int diameter;
		float circumference;
		cout << "Please enter the diameter" << endl;
		cin >> diameter;
		circumference = CIRC(diameter); //using the marco
		cout << "The radius is: " << circumference << endl;
	}
}

