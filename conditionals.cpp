#include <iostream>
using namespace std;

namespace conditionals {

	void simple_if() {
		int age;
		cout << "Hello, What is your age? " << endl;
		cin >> age;
		cout << "Your age is " << age << endl;
		if (age < 18) {
			cout << "You cannot have a beer, too young!";
		}
		else if (age == 18) {
			cout << "This is the first year you can buy beer!";
		}
		else {
			cout << "You can buy beer";
		}
	}

	void using_switch() {
		int num;
		cout << "Please choose a number between 1-3" << endl;
		cin >> num;
		switch (num)
		{
		case 1:
			cout << "You chose number 1" << endl;
			break;

		case 2:
			cout << "You chose number 2" << endl;
			break;

		case 3:
			cout << "You chose number 3" << endl;
			break;

		default:
			cout << "Your choice is invalid" << endl;
		}
	}

	void run() {
		using_switch();
	}
}

