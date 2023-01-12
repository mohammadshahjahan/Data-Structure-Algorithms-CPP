#include <bits/stdc++.h>
using namespace std;
int bins(int a[],int n , int key,int s,int e){
    int mid = (s+e)/2;
    if(a[mid]==key){
        return mid;
    }
    else{
        if(s>e){
            return -1;
        }
        else if(key>a[mid]){
            s= mid+1;
            bins(a,n,key,s,e);
        }

        else {
            e = mid-1;
            bins(a,n,key,s,e);
        }
        
        
    }
}
int main(){
    int n; cin>>n;
    int a[n];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    int s=0,e=n-1;
    int key;cin>>key;
    cout<<bins(a,n,key,s,e)<<endl;;
    vector<int>v;
    v.push_back(3);
    v.push_back(1);
    sort(v.begin(),v.end());
    cout<<v[0]<<" "<<v[1];
    return 0;
}