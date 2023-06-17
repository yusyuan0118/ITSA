#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n1, n2, sum=0;
    cin >> n1 >> n2;
    if (n2 > n1){
        for (int i = n1; i <= n2; i++){
            sum += i;
        }
        cout << sum << endl;
    }else{
        for (int i = n2; i <= n1; i++){
            sum += i;
        }
        cout << sum << endl;
    }
}
