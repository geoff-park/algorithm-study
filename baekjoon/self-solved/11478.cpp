#include <iostream>
#include <set>

using namespace std;

set<string> strSet;

int main()
{
	string s;
	cin >> s;

	// len: 부분 문자열의 길이
	for (int len = 1; len <= s.length(); ++len)
	{
		// start: 부분 문자열의 시작 인덱스
		for (int start = 0; start <= s.length() - len; ++start)
		{
			string subStr = s.substr(start, len);
			strSet.insert(subStr);
		}
	}

	cout << strSet.size();
}
