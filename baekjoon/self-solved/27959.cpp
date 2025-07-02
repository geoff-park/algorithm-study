#include <iostream>

#define FOR(i, n) for (int i = 0; i < n; ++i)

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	if (n * 100 >= m) cout << "Yes";
	else cout << "No";
}
