#include <iostream>
#include <algorithm>
using namespace std;

bool canPlaceRouters(int arr[], int n, int k, int distance) {
    int count = 1; // Place first router at the first house
    int lastPlaced = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] - lastPlaced >= distance) {
            count++; // Place a new router
            lastPlaced = arr[i];
        }
    }

    return count >= k; // Check if we can place at least k routers
}

int minimizeMaxDistance(int arr[], int n, int k) {
    sort(arr, arr + n); // Sort houses
    int left = 1, right = arr[n - 1] - arr[0];
    int result = right;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (canPlaceRouters(arr, n, k, mid)) {
            result = mid; // Update result and try for smaller distance
            right = mid - 1;
        } else {
            left = mid + 1; // Increase distance
        }
    }

    return result;
}

int main() {
    int houses[] = {1, 2, 8, 4, 9}; // Example house positions
    int n = sizeof(houses) / sizeof(houses[0]);
    int k = 3; // Number of routers to place

    int minDistance = minimizeMaxDistance(houses, n, k);
    cout << "Minimum maximum distance: " << minDistance << endl;

    return 0;
}
