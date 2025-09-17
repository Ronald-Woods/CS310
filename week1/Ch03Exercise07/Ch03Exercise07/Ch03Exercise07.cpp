// Ronald Woods
// CIS310 - Intro to C++ Programming
// Chapter 3 Exercise 7
// 2025-09-16

#include <iostream>
#include <iomanip>
#include <locale>

using namespace std; 

int main()
{
	// Variables 

	double netBalance;
	double payment;
	double interestRate;
	int d1;
	int d2;

	// Input

	cout << "Enter net balance on account: ";
	cin >> netBalance;

	cout << "Enter payment amount: ";
	cin >> payment;

	cout << "Enter number of days in billing cycle: ";
	cin >> d1;

	cout << "Enter number of days payment is made before the billing cycle: ";
	cin >> d2;

	cout << "Enter annual interest rate as a decimal: (e.g. 0.0152 for 1.52%) ";
	cin >> interestRate;

	// Calculating the average daily balance 

	double averageDailyBalance = (netBalance * d1 - payment * d2) / d1;

	// Calculating the interest 

	double interest = averageDailyBalance * interestRate;

	// Format the output 

	cout << fixed << setprecision(2);
	locale loc("");
	cout.imbue(loc);

	cout << "\nAverage Daily Balance: $" << averageDailyBalance << endl;
	cout << "Interest: $" << interest << endl;

	return 0;
}
