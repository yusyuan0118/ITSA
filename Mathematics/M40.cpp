#include <iostream>

using namespace std;

int main() {
    int N, sum=0;
    cin >> N;
    for (int i = 1; i <= N; i++){
        cout << i;
        sum += i;
        if (i != N)
            cout << " + " ;
    }
    cout << " = " << sum << endl;
}
