//  Ronald Woods
//  CS310 - T301
//  10/15/2025
//  Chapter 07 - Exercise 04
//  Program asks the user for a string, removes all vowels, and shows the result.

#include <iostream>
#include <string>
using namespace std;

// Define an enumeration for the vowels
enum Vowel {
    A = 'A', E = 'E', I = 'I', O = 'O', U = 'U',
    a = 'a', e = 'e', i = 'i', o = 'o', u = 'u'
};

// Function that checks if a character is a vowel
bool isVowel(char ch) {
    if (ch == A || ch == E || ch == I || ch == O || ch == U ||
        ch == a || ch == e || ch == i || ch == o || ch == u) {
        return true;
    }
    else {
        return false;
    }
}

// Function that removes vowels from the string
string removeVowels(string input) {
    string result = "";

    for (int i = 0; i < input.length(); i++) {
        if (isVowel(input[i])) {   
            result = result + input[i];
        }
    }

    return result;
}

int main() {
    string userInput;

    cout << "Enter a word or sentence: ";
    getline(cin, userInput);

    string newString = removeVowels(userInput);

    cout << "Without vowels: " << newString << endl;

    return 0;
}
