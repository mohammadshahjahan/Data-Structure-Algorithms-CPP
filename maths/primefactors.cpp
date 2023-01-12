#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n+1]={0};
    for(int i=2;i*i<=n;i++){
        for(int j=i*i;j<=n;j+=i){
            a[j]=1;
        }
    }
    int f=0;
    for(int i=2;i<=n;i++){
        if(n%i==0 && a[i]==0){
            cout<<i<<" ";f=1;
        }
    }
    if(f==0)cout<<n<<" ";
    return 0;
}