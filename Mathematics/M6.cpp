#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    double n1;
    cin >> n1;
    double area;
    area = n1 * n1;
    area = round(area * 10) / 10;
    cout << fixed << setprecision(1) << area << endl;
}
