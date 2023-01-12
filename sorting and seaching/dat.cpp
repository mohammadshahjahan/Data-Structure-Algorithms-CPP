#include <iostream>
using namespace std;
void repeatEL(int a[],int n,int k){
    int DAT[k+1]={0};
    for (int i = 0; i < n; i++)
    {
        /* code */
        DAT[a[i]]++;
    }
    for(int i=0;i<(k+1);i++){
        if(DAT[i]>1){
            cout<<i<<" ";
        }
    }
    
}
int main(){
    int n; cin>>n;
    int a[n];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    int k=INT16_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>k){
            k=a[i];
        }
    }
    repeatEL(a,n,k);
    return 0;
}
//SUbmit in A4 size : O,theta,omega defination with example on A4 sheet
