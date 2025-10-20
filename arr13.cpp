#include <iostream>
using namespace std;

int main() {
    int n;

    // Taking size of array from user
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    // Taking array elements input
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Counting number of elements
    int count = 0;
    for (int i = 0; i < n; i++) {
        count++;
    }

    cout << "Total number of elements in the array = " << count << endl;

    return 0;
}
