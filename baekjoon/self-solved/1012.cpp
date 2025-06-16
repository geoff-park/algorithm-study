#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int a[50][50];
int vis[50][50];
int n, m, k;

const int dy[4] = { -1, 0, 1, 0 };
const int dx[4] = { 0, 1, 0, -1 };

int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		//fill(&a[50][50], &a[50][50] + 50 * 50, 0);
		//fill(&vis[50][50], &vis[50][50] + 50 * 50, 0);

		for (int i = 0; i < 50; ++i)
		{
			for (int j = 0; j < 50; ++j)
			{
				a[i][j] = 0;
				vis[i][j] = 0;
			}
		}

		cin >> m >> n >> k;

		for (int i = 0; i < k; ++i)
		{
			int x, y;
			cin >> x >> y;
			a[y][x] = 1;
		}

		int cnt = 0; // 필요한 최소의 배추흰지렁이 마리 수

		// BFS
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				if (a[i][j] == 1 && !vis[i][j])
				{
					++cnt;

					queue<pair<int, int>> q;

					vis[i][j] = 1;
					q.push({ i, j });

					while (!q.empty())
					{
						pair<int, int> cur = q.front();
						q.pop();

						for (int dir = 0; dir < 4; ++dir)
						{
							int ny = cur.first + dy[dir];
							int nx = cur.second + dx[dir];

							if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
							if (vis[ny][nx]) continue;
							if (a[ny][nx] == 0) continue;

							vis[ny][nx] = 1;
							q.push({ ny, nx });
						}
					}
				}
			}
		}

		cout << cnt << '\n';
	}
}
