#include <iostream>
using namespace std;

int main() {
    int num1;
    int array1[10];

    // Input for the first array
    cout << "Enter the number of elements for the first array (up to 10): ";
    cin >> num1;
    cout << "Enter First " << num1 << " Elements: ";
    for (int i = 0; i < num1; i++) {
        cin >> array1[i];
    }

    // Display the first array
    cout << "First Array: ";
    for (int i = 0; i < num1; i++) {
        cout << array1[i] << " ";
    }

    return 0;
}
