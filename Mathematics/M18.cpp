#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;
    for (int i = 7; i >= 0; --i) {
        int mask = 1 << i;
        int bit = (num & mask) >> i;
        cout << bit;
    }
    cout << endl;
}
