#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[50], str2[50];

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    // strcpy
    char copy[50];
    strcpy(copy, str1);
    cout << "\nCopy of first string: " << copy;

    // strcat
    strcat(str1, str2);
    cout << "\nConcatenated string: " << str1;

    // strlen
    cout << "\nLength of second string: " << strlen(str2);

    // strcmp
    int result = strcmp(str1, str2);
    if(result == 0)
        cout << "\nStrings are equal";
    else
        cout << "\nStrings are not equal";

    return 0;
}