#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

#define FOR(i, n) for (int i = 0; i < n; ++i)

using namespace std;
using ll = long long;

int main()
{
	int n;
	cin >> n;

	vector<pair<ll, ll>> points(n);
	FOR(i, n)
	{
		cin >> points[i].first >> points[i].second;
	}

	ll area2 = 0;

	FOR(i, n)
	{
		int j = (i + 1) % n; // 다음 점 (마지막이면 첫 점으로 연결)
		area2 += points[i].first * points[j].second;
		area2 -= points[j].first * points[i].second;
	}

	cout << fixed << setprecision(1) << abs(area2) / 2.0;
}
