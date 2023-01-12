#include <iostream>
using namespace std;
int main(){
    float n;cin>>n;
    float ans=0;
    int m; cin>>m;float sum =0;int f=1;
    for(int i=1;i<=n;i++){
        if(i%2==0){
        ans-=(1.0/i);}
        else{
            ans+=(1.0/i);
        }
    }
    for(int i=1;i<=m;i++){
        f*=i;
        sum += (1.0/f); 
    }
    
   
    cout<<ans<<" "<<sum;
    return 0;
}