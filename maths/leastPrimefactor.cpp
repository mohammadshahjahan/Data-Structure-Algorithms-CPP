#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;
    
    for(int j=1;j<=n;j++){
        int f=0;int ans=1;
    for(int i=2;i*i<=j;i++){
        if(j%i==0){
            f = 1;ans=i;
        }
    }
    if(f==0 && j!=1){
        cout<<j<<endl;
    }
    else {
        cout<<ans<<endl;
    }
    }
    
    return 0;
}