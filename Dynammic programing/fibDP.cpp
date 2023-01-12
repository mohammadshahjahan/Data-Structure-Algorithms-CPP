#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+2;
int fib[N] ;
// TOP DOWM APPROACH [MEMORIZATION]
int fibo(int n){
    if(n==0 ){
        return 0;
    }
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    if(fib[n]!=-1){
        return fib[n];
    }
    fib[n]  = fibo(n-1)+ fibo(n-2);
    
    return fib[n];
}
int main(){
    int n; cin>>n;
    for (int i = 0; i < N; i++)
    {
        /* code */
        fib[i]=-1;
    }
    
    cout<<fibo(n)<<endl;
    //BOTTOM UP APPROACH [TABULATION]
    int bif[n+1];bif[1]=0;bif[2]=1;
    for(int i =3;i<=n;i++){
        bif[i]= bif[i-1]+bif[i-2];
    }
    cout<<bif[n]<<endl;
    return 0;
}