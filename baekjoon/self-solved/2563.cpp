#include <iostream>

using namespace std;

int a[100][100];

int main()
{
	int n;
	cin >> n;

	for (int repeat = 0; repeat < n; ++repeat)
	{
		int d1, d2;
		cin >> d1 >> d2;
		// d1: 색종이의 왼쪽 변과 도화지의 왼쪽 변 사이의 거리
		// d2: 색종이의 아래쪽 변과 도화지의 아래쪽 변 사이의 거리

		for (int i = d2; i < d2 + 10; ++i)
		{
			for (int j = d1; j < d1 + 10; ++j)
			{
				a[i][j] = 1; // 색종이가 붙은 검은 영역
			}
		}
	}

	int area = 0; // 색종이가 붙은 검은 영역의 넓이

	for (int i = 0; i < 100; ++i)
	{
		for (int j = 0; j < 100; ++j)
		{
			if (a[i][j] == 1) area++;
		}
	}

	cout << area;
}
