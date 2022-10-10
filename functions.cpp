#include <iostream>
using namespace std;

//Functions in cpp support overloading

namespace functions {

	//Function declerations - the implementation can be defined later on in the code
	void swap_nums();
	int add_int(int, int);
	float sum_nums(float, float);
	double add_double(double, double);
	string concat_strings(string, string);
	char first_letter(string);

	void run() {
		cout << add_int(3, 4) << endl;
	}

	//void, this function dont have return value, and accept reference params
	void swap_nums(int& x, int& y) {
		int z = x;
		x = y;
		y = z;
	}

	//return value of int
	//this function have default values for n1 and n2
	int add_int(int n1 = 0, int n2 = 1) {
		return n1 + n2;
	}

	//float function that accepts an array
	float sum_nums(float nums[5]) {
		float count = 0;
		for (int i = 0; i < 5; i++) count += nums[i];
		return count;
	}

	//return value of double
	double add_double(double n1, double n2) {
		return n2 + n2;
	}

	//return value of string
	string concat_strings(string s1, string s2) {
		return s1 + s2;
	}

	//return value of char
	char first_letter(string str) {
		return str[0];
	}
}
