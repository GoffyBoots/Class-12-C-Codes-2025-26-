/*Write a C++ program to declare a class along with data members and member
functions in its body and create the objects of class in the main( ) function and call
member functions of class with the help of objects. */

#include <iostream>
using namespace std;

// Class definition
class Student {
    string name;
    int age;
public:
    void setData(string n, int a) { name = n; age = a; } // Member function to set data
    void display() { cout << "Name: " << name << ", Age: " << age << endl; } // Member function to display
};

int main() {
    Student s1, s2;  // Creating objects

    s1.setData("Ali", 18);
    s2.setData("Sara", 17);

    s1.display();    // Calling member functions
    s2.display();

    return 0;
}
