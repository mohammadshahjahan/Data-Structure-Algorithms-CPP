#include <bits/stdc++.h>
using namespace std;
int main()
{
    int v, e;
    cin >> v >> e;
    vector<vector<int>> edges;

    for (int i = 0; i < e; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edges.push_back({a, b, c});
    }
    vector<pair<int, int>> adj[v];
    for (auto i : edges)
    {
        adj[i[0]].push_back({i[1], i[2]});
        adj[i[1]].push_back({i[0], i[2]});
    }
    vector<int> parent(v);
    for (int i = 0; i < v; i++)
        parent[i] = i;
    parent[0] = -1;
    vector<int> dis(v, 1e9);
    dis[0] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, 0});
    while (!pq.empty())
    {
        auto it = pq.top();
        pq.pop();
        int node = it.second;
        int w = it.first;
        for (auto j : adj[node])
        {
            if (dis[j.first] > w + j.second)
            {
                dis[j.first] = w + j.second;
                parent[j.first] = node;
                pq.push({w + j.second, j.first});
            }
        }
    }
    for (int i = 0; i < v; i++)
    {
        cout << "Node: " << i << " distance from " << parent[i] << " : " << dis[i] << endl;
    }

    return 0;
}