//  Ronald Woods
//  CIS310 - T301
//  10/10/2025

//  Chapter 06, Exercise 14

#include <iostream>
using namespace std; 

//  Declaring Functions
double calculateBill(double hourlyRate, int timeMinutes, bool lowIncome);
void displayBill(double bill);

int main() {
	double hourlyRate;
	int consultingTime; 
	char incomeStatus;
	bool lowIncome; 

	//  Get user input 
	cout << "Enter hourly rate: $ ";
	cin >> hourlyRate; 

	cout << "Enter total consulting time (in minutes): ";
	cin >> consultingTime; 

	cout << "Is the person considered low income? (y/n): ";
	cin >> incomeStatus; 
	lowIncome = (incomeStatus == 'y' || incomeStatus == 'Y');

	//  Call function to calculate bill
	double bill = calculateBill(hourlyRate, consultingTime, lowIncome);

	//  Call void function to display the result
	displayBill(bill);

	return 0;
}

//  Function for calculating bill (all the math)
double calculateBill(double hourlyRate, int timeMinutes, bool lowIncome) {
	double bill = 0.0;

	if (lowIncome) {
		if (timeMinutes > 30) {
			bill = 0.4 * hourlyRate * ((timeMinutes - 30) / 60.0);
		}
	}
	else {
		if (timeMinutes > 20) {
			bill = 0.7 * hourlyRate * ((timeMinutes - 20) / 60.0);
		}
	}

	return bill;
}

//  Void function definition
void displayBill(double bill) {
	cout << "The billing amount in total is: $" << bill << endl;
}
