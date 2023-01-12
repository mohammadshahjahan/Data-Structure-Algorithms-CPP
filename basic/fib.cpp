#include <iostream>
using namespace std;
int fib(int n){
    if(n==0)
    {
        return 0;
    }
    if(n==1){
        return 1;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}
void fibo(int n){
    for(int i =0;i<n;i++){
        cout<<fib(i)<<" ";
    }
}
int main(){
    int n;cin>>n;
    fibo(n);
    return 0;
}
//16 11 6 1 -4 1 6 11 16
