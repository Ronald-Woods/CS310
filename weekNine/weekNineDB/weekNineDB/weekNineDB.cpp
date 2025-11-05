// Ronald Woods
// CS310 - T301
// Week Eight - Discussion Board Reply
// Superhero inheritance program with 2 errors

#include <iostream>
using namespace std;

// Base class
class Superhero {
public:
    string name;
    string power;

    void showPower() {
        cout << name << " uses " << power << "!" << endl;
    }
};

// Child class #1
class Flyer : public Superhero {
public:
    void action() {
        cout << name << " flies through the sky!" << endl;
    }
};

// Child class #2
class StrongHero : public superhero {
public:
    void action() {
        cout << name << " lifts a car with super strength!" << endl;
    }
};

int main() {
    Flyer hero1;
    hero1.name = "SkyFlash";
    hero1.power = "Wind Blast";

    StrongHero hero2;
    hero2.name = "MegaMuscle";
    hero2.power = "Titan Punch";

    hero1.action()

    hero2.power = "Thunder Fist";

    return 0;
}
