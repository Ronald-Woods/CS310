//  Ronald Woods
//  CIS310 - T301
//  09/25/2025
//  Royalty Program with Options

#include <iostream>       // 
#include <iomanip>        // for the decimals and setprecision lines

using namespace std; 

int main() {

	// Constants
	const double manuscriptPayment = 5000.0;
	const double publicationPayment = 20000.0;
	const double royaltyRateOption2 = 0.125; 
	const double royaltyRateOption3First = 0.10; 
	const double royaltyRateOption3Second = 0.14;
	const int option3Limit = 4000;

	// Variables
	double netPrice; 
	int copiesSold; 
	double royaltyOne, royaltyTwo, royaltyThree; 

	// Input 
	cout << "Enter the selling price of each copy: (For example, $7.50 would be 7.50) ";
	cin >> netPrice;

	cout << "Enter the estimated number of copies to be sold: ";
	cin >> copiesSold;

	// Option 1 
	royaltyOne = manuscriptPayment + publicationPayment; 

	// Option 2 
	royaltyTwo = royaltyRateOption2 * netPrice * copiesSold; 

	// Option 3
	if (copiesSold <= option3Limit) {
		royaltyThree = royaltyRateOption3First * netPrice * copiesSold;
	}
	else {
		royaltyThree = (royaltyRateOption3First * netPrice * option3Limit) +
			(royaltyRateOption3Second * netPrice * (copiesSold - option3Limit));
	}

	// Output
	cout << fixed << setprecision(2);
	cout << "\nRoyalty Option 1: $" << royaltyOne << endl; 
	cout << "Royalty Option 2: $" << royaltyTwo << endl; 
	cout << "Royalty Option 3: $" << royaltyThree << endl; 

	// Determine the best option!
	double bestRoyalty = royaltyOne; 
	string bestOption = "Option 1";

	if (royaltyTwo > bestRoyalty) {
		bestRoyalty = royaltyTwo;
		bestOption = "Option 2";
	}

	if (royaltyThree > bestRoyalty) {
		bestRoyalty = royaltyThree;
		bestOption = "Option 3";
		}
	
		cout << "\nThe best option is " << bestOption
			<< " with estimated royalties of $" << bestRoyalty << endl; 
		
		return 0;
}