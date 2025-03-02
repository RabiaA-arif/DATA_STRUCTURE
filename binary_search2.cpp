#include <iostream>

using namespace std;

// Function to perform Binary Search (Iterative)
int binarySearch(int arr[], int size, int key) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Avoids overflow

        if (arr[mid] == key) {
            return mid; // Key found at index 'mid'
        } else if (arr[mid] < key) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }

    return -1; // Key not found
}

// Main function to test Binary Search
int main() {
    int n, key;

    cout << "Enter the number of elements: ";
    cin >> n;

    // Dynamic memory allocation for array
    int* arr = new int[n];

    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> key;

    // Calling the binary search function
    int result = binarySearch(arr, n, key);

    // Display the result
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found!" << endl;
    }

    // Free dynamically allocated memory
    delete[] arr;

    return 0;
}
