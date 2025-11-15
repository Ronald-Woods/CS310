//  Ronald Woods
//  CS310 - Local Election Program 
//  10/25/2025 - 11/14/2025
// 
//  Program updated to use Dynamic Arrays and Pointers


#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int numCandidates;

    cout << "How many candidates are in the election? ";
    cin >> numCandidates;

    if (numCandidates <= 0) {
        cout << "Number of candidates must be greater than 0." << endl;
        return 1;
    }

    // Dynamic arrays (these are pointers under the hood)
    string* candidates = new string[numCandidates];
    int* votes = new int[numCandidates];

    int totalVotes = 0;
    int winnerIndex = 0;

    // Input
    cout << "\nEnter the last names and number of votes for each candidate:\n";
    for (int i = 0; i < numCandidates; ++i) {
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
    for (int i = 0; i < numCandidates; ++i) {
        double percent = 0.0;
        if (totalVotes > 0) {
            percent = (static_cast<double>(votes[i]) / totalVotes) * 100.0;
        }

        cout << left << setw(20) << candidates[i]
            << right << setw(20) << votes[i]
            << right << setw(25) << percent << endl;

        if (votes[i] > votes[winnerIndex]) {
            winnerIndex = i;
        }
    }

    cout << "\n" << left << setw(20) << "Total Votes"
        << right << setw(20) << totalVotes << endl;

    cout << "\nThe winner of the election is "
        << candidates[winnerIndex] << "." << endl;

    // Free the dynamic memory
    delete[] candidates;
    delete[] votes;

    return 0;
}