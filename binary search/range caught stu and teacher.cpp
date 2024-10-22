#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

using namespace std;

using ll = long long;

int main()
{
    fast;
    int t;
    cin >> t;

    while (t--)
    {
        ll n, m, q;
        cin >> n >> m >> q;

        vector<ll> m_val(m);
        vector<ll> q_val(q);

        for (int i = 0; i < m; i++) cin >> m_val[i];
        for (int i = 0; i < q; i++) cin >> q_val[i];

        sort(m_val.begin(), m_val.end());

        for (int i = 0; i < q; i++)
        {
           ll x = q_val[i];


            auto it = lower_bound(m_val.begin(), m_val.end(),x );



            if (it == m_val.end()) {
                cout << (n - m_val[m - 1]) << endl;
            }

            else if (it == m_val.begin()) {
                cout << (m_val[0] - 1) << endl;
            }
            else
            {

                ll temp = abs(m_val[it - m_val.begin()] - m_val[it - m_val.begin() - 1]) - 1;
                cout << (temp + 1) / 2 << endl;
            }
        }
    }
}
