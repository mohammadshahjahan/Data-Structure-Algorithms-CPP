#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int main()
{
	int V = 8;
	vector<vector<int>> edges = {{0,1,6},{0,5,3},{0,6,6},{0,2,10},{1,5,2},{5,6,1},{6,2,1},{2,3,7},{6,3,5},{6,7,9},{3,7,4},{7,4,4},{3,4,3}};
	vector<vector<int>> adj[V];
	for (auto it : edges) {
		vector<int> tmp(2);
		tmp[0] = it[1];
		tmp[1] = it[2];
		adj[it[0]].push_back(tmp);

		tmp[0] = it[0];
		tmp[1] = it[2];
		adj[it[1]].push_back(tmp);
	}

    vector<int>vis(V);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
    q.push({0,0});
    int mst =0;
    while(!q.empty()){
        auto it = q.top();
        q.pop();
        if(vis[it.second]==1)continue;
        vis[it.second]=1;
        mst+=it.first;
        for(auto i: adj[it.second]){
            if(!vis[i[0]]){
                q.push({i[1],i[0]});
            }
        }
    }
    cout<<mst<<endl;
    return 0;
}