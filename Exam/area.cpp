#include <iostream>
using namespace std;

int main() {
    double base1, base2, height, area;
    cout << "Enter base1: ";
    cin >> base1;
    cout << "Enter base2: ";
    cin >> base2;
    cout << "Enter height: ";
    cin >> height;

    area = ((base1 + base2) / 2) * height;
    cout << "The area of the trapezoid is: " << area << endl;
    return 0;
}
