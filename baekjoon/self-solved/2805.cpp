#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, m;
    cin >> n >> m;

    vector<ll> v(n);
    for (ll i = 0; i < n; ++i) cin >> v[i];

    ll left = 0;
    ll right = *max_element(v.begin(), v.end());
    ll maxHeight = -1;

    while (left <= right)
    {
        ll mid = (left + right) / 2;

        ll k = 0;
        for (ll i = 0; i < n; ++i)
        {
            if (v[i] <= mid) continue;
            else k += (v[i] - mid);
        }

        if (k < m)
        {
            right = mid - 1;
        }
        else
        {
            maxHeight = max(maxHeight, mid);
            left = mid + 1;
        }
    }

    cout << maxHeight;
}
