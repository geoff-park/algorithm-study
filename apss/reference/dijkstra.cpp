/*
* BOJ 1753. 최단경로 (다익스트라 표준 코드)
*/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int v; // 정점의 개수 (1-based index)
int e; // 간선의 개수
int k; // 시작 정점의 번호

// 그래프의 인접 리스트: (연결된 정점 번호, 간선 가중치) 쌍을 담는다.
vector<pair<int, int>> adj[20001];
vector<int> dist(20001, 2e9);

void dijkstra(int src)
{
	// dist 배열 초기화
	dist[src] = 0;

	priority_queue<pair<int, int>> pq;
	pq.push({ 0, src }); // src->src 거리는 0

	while (!pq.empty())
	{
		// src->here 거리는 cost
		int cost = -pq.top().first;
		int here = pq.top().second;
		pq.pop();

		// 만약 지금 꺼낸 것보다 더 짧은 경로를 알고 있다면 지금 꺼낸 것을 무시한다.
		if (dist[here] < cost) continue;

		// 인접한 정점들을 모두 검사한다.
		for (int i = 0; i < adj[here].size(); ++i)
		{
			int there = adj[here][i].first;
			int nextDist = cost + adj[here][i].second;

			// 더 짧은 경로를 발견하면, dist[]를 갱신하고 우선순위 큐에 넣는다.
			if (dist[there] > nextDist)
			{
				dist[there] = nextDist;
				pq.push({ -nextDist, there });
			}
		}
	}
}

int main()
{
	cin >> v >> e >> k;

	for (int i = 0; i < e; ++i)
	{
		int u, v, w;
		cin >> u >> v >> w;
		adj[u].push_back({ v, w });
	}

	dijkstra(k);

	for (int i = 1; i <= v; ++i)
	{
		if (dist[i] == 2e9) cout << "INF\n";
		else cout << dist[i] << '\n';
	}
}
