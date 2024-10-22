#include <bits/stdc++.h>
using namespace std;

int binarserch(int arr[], int low, int high, int x) {
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarserch(arr, low, mid - 1, x);
        return binarserch(arr, mid + 1, high, x);
    }
    
    return -1;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);  
    vector<int> q(k);   

    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

 
    for (int i = 0; i < k; i++) {
        cin >> q[i];
    }

    //sort(arr.begin(), arr.end());


    for (int i = 0; i < k; i++) {
        int result = binarserch(arr.data(), 0, n - 1, q[i]);//no pointer

        if (result != -1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
