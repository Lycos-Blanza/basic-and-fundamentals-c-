#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    int array1[10];
    int array2[10];

    // Input for the first array
    cout << "Enter the number of elements for the first array (up to 10): ";
    cin >> num1;
    cout << "Enter First " << num1 << " Elements: ";
    for (int i = 0; i < num1; i++) {
        cin >> array1[i];
    }

    // Input for the second array
    cout << "Enter the number of elements for the second array (up to 10): ";
    cin >> num2;
    cout << "Enter Second " << num2 << " Elements: ";
    for (int i = 0; i < num2; i++) {
        cin >> array2[i];
    }

    // Display both arrays
    cout << "First Array: ";
    for (int i = 0; i < num1; i++) {
        cout << array1[i] << " ";
    }

    cout << "\nSecond Array: ";
    for (int i = 0; i < num2; i++) {
        cout << array2[i] << " ";
    }

    return 0;
}
