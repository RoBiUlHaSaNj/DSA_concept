
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Example array
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();

    // Create a prefix sum array
    vector<int> prefix(n, 0);

    // Fill the prefix sum array
    prefix[0] = arr[0];
    for (int i = 1; i < n; ++i) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    //Output the original array
   cout << "Original Array: ";
   for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Output the prefix sum array
    cout << "Prefix Sum Array: ";
    for (int i = 0; i < n; ++i) {
        cout << prefix[i] << " ";
    }
    cout << endl;

    // Example: Sum of subarray arr[1] to arr[3] (i.e., 2 + 3 + 4)
    int left = 1, right = 3;
    int sum_subarray = prefix[right] - (left > 0 ? prefix[left - 1] : 0);
    cout << "Sum of subarray arr[1] to arr[3]: " << sum_subarray << endl;

    return 0;
}
