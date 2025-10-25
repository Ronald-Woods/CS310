// Ronald Woods
// CIS310 - Local Election Program
// 10/25/2025

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    const int NUM_CANDIDATES = 5;
    string candidates[NUM_CANDIDATES];
    int votes[NUM_CANDIDATES];
    int totalVotes = 0;
    int winnerIndex = 0;

    // Input
    cout << "Enter the last names and number of votes for each of the 5 candidates:\n";
    for (int i = 0; i < NUM_CANDIDATES; ++i) {
        cout << "Candidate " << i + 1 << " last name: ";
        cin >> candidates[i];
        cout << "Votes received: ";
        cin >> votes[i];
        totalVotes += votes[i];
        cout << endl;
    }

    // Output header
    cout << fixed << setprecision(2);
    cout << left << setw(20) << "Candidate"
        << right << setw(20) << "Votes Received"
        << right << setw(25) << "% of Total Votes" << endl;

    // Output data
    for (int i = 0; i < NUM_CANDIDATES; ++i) {
        double percent = (static_cast<double>(votes[i]) / totalVotes) * 100;
        cout << left << setw(20) << candidates[i]
            << right << setw(20) << votes[i]
            << right << setw(25) << percent << endl;

        if (votes[i] > votes[winnerIndex])
            winnerIndex = i;
    }

    cout << "\n" << left << setw(20) << "Total Votes" << right << setw(20) << totalVotes << endl;
    cout << "\nThe winner of the election is " << candidates[winnerIndex] << "." << endl;

    return 0;
}
