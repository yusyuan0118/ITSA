#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[]) {
    double base, height, area;
    cin >> base >> height;
    area = base * height / 2;
    cout << fixed << setprecision(1) << area << endl;
}
