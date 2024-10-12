#include <iostream>
using namespace std;

int main() {
    string first, second;
    int added[21] = {0};
    int carry = 0;

    // Get the values
    cout << "Enter the first number:";
    cin >> first;
    cout << "Enter the second number:";
    cin >> second;

    // Convert digits to ints
    int x[first.length()], y[second.length()];

    for (int i = 0; i < first.length(); i++) {
        x[i] = first[first.length() - 1 - i] - '0';
    }

    for (int j = 0; j < second.length(); j++) {
        y[j] = second[second.length() - 1 - j] - '0';
    }

    // Add the arrays
    int length = max(first.length(), second.length());

    for (int i = 0; i < length; i++) {
        int sum = carry;
        if (i < first.length()) {
            sum += x[i];
        }
        if (i < second.length()) {
            sum += y[i];
        }
        added[i] = sum % 10;
        carry = sum / 10;
    }
    //Carried value
    if (carry) {
        added[length++] = carry;
    }

    // Print the result
    for (int i = length - 1; i >= 0; i--) {
        cout << added[i];
    }

    return 0;
}
