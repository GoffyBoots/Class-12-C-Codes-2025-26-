/*Write a C++ program that uses pointer variable*/

#include <iostream>
using namespace std;

int main() {
    int num = 25;      // Normal variable
    int *ptr = &num;   // Pointer storing address of num

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << ptr << endl;
    cout << "Value via pointer: " << *ptr << endl;

    return 0;
}
