#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main(int argc, const char * argv[]) {
    int n1, n2;
    cin >> n1 >> n2;
    int result = gcd(n1, n2);
    cout << result << endl;
}
