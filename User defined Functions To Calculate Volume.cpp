#include <iostream>
using namespace std;

// Function definitions
float cylinderVolume(float r, float h) { return 3.14159 * r * r * h; }
float sphereVolume(float r) { return (4.0/3) * 3.14159 * r * r * r; }
float cubeVolume(float a) { return a * a * a; }

int main() {
    int choice;
    cout << "Choose shape: 1-Cylinder 2-Sphere 3-Cube: ";
    cin >> choice;

    if(choice == 1) {
        float r, h;
        cout << "Enter radius and height: ";
        cin >> r >> h;
        cout << "Cylinder Volume: " << cylinderVolume(r, h) << endl;
    }
    else if(choice == 2) {
        float r;
        cout << "Enter radius: ";
        cin >> r;
        cout << "Sphere Volume: " << sphereVolume(r) << endl;
    }
    else if(choice == 3) {
        float a;
        cout << "Enter side length: ";
        cin >> a;
        cout << "Cube Volume: " << cubeVolume(a) << endl;
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}