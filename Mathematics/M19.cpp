#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int min;
    cin >> min;
    double cost;
    cost = min * 0.9;
    if (min <= 800)
        cout << fixed << setprecision(1) << cost << endl;
    else if (min > 800 && min < 1500)
        cout << fixed << setprecision(1) << cost * 0.9 << endl;
    else
        cout << fixed << setprecision(1) << cost * 0.79 << endl;
}
