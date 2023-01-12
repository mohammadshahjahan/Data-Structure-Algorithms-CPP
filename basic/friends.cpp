#include <iostream>
using namespace std;
int fr(int n){
    if(n==0||n==1||n==2){return n;}
    return fr(n-1)+fr(n-2)*(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<fr(n);
    return 0;
}