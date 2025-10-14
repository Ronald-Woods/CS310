//  Ronald Woods
//  CIS310 - T301
//  10/14/2025
//  Module 6 Discussion Board Post - With Errors

#include <iostream>
using namespace std;

//  Setting up the enum variable. 
enum Grade { A, B, C, D, F };

int main() {
    Grade studentGrade = B;

    //  Output showing the student's grade.
    cout << "The student's grade is: ";  

    // Had to add this in to make the student grade show a Letter grade instead of a place in the enum variable. 
    switch (studentGrade) {
    case A: cout << "A"; break;
    case B: cout << "B"; break; 
    case C: cout << "C"; break;
    case D: cout << "D"; break;
    case F: cout << "F"; 
    }

    cout << endl

        return 0;
}
