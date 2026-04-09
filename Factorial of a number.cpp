/*Write a program involving user defined function to calculate factorial of a given
number*/

#include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(num < 0)
        cout << "Factorial not defined for negative numbers." << endl;
    else
        cout << "Factorial of " << num << " is " << factorial(num) << endl;

    return 0;
}
