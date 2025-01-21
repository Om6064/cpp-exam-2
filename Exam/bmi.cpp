#include <iostream>
using namespace std;

int main() {
    double weight, height, bmi;
    cout << "Enter weight in kg: ";
    cin >> weight;
    cout << "Enter height in meters: ";
    cin >> height;

    if (height > 0) {
        bmi = weight / (height * height);
        cout << "Your BMI is: " << bmi << endl;
    } else {
        cout << "Height must be greater than zero." << endl;
    }
    return 0;
}
