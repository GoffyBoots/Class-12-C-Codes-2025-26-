/*Write a simple program using & to return memory address of a variable and storing it
in a pointer variable. */

#include <iostream>
using namespace std;

int main() {
    int num = 42;       // Variable
    int *ptr = &num;    // Pointer storing address of num

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Pointer ptr points to: " << ptr << endl;
    cout << "Value at ptr: " << *ptr << endl;

    return 0;
}
