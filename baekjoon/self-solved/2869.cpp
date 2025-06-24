#include <iostream>

using namespace std;

int main()
{
	int a, b, v;
	cin >> a >> b >> v;

	v -= a;

	int day = a - b;

	if (v % day == 0) cout << v / day + 1;
	else cout << (v / day + 1) + 1;
}
