#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int totalSeconds;
    cin >> totalSeconds;
    int days=0, hours=0, mins=0, secs=0;
    if( totalSeconds >= 60 ){
        mins = totalSeconds / 60;
        if (mins >= 60){
            hours = mins / 60;
            mins = mins % 60;
            if (hours >= 24){
                days = hours / 24;
                hours = hours % 24;
            }
        }
    }
    secs = totalSeconds % 60;
    cout << days << " days" << endl;
    cout << hours << " hours" << endl;
    cout << mins << " minutes" << endl;
    cout << secs << " seconds" << endl;
}
