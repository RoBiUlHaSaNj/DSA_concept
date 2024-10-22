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

        auto it = lower_bound(arr.begin(), arr.end(), q);

     
        int index = it - arr.begin()+1;

    
        if (index == 0) {
            cout << 0 << endl;
        } else {
            cout << index << endl;
        }
    }

    return 0;
}
