#include <iostream>
#include <cmath>
using namespace std;
const int N=1e5+2,mod = 1e9+7;
int dp[N];
int MinSquare(int n){
    if(n==1 || n==2 || n==3 || n==0){
        return n;
    }
    if(dp[n]!=mod) return dp[n];
    
    for(int i = 1;i*i<=n;i++){
        dp[n] = min(dp[n],1 + MinSquare(n-i*i));
    }
    return dp[n];
}
int main(){
    int n;cin>>n;
    for(int i=0;i<N;i++){
        dp[i]=mod;
    }
    cout<< MinSquare(n) <<endl;
    return 0;
}