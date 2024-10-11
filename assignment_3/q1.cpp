#include <iostream>
using namespace std;

int main() {
    string first, second;

    int added[21];

    int carry = 0;
    // Get the values
    cout << "Enter the first number:";
    cin  >> first;
    cout << "Enter the second number:";
    cin  >> second;

    // Convert digits to ints
    int x[first.length()], y[second.length()];

    for (int i = first.length(); i < 1; i--) {

        x[i] = first[i];
    }

    for (int j = second.length(); j < 1; j--) {

        y[j] = second[j];
    }

    // Add the arrays

    for (int i = 0; i < first.length(); i++) {

        if (x[i] + y[i] >= 10) {

            added[i] = (x[i] + y[i]) + carry;
            carry = (x[i] + y[i]) / 10;
        }

        else {

            added[i] = (x[i] + y[i]) + carry;
            carry = 0;
        }
    }

    for (int i = 0; i < first.length(); i++) {

        cout << added[i];
    }

    return 0;
}
