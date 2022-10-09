#include <iostream>
using namespace std;

namespace arrays {
	void run() {
		//first way to create array
		//<datatype> <array name>[size] = {<values>}
		int arr[5] = { 1,2,3,4,5 };

		//second way to create array
		//<datatype> <array name>[] = {<values>}
		//now, the compiler will fill the array size by its assigned values
		int arr2[] = { 1,2,3,4,5,6,7,8,9,10 };

		//using indexed to fetch values
		int val = arr[0]; //1

		//third way init array without value
		const int ARR_LEN = 5;
		int arr3[ARR_LEN];
		int sum;

		cout << "Please enter the array values" << endl;
		for (int i = 0; i < ARR_LEN; i++) {
			cin >> arr3[i];
		}

		for (int i = 0; i < ARR_LEN; i++) {
			sum += arr3[i];
		}
		cout << "This is the sum of your values: " << sum << endl;
	}
}