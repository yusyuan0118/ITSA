#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int startHour, startMin, endHour, endMin;
    cin >> startHour >> startMin;
    cin >> endHour >> endMin;
    int totalMin = (endHour - startHour) * 60 + (endMin - startMin);
    int totalHours = totalMin / 60;
    int totalMins = totalMin % 60;

    int parkingFee = 0;
    if (totalMin <= 120) {
        parkingFee = (totalHours * 2) * 30;
        if (totalMins > 30){
            parkingFee += 30;
        }
    } else if (totalMin >120 && totalMin <= 240) {
        parkingFee = 4 * 30 + (totalHours - 2) * 2 * 40;
        if (totalMins > 30){
            parkingFee += 40;
        }
    } else {
        parkingFee = 4 * 30 + 4 * 40 + (totalHours - 4) * 2 * 60;
        if (totalMins > 30){
            parkingFee += 60;
        }
    }
    cout << parkingFee << endl;

}
