// Ronald Woods
// CIS310 - T301
// 10/09/2025
// Create a simple C++ program that has user-defined functions, but doesn't compile because of two errors. 

#include <iostream>
using namespace std;

// Function to multiply two numbers. 

int multiply(int a, int b) {
    return a * b;
}

// Function to display the results. 

void displayResult(int results) {
    cout << "The result is: " << results << endl;
}

int main() {
    int x = 5;
    int y = 10;

    int answer = multiply(x y);
    displayResult(answer);

    return 0;
}
