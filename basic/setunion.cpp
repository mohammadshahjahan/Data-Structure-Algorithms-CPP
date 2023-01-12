#include<iostream>
using namespace std;
void union_set(int a[],int b[],int c[],int n,int m,int t){
    int i=0,j=0,k=0;
    while(i<n&&j<m){
        if(a[i]<b[j]){
            c[k]=a[i];
            k++;i++;
        }
        else{
            if(a[i]==b[j]){
                c[k]=b[j];
                k++;j++;i++;
            }
            else{
                c[k]=b[j];
                k++;j++;
            }
        }
    }
    while(i<n){
        c[k]=a[i];
        k++;i++;
    }
     while(j<m){
        c[k]=b[j];
        k++;j++;
    }
    for(int i=0;i<k;i++){
        cout<<c[i]<<" ";
    }
}
int main(){
    cout<<"NUMBER OF ELEMENTES IN SET A : ";
    int n;cin>>n;
    cout<<endl;
    cout<<"NUMBER OF ELEMENTES IN SET B : ";
    int m;cin>>m;
    cout<<endl;
    int a[n];
    int b[m];
    cout<<"GIVE THE ELEMENTS IN THE SET A : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"GIVE THE ELEMENTS IN THE SET B : ";
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int t = n+m;
    int c[t]={0};
    union_set(a,b,c,n,m,t);
    return 0;
}