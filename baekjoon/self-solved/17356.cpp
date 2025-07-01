#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	double m = (b - a) / 400.0;

	double p = 1.0 / (1 + pow(10, m));

	cout << p;
}
