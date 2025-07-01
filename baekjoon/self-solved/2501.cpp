#include <iostream>
#include <vector>

#define FOR(i, n) for (int i = 0; i < n; ++i)
#define vi vector<int>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    vi v;
    for (int i = 1; i <= n; ++i) if (n % i == 0) v.push_back(i);

    if (v.size() < k) cout << 0;
    else cout << v[k - 1];
}
