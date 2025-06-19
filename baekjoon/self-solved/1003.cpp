#include <iostream>

using namespace std;

int a[2][41];

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);

	a[0][0] = 1;
	a[0][1] = 0;
	a[1][0] = 0;
	a[1][1] = 1;

	for (int i = 2; i <= 40; ++i)
	{
		a[0][i] = a[0][i - 2] + a[0][i - 1];
		a[1][i] = a[1][i - 2] + a[1][i - 1];
	}

	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;
		cout << a[0][n] << ' ' << a[1][n] << '\n';
	}
}
