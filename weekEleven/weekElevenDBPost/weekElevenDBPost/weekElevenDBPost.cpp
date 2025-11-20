//  Ronald Woods
//  CS310 - T301
//  11/20/2025 
//  Week Eleven DB Post

#include <iostream>
#include <stdexcept>
using namespace std;

template <class T>
class SimpleBox {
private:
    T value;

public:
    SimpleBox(T v = 0) : value(v) {}

    // Overloaded + operator
    SimpleBox operator+(const SimpleBox& other) const {
        return SimpleBox(value + other.value);
    }

    // Member function with exception handling
    void divide(T amount) {
        try {
            if (amount == 0) {
                throw runtime_error("Cannot divide by zero!");
            }

            value = value / amount;
        }
        catch (runtime_error& e) {

            cout << "Caught error: " << e.whaat() << endl;
        }
    }

    void show() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    SimpleBox<int> a(10);
    SimpleBox<int> b(20);

    SimpleBox<int> c = a + b;
    c.show();

    // This will trigger the exception
    c.divide(0);

    
    SimpleBox<int> badBox("hello");

    badBox.show();

    return 0;
}
