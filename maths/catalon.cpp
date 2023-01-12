#include <iostream>
using namespace std;
long long dat[10000]={0};

long long cat(long long n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        long long sum=0;
        for(long long i=0;i<n;i++){
            if(dat[i]==0){
                long long s = cat(i);
                dat[i]=s;
            }
            if(dat[n-1-i]==0){
                long long s = cat(n-1-i);
                dat[n-1-i]=s;
            }
            sum+=(dat[n-1-i]*dat[i]);
            
        }
        return sum;
    }
    
}
int main(){
    dat[0]=1;
    dat[1]=1;
    long long n;cin>>n;
    cout<<cat(n);
    return 0;
}