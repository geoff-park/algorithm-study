#include <iostream>

#define FOR(i, n) for (int i = 0; i < n; ++i)

using namespace std;

int x[1001], y[1001];

int main()
{
	FOR(i, 3)
	{
		int a, b;
		cin >> a >> b;
		x[a]++, y[b]++;
	}

	for (int i = 1; i <= 1000; ++i)
	{
		if (x[i] == 1) cout << i << ' ';
	}
	for (int i = 1; i <= 1000; ++i)
	{
		if (y[i] == 1) cout << i;
	}
}
