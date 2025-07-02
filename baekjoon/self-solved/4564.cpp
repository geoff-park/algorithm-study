#include <iostream>
#include <string>

#define FOR(i, n) for (int i = 0; i < n; ++i)

using namespace std;

int main()
{
	while (1)
	{
		int s;
		cin >> s;

		if (s == 0) break;

		string str = to_string(s);
		cout << str << ' ';

		if (s >= 0 && s <= 9) continue;

		while (1)
		{
			int product = 1;
			for (char c : str)
			{
				product *= (c - '0');
			}

			cout << product << ' ';

			if (product >= 0 && product <= 9) break;
			else str = to_string(product);
		}

		cout << endl;
	}
}
