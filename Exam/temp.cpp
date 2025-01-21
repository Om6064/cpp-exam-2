#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    fahrenheit = (9.0 / 5.0) * celsius + 32;
    cout << "Temperature in Fahrenheit: " << fahrenheit << "F" << endl;
    return 0;
}
