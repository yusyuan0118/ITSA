#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int i;
    cin >> i;
    int result;
    result = pow(2, i);
    if (i > 31){
        cout << "Value of more than 31" << endl;
    }else{
        cout << result << endl;
    }
    
}
