//Write a C++ program in which a class uses both public and private access specifiers.

#include <iostream>
using namespace std;

class Student {
private:
    int age;           // Private data member
public:
    string name;       // Public data member

    void setAge(int a) { age = a; }      // Public member function to set private data
    void display() { cout << "Name: " << name << ", Age: " << age << endl; } // Display
};

int main() {
    Student s;
    s.name = "Ali";     // Accessing public member directly
    s.setAge(18);       // Accessing private member via public function
    s.display();

    return 0;
}
