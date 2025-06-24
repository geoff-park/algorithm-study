#include <iostream>
#include <queue>
#include <vector>

using namespace std;

queue<int> q;
vector<int> v; // answer

int main()
{
	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= n; ++i) q.push(i);

	while (!q.empty())
	{
		for (int i = 0; i < k - 1; ++i) // (k-1) 번 반복
		{
			int cur = q.front();
			q.pop();
			q.push(cur);
		}

		v.push_back(q.front());
		q.pop();
	}

	// output
	cout << '<';
	for (int i = 0; i < v.size() - 1; ++i) cout << v[i] << ", ";
	cout << v[v.size() - 1] << '>';
}
