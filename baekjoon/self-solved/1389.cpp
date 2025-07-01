#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

#define FOR(i, n) for (int i = 0; i < n; ++i)
#define vi vector<int>

using namespace std;

vi G[101]; // 1-based index (2 <= N <= 100)

bool csort(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second) return a.first < b.first; // 케빈 베이컨의 수가 가장 작은 사람이 여러 명인 경우 -> 번호가 가장 작은 사람
    return a.second < b.second; // 케빈 베이컨의 수가 작은순으로 정렬
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m; // 유저의 수, 친구 관계의 수
    cin >> n >> m;

    FOR(i, m)
    {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    vector<pair<int, int>> ans;
    for (int i = 1; i <= n; ++i)
    {
        vector<int> dist(n + 1, -1);

        queue<int> q;
        
        dist[i] = 0;
        q.push(i);

        while (!q.empty())
        {
            int cur = q.front(); q.pop();

            for (int next : G[cur])
            {
                if (dist[next] == -1) // not visited
                {
                    dist[next] = dist[cur] + 1;
                    q.push(next);
                }
            }
        }

        int sum = 0; // 케빈 베이컨의 수
        for (int j = 1; j <= n; ++j) sum += dist[j];
        ans.push_back({ i, sum }); // i의 케빈 베이컨 수는 sum
    }

    sort(ans.begin(), ans.end(), csort);

    // output
    cout << ans[0].first;
}
