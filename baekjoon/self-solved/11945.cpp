#include <iostream>

using namespace std;

int a[10][10];

int main()
{
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; ++i)
	{
		string s;
		cin >> s;
		for (int j = 0; j < m; ++j)
		{
			a[i][j] = s[j] - '0';
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = m - 1; j >= 0; --j)
		{
			cout << a[i][j];
		}
		cout << '\n';
	}
}
