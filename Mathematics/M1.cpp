#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[]) {
    double up, down, height;
    double area;
    cin >> up >> down >> height;
    area = (up + down) * height / 2;
    cout << fixed << setprecision(1) << "Trapezoid area:" << area << "\n";
}
