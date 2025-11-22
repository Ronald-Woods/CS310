//  Ronald Woods
//  CS310 - T301
//  Chapter 13, Exercise 17 - RNG with Try/Catch Exception 

#include <iostream>
#include <random>
#include <vector>
#include <stdexcept>

using namespace std;

int main() {
	try {
		char choice;

		cout << "Are you ready to generate 25 random numbers between 10 and 100? (Please enter Y or N): ";
		cin >> choice;

		// Validate Input 
		if (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n') {
			throw invalid_argument("You must enter a Y or N.");
		}
		if (choice == 'N' || choice == 'n') {
			cout << "Okay, exiting program. " << endl;
			return 0;
		}

		random_device rd;
		mt19937 gen(rd());
		uniform_int_distribution<> dist(10, 100);

		vector<double> numbers;

		cout << "Generating 25 random numbers between 10 and 100: \n\n";

		for (int i = 0; i < 25; i++) {
			double value = dist(gen);
			numbers.push_back(value);
			cout << value << endl;
		}
	}
	catch (const exception& e) {
		cout << "\nAn error occurred: " << e.what() << endl;
	}
	return 0;
}
