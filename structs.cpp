#include <iostream>
using namespace std;

namespace structs {
	//definition and implementation of the the struct
	struct {
		int myNum;
		string myString;
	} myStruct;

	//definition of struct without implementation
	struct myStruct2 {
		int myNum;
		string myStr;
	};

	void run() {
		myStruct2 struct1;
		struct1.myNum = 5;
		struct1.myStr = "Hello, World!";
		int myArr[5] = { 1,2,3,4,5 };
		cout << struct1.myNum << endl;
	}
}
