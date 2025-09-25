// Ronald Woods
// CIS310 - T301
// 09/24/2025
// Week Three - Discussion Board Program/Post
// Create a program that exhibits control statements, but does not execute with two errors in the code. 

#include <iostream>
#include <iomanip>

using namespace std; 

int main() 

	int age;
	string firstName;

	cout << " Enter your first name: ";
	cin >> firstName;

	cout << " Enter your age: ";
	cin >> age;

	if (age >= 21) {
		cout << " Hello, " << firstName << " . Guess what? You're coming drinking, buddy!" << endl;
	} 
	else {
		cout << "Hello, " << firstName << " . We're going to need you to watch the kids. We're going drinking! " << endl;

}
return 0; 

}