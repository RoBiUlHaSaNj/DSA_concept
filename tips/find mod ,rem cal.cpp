#include <bits/stdc++.h>
using namespace std;

int main() {
    int t ;//= 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;


        int k = n / 4;
       //cout<<k<<endl;
 // 6-4*2
        int rem = n - 4 * k;
       // cout<<rem<<endl;

        int c = rem / 2;

        int total = c + k;

        cout << total << endl;
    }

}
