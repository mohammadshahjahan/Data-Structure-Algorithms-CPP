#include<bits/stdc++.h>
using namespace std;
int main(){
int v=4;
int w[4][4]={0 ,5 ,INT_MAX/2,INT_MAX/2,INT_MAX/2,0,1,INT_MAX/2,8,INT_MAX/2,0,3,2,INT_MAX/2,INT_MAX/2,0};
    for(int k=0;k<v;k++){
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                w[i][j] = min(w[i][j],w[i][k]+w[k][j]);
            }
        }
    }
    for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                cout<<w[i][j]<<" ";
            }
            cout<<endl;
        }
    return 0;
}