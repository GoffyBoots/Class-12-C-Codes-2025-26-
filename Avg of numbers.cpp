#include <iostream>
using namespace std;

// Function to calculate average
float average(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += arr[i];
    return (float)sum / n;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int numbers[n];
    cout << "Enter " << n << " numbers: ";
    for(int i = 0; i < n; i++)
        cin >> numbers[i];

    cout << "Average: " << average(numbers, n) << endl;
    return 0;
}