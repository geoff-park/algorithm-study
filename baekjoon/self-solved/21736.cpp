#include <iostream>
#include <queue>

#define FOR(i, n) for (int i = 0; i < n; ++i)

using namespace std;
using pii = pair<int, int>;

const int dy[4] = { -1, 0, 1, 0 };
const int dx[4] = { 0, 1, 0, -1 };

int n, m;
char board[600][600];
bool visited[600][600];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<pii> q;

    // input
    cin >> n >> m;
    FOR(i, n)
    {
        string s;
        cin >> s;
        for (int j = 0; j < s.length(); ++j)
        {
            board[i][j] = s[j];

            if (board[i][j] == 'I')
            {
                visited[i][j] = 1;
                q.push({ i, j });
            }
        }
    }

    int cnt = 0; // 만날 수 있는 사람의 수
    while (!q.empty())
    {
        pii cur = q.front(); q.pop();
        
        FOR(dir, 4)
        {
            int ny = cur.first + dy[dir];
            int nx = cur.second + dx[dir];

            if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
            if (board[ny][nx] == 'X' || visited[ny][nx]) continue;

            visited[ny][nx] = 1;
            q.push({ ny, nx });

            if (board[ny][nx] == 'P') cnt++;
        }
    }

    if (cnt == 0) cout << "TT";
    else cout << cnt;
}
