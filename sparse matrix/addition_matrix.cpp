#include <bits/stdc++.h>
using namespace std;
signed main(){
    int n;cin>>n;
    vector<int>v(n*n);
    int m;cin>>m;
    for(int i=0;i<m;i++){
        int k,j,val;
        cin>>k>>j>>val;
        int index = (k*n) + j;
        v[index]+=val;
    }
    int l;cin>>l;
    for(int i=0;i<l;i++){
        int k,j,val;
        cin>>k>>j>>val;
        int index = (k*n) + j;
        v[index]+=val;
    }
    for(int i=0;i<v.size();i++){
        if(i%3==0)cout<<endl;
        cout<<v[i]<<" ";
    }
    return 0;
}