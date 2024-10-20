#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, q;
    cin >> n >> k >> q;

    const int maxT = 200000;
    vector<int> coun_t(maxT + 1, 0);
   vector<int> admissible(maxT+ 1, 0);
   vector<int> ans(maxT + 1, 0);


    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;


       // for (int j = a; j <= b; j++) {
           // coun_t[j]++;
        //}
        coun_t[a]++;
        if(b+1<=maxT)coun_t[b+1]--;

    }


 for (int i = 1; i <= maxT; ++i) {
        coun_t[i] += coun_t[i - 1];
    }

for (int i = 1; i <= maxT; ++i) {
        if (coun_t[i] >= k) {
            admissible[i] = 1;
        }
    }
 for (int i = 1; i <= maxT; ++i) {
       ans[i] = ans[i - 1] + admissible[i];
    }
 for (int i = 0; i < q; ++i) {
        int l, r;
        cin >> l >> r;
        cout <<ans[r] - ans[l - 1] << endl;
    }


}
