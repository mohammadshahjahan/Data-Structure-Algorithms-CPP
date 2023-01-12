//sum of digits

#include<iostream>
using namespace std;
int sod(int n,int sum){
    if(n==0){
        return sum;
    }
    else{
        int r = n%10;
        sum = sum+ r;
        n/=10;
        return sod(n,sum);
    }
}
int main(){
    int n; cin>>n;int sum =0;
    cout<<sod(n,sum)<<endl;
    return 0;
}