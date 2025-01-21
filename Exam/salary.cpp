#include <iostream>
using namespace std;

int main() {
    double baseSalary, hraPercent, daPercent, taPercent, grossSalary;
    cout << "Enter Base Salary: ";
    cin >> baseSalary;
    cout << "Enter HRA percentage: ";
    cin >> hraPercent;
    cout << "Enter DA percentage: ";
    cin >> daPercent;
    cout << "Enter TA percentage: ";
    cin >> taPercent;

    grossSalary = baseSalary + (baseSalary * hraPercent / 100) + (baseSalary * daPercent / 100) + (baseSalary * taPercent / 100);
    cout << "Gross Salary: Rs. " << grossSalary << endl;
    return 0;
}
