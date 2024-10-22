
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool is_cube(ll num) {
    ll low = 1, high = 1000000;
    while (low <= high) {
        ll mid = low + (high - low) / 2;
        ll cube_mid = mid * mid ;
        if (cube_mid == num) return true;
        if (cube_mid < num) low = mid + 1;
        else high = mid - 1;
    }
    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll x;
        cin >> x;

        bool found = false;

        for (ll a = 1; a * a <= x; ++a) {
            ll a_cube = a * a ;
            ll b_cube = x - a_cube;
            if (b_cube > 0 && is_cube(b_cube)) {
                found = true;
                break;
            }
        }

        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }


}
