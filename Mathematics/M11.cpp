#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int money, ten=0, five=0, one=0;
    cin >> money;
    while (money != 0){
        if (money >= 10){
            money = money - 10;
            ten++;
        }else if (money >= 5){
            money = money - 5;
            five++;
        }else{
            money = money - 1;
            one++;
        }
    }
    cout << "NT10=" << ten << endl;
    cout << "NT5=" << five << endl;
    cout << "NT1=" << one << endl;
}
