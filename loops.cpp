#include <iostream>
using namespace std;

namespace loops {
	int len;
	void using_for_loop() {
		string pyramid;
		for (int i = 0; i < len; i++) {
			for (int j = 0; j < i; j++) {
				pyramid += "*";
			}
			pyramid += "\n";
		}
		cout << pyramid;
	}

	void using_while_loop() {
		string pyramid;
		int i = 0, j = 0;
		while (i < len) {
			while (j < i) {
				pyramid += "*";
				j++;
			}
			pyramid += "\n";
			j = 0;
			i++;
		}
		cout << pyramid;
	}

	void run() {
		cout << "Please enter the length" << endl;
		cin >> len;
		using_while_loop();
	}
}