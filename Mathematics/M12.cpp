#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int distance;
    cin >> distance;
    double you = 1.0;
    double hua = 30.0 * 2.54 / 100;

    int seconds = ceil(distance / (you - hua));

    cout << seconds << endl;

}
