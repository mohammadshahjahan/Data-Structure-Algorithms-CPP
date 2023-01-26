#include <iostream>
#include <vector>
using namespace std;
class DisJointSet{
    
    public:
    vector<int> rank,parent,size;
    DisJointSet(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);
        size.resize(n+1);
        for(int i=0;i<n;i++){
            parent[i]=i;
            size[i]=1;
        }
    }
    int findparent(int node){
        if(node == parent[node])return node;
        return parent[node]=findparent(parent[node]);
    }
    void unionByRank(int u,int v){
        int ulp_u = findparent(u);
        int ulp_v = findparent(v);
        if(ulp_u==ulp_v)return ;
        if(rank[ulp_u]<rank[ulp_v]){
            parent[ulp_u]=ulp_v;
        }
        else if(rank[ulp_u]>rank[ulp_v]){
            parent[ulp_v]=ulp_u;
        }
        else {
            rank[ulp_u]++;
            parent[ulp_v]=ulp_u;
        }
    }
    void unionBySize(int u,int v){
        int ulp_u = findparent(u);
        int ulp_v = findparent(v);
        if(ulp_u==ulp_v)return ;
        if(size[ulp_u]<size[ulp_v]){
            parent[ulp_u]=ulp_v;
            size[ulp_v]+=size[ulp_u];
        }
        else{
            parent[ulp_v]=ulp_u;
            size[ulp_u]+=size[ulp_v];
        }
    }

};
int main(){
    DisJointSet ds(7);
    ds.unionByRank(1,2);
    ds.unionByRank(2,3);
    ds.unionByRank(4,5);
    ds.unionByRank(6,7);
    ds.unionByRank(5,6);
    // Check if 3 and 7 are in same component or not
    if(ds.findparent(3) == ds.findparent(7))cout<<"Yes ,they are in same component"<<endl;
    else cout<<"No, they are'not in same component"<<endl;
    ds.unionByRank(3,7);
    // Check again if 3 and 7 are in same component or not
    if(ds.findparent(3) == ds.findparent(7))cout<<"Yes ,they are in same component"<<endl;
    else cout<<"No, they are'not in same component"<<endl;

    DisJointSet ds2(7);
    ds2.unionByRank(1,2);
    ds2.unionByRank(2,3);
    ds2.unionByRank(4,5);
    ds2.unionByRank(6,7);
    ds2.unionByRank(5,6);
    // Check if 3 and 7 are in same component or not
    if(ds2.findparent(3) == ds2.findparent(7))cout<<"Yes ,they are in same component"<<endl;
    else cout<<"No, they are'not in same component"<<endl;
    ds2.unionByRank(3,7);
    // Check again if 3 and 7 are in same component or not
    if(ds2.findparent(3) == ds2.findparent(7))cout<<"Yes ,they are in same component"<<endl;
    else cout<<"No, they are'not in same component"<<endl;
    return 0;
}