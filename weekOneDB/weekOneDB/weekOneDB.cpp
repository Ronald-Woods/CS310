// Ronald Woods
// 09/16/2025
// Week One Discussion Board Post/Application 
// "Simple" C++ program that uses input/output streams, but that
// does not function. 


#include <iostream>
using namespace std;

int main() {
    int age;
    string name;   // ERROR 1: <string> header is missing!

    cout << "Enter your name: ";
    cin << name;   // ERROR 2: Wrong operator (should be >>, not <<)

    cout << "Enter your age: ";
    cin >> age;

    cout << "Hello, " << name << "! You are " << age << " years old." << endl;

    return 0;
}
