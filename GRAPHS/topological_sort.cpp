#include <iostream>
#include <vector>
#include <stack>
using namespace std;
void dfs_visit(int i,vector<int> &chk,vector<int> adjlist[],stack<int>&s){
    
    chk[i]=1;
    for(auto j: adjlist[i]){
        if(chk[j]==0) {
            dfs_visit(j,chk,adjlist,s);
            
        }
        
    }
    s.push(i);
    
}
void topo(vector<int> adjlist[],int v,vector<int> &ans){
    vector<int> chk(v);
    stack<int> s;
    for(int i=0;i<v;i++){
        if(chk[i]==0)

        dfs_visit( i,chk,adjlist,s);
    }
    while(!s.empty()){
        int a = s.top();
        ans.push_back(a);
        s.pop();
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
        
        
    }
    vector<int> ans;
    topo(adjlist,v,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}