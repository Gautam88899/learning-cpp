#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxNum = arr[0]; // assume first element is max

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxNum)
            maxNum = arr[i];
    }

    cout << "\nMaximum number in the array is: " << maxNum << endl;

    return 0;
}
