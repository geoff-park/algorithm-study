#include <iostream>

using namespace std;

int input[8];
int ascending[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
int descending[8] = { 8, 7, 6, 5, 4, 3, 2, 1 };

int main()
{
	for (int i = 0; i < 8; ++i) cin >> input[i];

	int isAscending = 1;
	int isDescending = 1;

	for (int i = 0; i < 8; ++i)
	{
		if (input[i] != ascending[i]) isAscending = 0;
		if (input[i] != descending[i]) isDescending = 0;
	}

	if (isAscending) cout << "ascending";
	else if (isDescending) cout << "descending";
	else cout << "mixed";
}
