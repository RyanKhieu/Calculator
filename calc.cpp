/**
* Name: Ryan Khieu
* Program Name: Calculator
* Date: 9/12/2024
* Extra: Find squared of both numbers
*/

#include <iostream>
#include <cmath>
using namespace std;

float num1, num2;
float num1temp, num2temp;

int main() {
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    num1temp = num1;
    num2temp = num2;

    cout << num1 << " + " << num2 << " = " << ceil((num1 + num2) * 100) / 100 << endl;
    cout << num1 << " - " << num2 << " = " << ceil((num1 - num2) * 100) / 100 << endl;
    cout << num2 << " - " << num1 << " = " << ceil((num2 - num1) * 100) / 100 << endl;
    cout << num1 << " * " << num2 << " = " << ceil((num1 * num2) * 100) / 100 << endl;
    cout << num1 << " / " << num2 << " = " << ceil((num1 / num2) * 100) / 100 << endl;
    cout << num2 << " / " << num1 << " = " << ceil((num2 / num1) * 100) / 100 << endl;
    cout << num1 << " % " << num2 << " = " << ceil(((int)num1 % (int)num2) * 100) / 100 << endl;
    cout << num2 << " % " << num1 << " = " << ceil(((int)num2 % (int)num1) * 100) / 100 << endl;
    cout << num1 << " +1 = " << ceil((++num1temp) * 100) / 100 << endl;
    cout << num2 << " -1 = " << ceil((--num2temp) * 100) / 100 << endl;
    cout << num1 << " squared = " << ceil((num1 * num1) * 100) / 100 << endl;
    cout << num2 << " squared = " << ceil((num2 * num2) * 100) / 100 << endl;
}