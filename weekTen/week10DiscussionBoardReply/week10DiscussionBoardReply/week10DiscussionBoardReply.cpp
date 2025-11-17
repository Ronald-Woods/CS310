//  Ronald Woods
//  CS310 - T301
//  11/16/2025
//  Week 10 DB Post Reply - Original Program by Kelsey Williams 

#include <iostream>
using namespace std;

int main() {
    int value = 42;
    int* p = &value;

    cout << *p << endl;

    int arr[5];   
    arr[0] = 10;

    char c = 'A';
    char* q = &c;

    cout << *q << endl;

    return 0;
}
