#include <iostream>

#define FOR(i, n) for (int i = 0; i < n; ++i)

using namespace std;

int main()
{
	int n;
	cin >> n;

	while (n % 2 == 0)
	{
		n = n / 2;
	}

	if (n == 1) cout << 1;
	else cout << 0;
}
