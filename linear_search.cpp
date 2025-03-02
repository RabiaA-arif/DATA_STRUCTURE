#include <iostream>

using namespace std;

// Function to perform Linear Search
int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // Return the index where key is found
        }
    }
    return -1; // Return -1 if key is not found
}

// Main function to test Linear Search
int main() {
    int n, key;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n]; // Array of size 'n'
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> key;

    // Calling the linear search function
    int result = linearSearch(arr, n, key);

    // Display the result
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found!" << endl;
    }

    return 0;
}
