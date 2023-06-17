#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int N;
    cin >> N;
    int i = 1;
    while(i < N+1){
        cout << i << "*" << i << "=" << i * i << endl;
        i++;
    }
}
