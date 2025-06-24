#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	while (1)
	{
		string s;
		getline(cin, s);

		if (s == ".") break;

		stack<char> stk;

		int isBalance = 1;

		for (char c : s)
		{
			if (c == '(')
			{
				stk.push(c);
			}
			else if (c == ')')
			{
				if (!stk.empty() && stk.top() == '(') stk.pop();
				else isBalance = 0;
			}
			else if (c == '[')
			{
				stk.push(c);
			}
			else if (c == ']')
			{
				if (!stk.empty() && stk.top() == '[') stk.pop();
				else isBalance = 0;
			}
			else
			{
				continue;
			}
		}

		if (!stk.empty()) isBalance = 0;

		if (isBalance) cout << "yes\n";
		else cout << "no\n";
	}
}
