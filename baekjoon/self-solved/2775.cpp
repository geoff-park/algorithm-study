#include <iostream>

using namespace std;

int a[15][15];

int main()
{
	for (int i = 1; i <= 14; ++i) a[0][i] = i; // 0층의 i호에는 i명이 산다.

	for (int floor = 1; floor <= 14; ++floor)
	{
		for (int ho = 1; ho <= 14; ++ho)
		{
			a[floor][ho] = 0;

			// a층의 b호에 살려면 자신의 아래(a-1)층의 1호부터 b호까지 사람들의 수의 합만큼 사람들을 데려와 살아야 한다.
			for (int i = 1; i <= ho; ++i)
			{
				a[floor][ho] += a[floor - 1][i];
			}
		}
	}

	int t;
	cin >> t;

	while (t--)
	{
		int k, n;
		cin >> k >> n;
		cout << a[k][n] << '\n';
	}
}
