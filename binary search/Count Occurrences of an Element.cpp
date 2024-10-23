#include <iostream>
using namespace std;

typedef long long int ll;
const int mx = 1e7 + 123;
ll ara[mx];

int findFirstOccurrence(int arr[], int n, int target) {
    int left = 0, right = n - 1, result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            result = mid; // Update result and search left for first occurrence
            right = mid - 1;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}

int findLastOccurrence(int arr[], int n, int target) {
    int left = 0, right = n - 1, result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            result = mid; // Update result and search right for last occurrence
            left = mid + 1;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}

int countOccurrences(int arr[], int n, int target) {
    int first = findFirstOccurrence(arr, n, target);
    if (first == -1) return 0; // Element not found

    int last = findLastOccurrence(arr, n, target);
    return last - first + 1; // Count = last - first + 1
}

int main() {
    // Example usage
    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 2;

    int count = countOccurrences(arr, n, target);
    cout << "Count of " << target << ": " << count << endl;

    return 0;
}
