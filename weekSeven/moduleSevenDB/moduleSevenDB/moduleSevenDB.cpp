//  Ronald Woods
//  CS301 - T301
//  10/23/2025
//  Module 7 Discussion Board Post - 2D Array With Errors

#include <iostream>
using namespace std;


int main() {
    // initializing the 2-dimensional array. 

    int numbers[2][3] = { {1, 2, 3}, {4, 5, 6} };

    cout << "First element: " << numbers[0][0] << endl;

    //  loop to run through each item inside of each column. 

    for (int i = 0; i < 2; i++ {
        for (int j = 0; j < 3; j++) {
            cout << numbers[i][j] << " ";
        }
        cout << endl;
    }

    return ;
}
