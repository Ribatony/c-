#include <iostream>
using namespace std;

// Function to perform binary search
int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid; // Target found, return index
        if (arr[mid] < target)
            left = mid + 1; // Search the right half
        else
            right = mid - 1; // Search the left half
    }
    return -1; // Target not found
}

int main() {
    int n, target;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the sorted array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the target value to search: ";
    cin >> target;

    int result = binarySearch(arr, n, target);
    if (result != -1) {
        cout << "Target value " << target << " found at index: " << result << endl;
    } else {
        cout << "Target value " << target << " is not present in the array." << endl;
    }

    return 0;
}

