#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int> bfsOfGraph(int V, vector<int> adj[])
{
    vector<int> ans;
    vector<int> chk(V, 0);
    queue<int> q;
    q.push(0);
    chk[0] = 1;
    while (!q.empty())
    {
        int a = q.front();
        q.pop();
        ans.push_back(a);
        for (auto it : adj[a])
        {
            if (!chk[it])
            {
                chk[it] = 1;
                q.push(it);
            }
        }
    }
    return ans;
}
int main()
{
    int v, e;
    cin >> v >> e;
    vector<int> adjlist[v];
    int m = 0;
    for (int i = 1; i <= e; i++)
    {
        int a, b;
        cout << "Enter the end points of Edge " << i << " ";
        cin >> a >> b;
        adjlist[a].push_back(b);
        adjlist[b].push_back(a);

        if (m < e)
            m++;
    }
    cout << endl;
    vector<int> bfs = bfsOfGraph(v, adjlist);
    for (auto i : bfs)
        cout << i << " ";
    return 0;
}