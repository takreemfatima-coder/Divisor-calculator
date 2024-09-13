#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to find all positive divisors of a number
vector<int> findDivisors(int n) {
    vector<int> divisors;
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            divisors.push_back(i);
        }
    }
    return divisors;
}

int main() {
    cout << "This program will find all positive divisors of a given integer.\n";
    cout << "You can enter as many integers as you like.\n";
    cout << "Enter a negative or zero integer to exit.\n\n";

    while (true) {
        int num;
        cout << "Enter a positive integer: ";
        cin >> num;

        if (num <= 0) {
            cout << "Invalid input. Please enter a positive integer.\n";
            continue;
        }

        vector<int> divisors = findDivisors(num);
        sort(divisors.begin(), divisors.end(), greater<int>());

        cout << "Positive divisors of " << num << " in decreasing order:\n";
        for (size_t i = 0; i < divisors.size(); ++i) {
            cout << divisors[i] << endl;
        }

        cout << endl;

        char choice;
        cout << "Do you want to enter another integer? (Y/N): ";
        cin >> choice;

        if (choice != 'Y' && choice != 'y') {
            break;
        }
    }

    return 0;
}
