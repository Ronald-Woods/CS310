// Ronald Woods
// CIS310 - Week __
// Simple classes with intentional errors

#include <iostream>
using namespace std;

class Dog {
public:
    string name;
    int age;
};

class Cat {
public:
    string name;
    int age;
};

int main() {

    Dog myDog;
    myDog.name = "Buddy";
    myDog.age = 3;

    Cat myCat;
    myCat.Age = 5;

    cout << "My dog is " << myDog.age << " years old"

        return 0;
}
