/*Write a program involving user defined function to calculate area of circle, triangle
and parallelogram.*/

#include <iostream>
using namespace std;

// Function to calculate area of a circle
float areaCircle(float r) {
    return 3.1416 * r * r;
}

// Function to calculate area of a triangle
float areaTriangle(float b, float h) {
    return 0.5 * b * h;
}

// Function to calculate area of a parallelogram
float areaParallelogram(float b, float h) {
    return b * h;
}

int main() {
    int choice;
    cout << "Choose shape to calculate area:\n1.Circle\n2.Triangle\n3.Parallelogram\n";
    cin >> choice;

    if(choice == 1) {
        float r; 
        cout << "Enter radius: "; 
        cin >> r;
        cout << "Area of circle: " << areaCircle(r) << endl;
    }
    else if(choice == 2) {
        float b, h; 
        cout << "Enter base and height: "; 
        cin >> b >> h;
        cout << "Area of triangle: " << areaTriangle(b, h) << endl;
    }
    else if(choice == 3) {
        float b, h; 
        cout << "Enter base and height: "; 
        cin >> b >> h;
        cout << "Area of parallelogram: " << areaParallelogram(b, h) << endl;
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
