#include <iostream>
#include <algorithm>

using namespace std;
using pii = pair<int, int>;

int isCompleteSquare[10001]; // 완전제곱수 체크

int main()
{
	for (int i = 1; i <= 100; ++i)
	{
		isCompleteSquare[i * i] = 1;
	}

	int m, n;
	cin >> m >> n;

	int sum = 0;
	int minValue = 2e9;

	for (int i = m; i <= n; ++i)
	{
		if (isCompleteSquare[i])
		{
			sum += i;
			minValue = min(minValue, i);
		}
	}

	if (sum == 0) cout << -1; // 완전제곱수가 없는 경우
	else
	{
		cout << sum << endl << minValue;
	}
}
