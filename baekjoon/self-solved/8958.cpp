#include <iostream>

using namespace std;

int main()
{
	int T; cin >> T;

	while (T--)
	{
		string s; cin >> s;

		int score = 0; // 총점
		int accum = 0; // 누적 점수

		if (s[0] == 'X') score = 0;
		else if (s[0] == 'O') { score = 1;  accum = 1; }

		for (int i = 1; i < s.length(); ++i)
		{
			char cur = s[i];

			if (cur == 'X') continue;
			else if (cur == 'O')
			{
				if (s[i - 1] == 'O')
				{
					accum++;
					score += accum;
				}
				else if (s[i - 1] == 'X')
				{
					score++;
					accum = 1;
				}
			}
		}

		cout << score << '\n';
	}
}
