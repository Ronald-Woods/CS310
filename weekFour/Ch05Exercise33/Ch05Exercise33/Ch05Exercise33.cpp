// Ronald Woods
// CIS310 - T301
// 10/02/2025
// Chapter 05, Programming Exercise 33

#include <iostream>

using namespace std; 

int main() {
	int a, b, t;             //  Initializing variables for time to create first dish, next dish, and total time.
							 //  Get's the user's input. 

	cout << "Please enter the time it takes to prepare the first dish (a): "; 
	cin >> a;

	cout << "Please enter the time it takes to prepare the next dish (b): ";
	cin >> b; 

	cout << "Please enter the total time available to make dishes (t): ";
	cin >> t; 

	int totalTime = 0;     //  setting counters to zero
	int dishes = 0;

	// Repeat until total time runs out. 

	while (true) {
		int currentDishTime = a + dishes * b;			// time for the next dish
		if (totalTime + currentDishTime > t) {
			break;				// stop if we can't make the next dish
		}
		totalTime += currentDishTime;			// add this dish's time 
		dishes++;
	}
									//  Show the results! 
	cout << "Bianca can make " << dishes << " dishes." << endl;

	return 0;

}