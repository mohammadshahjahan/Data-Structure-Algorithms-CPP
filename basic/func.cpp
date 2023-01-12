#include <iostream>
using namespace std;
void sumN(int n){
    int ans =0;
    while(n!=0){
        ans+=n;
        n--;
    }
    cout<<ans;
}
int fact(int n){
    int ans =1;
    for(int i=1;i<=n;i++){
        ans*=i;
    }
    return ans;
}
int pow(int n,int p){
    int ans =1;
   for(int i=0;i<p;i++){
    ans *= n;
   }
    return ans;
}
int main(){
    int n;cin>>n;
    sumN(n); cout<<endl;
    cout<<fact(n)<<endl;
    cout<<pow(2,3)<<endl;
    return 0;
}