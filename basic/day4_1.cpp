#include <iostream>
using namespace std;
bool palindrome(int n){
    if(n/10 == 0){           
        return true;
    }
    else{
        int t =n;int a =0;
        while(t>0){
            int r = t%10;
            a = a*10 + r;
            t/=10;}
        if(a==n){
            return true;
            }
            else{
            return false;
        }
    }
}
int main(){
    int n; cin>>n;
    cout<<palindrome(n);
    return 0;
}