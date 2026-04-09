#include <iostream>
using namespace std;

int main() {
    int A[4][4], B[4][4], C[4][4];
    int r, c, i, j, k;

    cout << "Enter rows and columns: ";
    cin >> r >> c;

    cout << "Enter Matrix A:\n";
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            cin >> A[i][j];

    cout << "Enter Matrix B:\n";
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            cin >> B[i][j];

    // Addition
    cout << "\nAddition:\n";
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            C[i][j] = A[i][j] + B[i][j];
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    // Subtraction
    cout << "\nSubtraction:\n";
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            C[i][j] = A[i][j] - B[i][j];
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    // Multiplication
    cout << "\nMultiplication:\n";
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            C[i][j] = 0;
            for(k = 0; k < c; k++)
                C[i][j] += A[i][k] * B[k][j];

            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}