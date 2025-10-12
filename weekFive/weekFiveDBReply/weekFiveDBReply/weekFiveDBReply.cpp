//  Ronald Woods
//  CIS310 - T301
//  10/12/2025
//  Module 5 - Discussion Board Reply
//  Original program written by Ashtyn Ellison


#include <iostream>
using namespace std;

void askPetInfo() {
    string petType;
    string petName;

    cout << "What kind of pet do you have? ";
    cin >> petType;

    cout << "What is your pet's name? ";
    cin >> petName;

    // Added missing '<<' before endl
    cout << "You have a " << petType << " named " << petName << "!" << endl;
}

int main() {
    char morePets = 'y';

    if (morePets == 'y') {
        // Removed 'void' 
        askPetInfo();

        cout << "Thanks for sharing your pets!" << endl;
    }

    return 0;
}
