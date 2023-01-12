#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll binaryExponentiation(ll x,ll n)
{
    ll result=1;
    while(n>0)
    {
        if(n % 2 ==1)
            result=result * x;
        x=x*x;
        n=n/2;
    }
    return result;
}
void powr(ll a, ll b,ll k){
    ll c = binaryExponentiation(a,b);
    ll d =0;
    while(d<k){
        ll r = c%10;
        c=c/10;d++;
    }
    ll r = c%10;
    cout<<r<<endl;
}
int main(){
    ll a,b,k;cin>>a>>b>>k; 
    powr(a,b,k);
    return 0;
}