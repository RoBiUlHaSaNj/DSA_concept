#include <bits/stdc++.h>
using namespace std;


using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

   
    while (k--) {
        int q;
        cin >> q;

        auto it = upper_bound(arr.begin(), arr.end(), q);

        // Get the index of the largest element <= q
        int index = it - arr.begin();

        // If index == 0, no element <= q
        if (index == 0) {
            cout << 0 << endl;
        } else {
            cout << index << endl;
        }
    }

    return 0;
}
