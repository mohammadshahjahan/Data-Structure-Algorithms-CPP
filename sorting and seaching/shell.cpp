#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    int g = n/2;
    while(g>0){
        int j = g ;
        for(int i=0;i<n;i+=g){
            if(a[i]>a[j]){
                int temp = a[i]; a[i]=a[j]; a[j]=temp;
            }
            if(a[i]<a[i-g] && (i-g)>=0){
                int temp = a[i]; a[i]=a[i-g]; a[i-g]=temp;
            }
            j++;
        }
        
        g/=2;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}