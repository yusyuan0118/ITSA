#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int x, y;
    cin >> x >> y;
    if (sqrt(x * x + y * y) <= 100){
        cout << "inside" << endl;
    }else
        cout << "outside" << endl;
}
