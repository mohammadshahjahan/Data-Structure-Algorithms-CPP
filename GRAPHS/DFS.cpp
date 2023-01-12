#include <iostream>
#include <vector>
using namespace std;
void dfs_visit(int i,vector<int> &chk,vector<int> adjlist[]){
    cout<<i<<" ";
    chk[i]=1;
    for(auto j: adjlist[i]){
        if(chk[j]==0) dfs_visit(j,chk,adjlist);
    }
}
void DFS(vector<int> adjlist[],int v){
    vector<int> chk(v);
    for(int i=0;i<v;i++){
        if(chk[i]==0)
        dfs_visit( i,chk,adjlist);
    }
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
        
        if (m < e)
            m++;
    }
    DFS(adjlist,v);
    return 0;
}