#include <iostream>

using namespace std;

int main()
{
	int STR, DEX, INT, LUK, N;
	cin >> STR >> DEX >> INT >> LUK >> N;

	// 평균이 N이 되기 위해선 스탯의 합이 (N * 4)이어야 함
	int sum = STR + DEX + INT + LUK;
	if (sum >= N * 4) cout << 0;
	else cout << N * 4 - sum;
}
