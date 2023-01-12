#include <iostream>
using namespace std;
int gcd(int a,int b){
    if(a==b){
        return a;
    }
    else{
    if(a>b){
        gcd(a-b,b);
    }
    else{
        gcd(a,b-a);
    }
    }
}
int GCD(int a,int b){
    if(a==0){
        return b;
    }
    else if(b==0){
        return a;
    }
    else{
        if(a>b){
            GCD(a%b,b);
        }
        else{
            GCD(a,b%a);
        }
    }
}
int main(){
    int a,b; cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    cout<<GCD(a,b);
    return 0;
}