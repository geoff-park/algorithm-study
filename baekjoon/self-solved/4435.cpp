#include <iostream>

#define FOR(i, n) for (int i = 0; i < n; ++i)

using namespace std;

int a[6];
int s1[6] = { 1, 2, 3, 3, 4, 10 };
int b[7];
int s2[7] = { 1, 2, 2, 2, 3, 5, 10 };

int main()
{
	int tc;
	cin >> tc;

	for (int battle = 1; battle <= tc; ++battle)
	{
		FOR(i, 6) cin >> a[i];
		FOR(i, 7) cin >> b[i];

		int sum1 = 0;
		int sum2 = 0;

		FOR(i, 6) sum1 += a[i] * s1[i];
		FOR(i, 7) sum2 += b[i] * s2[i];

		cout << "Battle " << battle << ": ";
		if (sum1 > sum2) cout << "Good triumphs over Evil";
		else if (sum1 < sum2) cout << "Evil eradicates all trace of Good";
		else cout << "No victor on this battle field";
		cout << endl;
	}
}
