#include <iostream>
using namespace std;

int main() {
    double angle1, angle2, angle3;
    cout << "Enter first angle: ";
    cin >> angle1;
    cout << "Enter second angle: ";
    cin >> angle2;

    if (angle1 + angle2 < 180) {
        angle3 = 180 - (angle1 + angle2);
        cout << "The third angle is: " << angle3 << "" << endl;
    } else {
        cout << "Invalid angles. The sum of the two angles should be less than 180." << endl;
    }
    return 0;
}
