#include <iostream>
#include <vector>

using namespace std;

// Function to perform Linear Search and find all occurrences
vector<int> linearSearch(int arr[], int size, int key) {
    vector<int> indices; // Stores all indices where key is found

    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            indices.push_back(i); // Store index if found
        }
    }
    return indices; // Return vector of found indices
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
    vector<int> result = linearSearch(arr, n, key);

    // Display the result
    if (!result.empty()) {
        cout << "Element found at index(es): ";
        for (int index : result) {
            cout << index << " ";
        }
        cout << endl;
    } else {
        cout << "Element not found!" << endl;
    }

    return 0;
}
