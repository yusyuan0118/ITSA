#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int base, time;
    cin >> time >> base;
    double salary;
    if (time <= 60){
        salary = time * base;
        cout << fixed << setprecision(1) << salary << endl;
    }else if (time > 60 && time <= 120){
        salary = 60 * base + (time - 60) * base * 1.33;
        cout << fixed << setprecision(1) << salary << endl;
    }else
        salary = 60 * base + 60 * base * 1.33 + (time - 120) * base * 1.66;
        cout << fixed << setprecision(1) << salary << endl;
}
