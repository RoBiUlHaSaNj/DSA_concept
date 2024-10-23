int findPeakElement(int arr[], int n) {
    int left = 0, right = n - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        // If the mid element is less than its right neighbor, then the peak must be on the right
        if (arr[mid] < arr[mid + 1]) {
            left = mid + 1;
        } else { // Otherwise, the peak is on the left including mid
            right = mid;
        }
    }

    return left; // or right, both are the peak index
}
