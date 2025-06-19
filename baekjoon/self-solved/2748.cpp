#include <iostream>

using namespace std;

long long dp[100];

int main()
{
	dp[0] = 0;
	dp[1] = 1;
	for (int i = 2; i <= 90; ++i)
		dp[i] = dp[i - 2] + dp[i - 1];

	int n;
	cin >> n;
	cout << dp[n];
}
