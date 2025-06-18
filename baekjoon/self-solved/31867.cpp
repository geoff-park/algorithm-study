#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	string k;
	cin >> n >> k;

	int cnt1 = 0; // 짝수의 개수
	int cnt2 = 0; // 홀수의 개수

	for (char c : k)
	{
		int num = c - '0';
		if (num % 2 == 0) cnt1++;
		else cnt2++;
	}

	if (cnt1 > cnt2) cout << 0;
	else if (cnt1 < cnt2) cout << 1;
	else cout << -1;
}
