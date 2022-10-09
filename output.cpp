#include <iostream>

using namespace std;

namespace basics {
    string name;
    int age;
    char first_char_in_name;

    void run() {
        cout << "Hello, What is your name? " << endl;
        cin >> name;
        first_char_in_name = name[0];
        cout << "Welcome, " << name << " How old you're?" << endl;
        cin >> age;
        cout << "This is what we know about you: " << endl;
        cout << "Your name is " << name << " And you're " << age << " years old"
             << " and the first letter in you're name is: " << first_char_in_name;
    }
}

