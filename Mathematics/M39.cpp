#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a + b > c && b + c > a && a + c > b) {
        if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
            cout << "Right Triangle" << endl;
        } else if (a * a + b * b < c * c || a * a + c * c < b * b || b * b + c * c < a * a) {
            cout << "Obtuse Triangle" << endl;
        } else {
            cout << "Acute Triangle" << endl;
        }
    }else
        cout << "Not Triangle" << endl;
}
