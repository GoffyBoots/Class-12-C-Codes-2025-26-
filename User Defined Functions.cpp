#include <iostream>
using namespace std;

// Function declarations
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
float divide(int a, int b) { return (b != 0) ? (float)a / b : 0; }

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Addition: " << add(x, y) << endl;
    cout << "Subtraction: " << subtract(x, y) << endl;
    cout << "Multiplication: " << multiply(x, y) << endl;
    if(y != 0)
        cout << "Division: " << divide(x, y) << endl;
    else
        cout << "Division by zero is not allowed." << endl;

    return 0;
}