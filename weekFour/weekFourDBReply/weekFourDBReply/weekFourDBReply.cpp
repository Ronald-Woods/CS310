// Ronald Woods
// CIS310 - T301 
// 10/05/2025
// 
// Program originally written by Alexander Hinchcliff
// "Fixed" the errors all by myself :)



#include <iostream>
using namespace std;

int main() {
    int level = 1;

    // Repetition control using for loop
    for (level; level <= 5; level++)
        cout << "Player reached level " << level << "!" << endl;
        if (level == 5)
            cout << "Boss fight unlocked!" << endl;

    cout << "Final level reached: " << level << endl;

    return 0;
}