#include <bits/stdc++.h>
using namespace std;
int p_delete(int a[],int *n){
    int x = a[*n-1];
    *n=*n-1;
    return x;
}
void insert(int a[],int *n,int x,int j){
    for(int i=*n-1;i>=j;i--){
        a[i+1]=a[i];
    }
    a[j]=x;
    n++;
}
void add(int a[],int *n,int x){
    int i=*n-1;
    while(i>=0&&a[i]<=x){
        i--;
    }
    insert(a,n,x,i+1);
}
int main(){
    int m;cin>>m;
    int *n;
    n=&m;
    int a[100]={0};
    int j;cin>>j;
    for(int i=0;i<j;i++){
        int x;cin>>x;
        add(a,n,x);
    }
    for(int i=0;i<j;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int c;cin>>c;
    for(int i=0;i<c;i++){
        int k = p_delete(a,n);
        cout<<k<<" ";
        j--;
    }
    cout<<endl;
    for(int i=0;i<j;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}