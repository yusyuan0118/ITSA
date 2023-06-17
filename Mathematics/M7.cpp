#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int inch;
    cin >> inch;
    double km;
    km = inch * 1.6;
    km = round(km * 10) / 10;
    cout << fixed << setprecision(1) << km << endl;
}
