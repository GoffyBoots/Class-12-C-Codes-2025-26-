#include <iostream>
using namespace std;

int main() {
    int i;
    float arr[5], sum = 0, avg;

    // Input 5 values
    for(i = 0; i < 5; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Initialize highest and lowest
    float highest = arr[0];
    float lowest = arr[0];

    // Find highest, lowest, and sum
    for(i = 0; i < 5; i++) {
        if(arr[i] > highest)
            highest = arr[i];

        if(arr[i] < lowest)
            lowest = arr[i];

        sum += arr[i];
    }

    // Calculate average
    avg = sum / 5;

    // Output results
    cout << "\nHighest = " << highest;
    cout << "\nLowest = " << lowest;
    cout << "\nAverage = " << avg;

    return 0;
}