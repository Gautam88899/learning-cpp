#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];  // declare array of size n

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];   // input elements into array
    }

    cout << "You entered: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
