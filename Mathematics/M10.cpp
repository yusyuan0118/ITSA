#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    double c;
    cin >> c;
    double f;
    f = c * 9 / 5 + 32;
    f = round(f * 10) / 10;
    cout << fixed << setprecision(1) << f << endl;
}
