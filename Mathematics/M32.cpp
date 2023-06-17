#include <iostream>

using namespace std;

int main() {
    int number;
    cin >> number;

    int originalNumber = number;
    int sum = 0;

    while (number > 0) {
        int digit = number % 10;
        sum += digit * digit * digit;
        number /= 10;
    }

    if (sum == originalNumber) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
